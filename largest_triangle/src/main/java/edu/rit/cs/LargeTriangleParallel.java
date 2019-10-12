//package edu.rit.cs;
//
///*
// * LargeTriangleParallel.java
// *
// * Version:
// *     $Id$
// *
// * Revisions:
// *     $Log$
// */
//
//import java.util.ArrayList;
//import java.util.List;
//import mpi.MPI;
//import mpi.*;
//import mpi.MPIException;
//
//public class LargeTriangleParallel {
//    private double maxarea = 0.0;
//    private Point p1, p2, p3
//            ;
//    private int index1, index2, index3;
//
//    /**
//     * This method calculates the area of the triangle given the lengths of 3 sides.
//     *
//     * @param a: The side length of the triangle.
//     * @param b: The side length of the triangle.
//     * @param c: The side length of the triangle.
//     *
//     */
//
//    public double calc_area(double a, double b, double c) {
//        double s = (a + b + c) / 2;
//        double area = Math.sqrt(s * (s - a) * (s - b) * (s - c));
//        return area;
//    }
//
//    /**
//     * This method calculates the cartesian length between 2 points.
//     *
//     * @param p1: The first point.
//     * @param p2: The second point.
//     *
//     */

//    public double sidelen(Point p1, Point p2) {
//        double xlen = Math.pow((p2.getX() - p1.getX()), 2);
//        double ylen = Math.pow((p2.getY() - p1.getY()), 2);
//        double len = Math.sqrt(xlen + ylen);
//        return len;
//    }
//
//    /**
//     * This method calculates the maximum area that can be formed between
//     * 3 points from a start index to end index.
//     *
//     * @param points: The list of points to check max area.
//     * @param start: The start point to check the points list from.
//     * @param end: The end point to check the points list from.
//     *
//     */
//
//    public void findmax_triangle(List<Point> points, int start, int end) {
//        for (int i = start; i < end; i++) {
//            Point p1 = points.get(i);
//            for (int j = i + 1; j < points.size() - 1; j++) {
//                Point p2 = points.get(j);
//                double a = sidelen(p1, p2);
//                for (int k = j + 1; k < points.size(); k++) {
//                    Point p3 = points.get(k);
//                    double b = sidelen(p2, p3);
//                    double c = sidelen(p1, p3);
//                    if (!(a > (b + c) || b > (a + c) || c > (a + b))) {
//                        double area = calc_area(a, b, c);
//                        if (area > this.maxarea) {
//                            this.maxarea = area;
//                            this.p1 = p1;
//                            this.p2 = p2;
//                            this.p3 = p3;
//                            this.index1 = i + 1;
//                            this.index2 = j + 1;
//                            this.index3 = k + 1;
//                        }
//                    }
//
//                }
//            }
//        }
//    }
//
//    /**
//     * This method manages the message passing of the program and prints out the
//     * max area and the points used for that area and their indexes.
//     *
//     * @param points: The list of points to check max area.
//     * @param start: The time when the program started.
//     *
//     */
//
//    public void find_large_triangle(List<Point> points, long start) throws MPIException {
//
//        int rank = MPI.COMM_WORLD.getRank(), size = MPI.COMM_WORLD.getSize();
//        int chunksize = points.size() / size;
//        int sendbuffstart[] = new int[size];
//        int sendbuffstop[] = new int[size];
//        int rcvstart[] = new int[1];
//        int rcvstop[] = new int[1];
//        int index1buff[] = {Integer.MAX_VALUE};
//        int index2buff[] = {Integer.MAX_VALUE};
//        int index3buff[] = {Integer.MAX_VALUE};
//        int finindex1[] = new int[1];
//        int finindex2[] = new int[1];
//        int finindex3[] = new int[1];
//
//        int temp = 0;
//        for (int m = 0; m < size - 1; m++) {
//            sendbuffstart[m] = temp;
//            sendbuffstop[m] = temp + chunksize;
//            temp = temp + chunksize;
//
//        }
//        sendbuffstart[size - 1] = temp;
//        sendbuffstop[size - 1] = points.size();
//
//        MPI.COMM_WORLD.scatter(sendbuffstart, 1, MPI.INT, rcvstart, 1, MPI.INT, 0);
//        MPI.COMM_WORLD.scatter(sendbuffstop, 1, MPI.INT, rcvstop, 1, MPI.INT, 0);
//        findmax_triangle(points, rcvstart[0], rcvstop[0]);
//        double sBuf[] = {this.maxarea};
//        double rBuf[] = new double[1];
//        MPI.COMM_WORLD.allReduce(sBuf, rBuf, 1, MPI.DOUBLE, MPI.MAX);
//        if(this.maxarea == rBuf[0]) {
//            index1buff[0] = this.index1;
//        }
//        MPI.COMM_WORLD.allReduce(index1buff,finindex1, 1, MPI.INT, MPI.MIN);
//        if(this.index1 == finindex1[0]) {
//            index2buff[0] = this.index2;
//        }
//        MPI.COMM_WORLD.allReduce(index2buff,finindex2, 1, MPI.INT, MPI.MIN);
//        if(this.index1 == finindex1[0] && this.index2 == finindex2[0]) {
//            index3buff[0] = this.index3;
//        }
//        MPI.COMM_WORLD.allReduce(index3buff,finindex3, 1, MPI.INT, MPI.MIN);
//        if(this.index1 == finindex1[0] && this.index2 == finindex2[0] && this.index3 == finindex3[0]){
//            System.out.printf("%d %.5g %.5g%n", this.index1, points.get(this.index1 - 1).getX(), points.get(this.index1 - 1).getY());
//            System.out.printf("%d %.5g %.5g%n", this.index2, points.get(this.index2 - 1).getX(), points.get(this.index2 - 1).getY());
//            System.out.printf("%d %.5g %.5g%n", this.index3, points.get(this.index3 - 1).getX(), points.get(this.index3 - 1).getY());
//            System.out.printf("%.5g%n", rBuf[0]);
//            long end = System.currentTimeMillis();
//            System.out.println("Time taken(ms): " + (end - start));
//        }
//
//
//
//    }
//
//    /**
//     * This is the main method.
//     *
//     * @param args
//     */
//
//    public static void main(String[] args) throws MPIException {
//        long start = System.currentTimeMillis();
//        MPI.Init(args);
//        int numPoints = 100;
//        LargeTriangleParallel max = new LargeTriangleParallel();
//        RandomPoints rndPoints = new RandomPoints(numPoints, 100, 142857);
//        List<Point> points = new ArrayList<>();
//        Point p;
//        while (rndPoints.hasNext()) {
//            p = rndPoints.next();
//            points.add(p);
//        }
//
//        max.find_large_triangle(points, start);
//
//        MPI.Finalize();
//
//    }
//}
