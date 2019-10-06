package edu.rit.cs;


import java.util.ArrayList;
import java.util.List;

public class LargeTriangle
{
    private double maxarea = 0.0;
    private Point p1,p2,p3;
    private int index1,index2,index3;
    public double calc_area(double a, double b, double c){
        double s = (a+b+c)/2;
        double area = Math.sqrt(s*(s-a)*(s-b)*(s-c));
        return area;
    }

    public double sidelen(Point p1, Point p2){
        double xlen = Math.pow((p2.getX()-p1.getX()),2);
        double ylen = Math.pow((p2.getY()-p1.getY()),2);
        double len = Math.sqrt(xlen+ylen);
        return len;
    }

    public void find_large_triangle(List<Point> points){
        for(int i = 0;i< points.size()-2;i++){
            Point p1 = points.get(i);
            for(int j = i+1;j< points.size()-1;j++){
                Point p2 = points.get(j);
                double a = sidelen(p1,p2);
                for(int k = j+1;k< points.size();k++){
                    Point p3 = points.get(k);
                    double b = sidelen(p2,p3);
                    double c = sidelen(p1,p3);
                    if(!(a>(b+c) || b>(a+c) || c>(a+b))){
                        double area = calc_area(a,b,c);
                        if(area > this.maxarea){
                            this.maxarea = area;
                            this.p1 = p1;
                            this.p2 = p2;
                            this.p3 = p3;
                            this.index1 = i+1;
                            this.index2 = j+1;
                            this.index3 = k+1;
                        }
                    }

                }
            }
        }
    }
    public static void main( String[] args ) {
        int numPoints = 100;
        LargeTriangle max = new LargeTriangle();
        RandomPoints rndPoints = new RandomPoints(numPoints, 100, 123);
        List<Point> points = new ArrayList<>();
        int idx=1;
        Point p;
        while(rndPoints.hasNext()) {
            p = rndPoints.next();
            points.add(p);
            System.out.println(idx+": x=" + p.getX() + " y=" + p.getY());
            idx++;
        }
        max.find_large_triangle(points);
        System.out.printf ("%d %.5g %.5g%n", max.index1, max.p1.getX(), max.p1.getY());
        System.out.printf ("%d %.5g %.5g%n", max.index2, max.p2.getX(), max.p2.getY());
        System.out.printf ("%d %.5g %.5g%n", max.index3, max.p3.getX(), max.p3.getY());
        System.out.printf ("%.5g%n", max.maxarea);



    }
}
