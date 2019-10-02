package edu.rit.cs;


public class LargeTriangle
{
    public static void main( String[] args ) {
        int numPoints = 100;
        RandomPoints rndPoints = new RandomPoints(numPoints, 5, 123);
        Point p;
        while(rndPoints.hasNext()) {
            p = rndPoints.next();
            System.out.println("x=" + p.x + " y=" + p.y);
        }

    }
}
