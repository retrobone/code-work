//21.04.2025 , simple interface implementation
interface Polygon{
    public float area();
    public float perimeter();
}

class RectangleS implements Polygon{
    public float area(float x, float y){
        float area=x*y;
        return area;
    }

    public float perimeter(float x, float y){
        float p=2*(x+y);
        return p;
    }
}

class SquareS implements Polygon{
    public float area(float x){
        float area=x*x;
        return area;
    }

    public float perimeter(float x){
        float p=4*x;
        return p;
    }
}

public class InterfaceSample{
    public static void main(String[] args) {
        RectangleS r1=new RectangleS();
        SquareS s1=new SquareS();
        float rectarea=r1.area(5,4);
        float rectperi=r1.perimeter(5,4);
        float squarea=s1.area(6);
        float squaperi=s1.perimeter(8);
        System.out.println("Area of rectangle = "+ rectarea);
        System.err.println("Perimeter of rectangle = " + rectperi);
        System.out.println("Area of square = "+ squarea);
        System.err.println("Perimeter of square = " + squaperi);
    }
}
