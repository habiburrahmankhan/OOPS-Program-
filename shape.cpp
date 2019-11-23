#include <iostream>
using namespace std;
void hrkhan()
{
    cout<<"Name :- Habiburrahman"<<endl;
    cout<<"Rollno :-  17BCS071 "<<endl;
    cout<<"B-Tech 5th Semester (Compute Engineering ) "<<endl;
    cout<<endl;
}
class Shape
{
protected:
    int width,height;
    float radius;
public:
    Shape(int a=0,int b=0)
    {
        width=a;
        height=b;
        radius=0;
    }
    Shape(float rad)
    {
        width=0;
        height=0;
        radius=rad;
    }
    virtual void area()
    {
        cout << "Parent class area: " << endl;
    }
};

class Rectangle:public Shape
{
    public:
    Rectangle(int a,int b):Shape(a,b)
    {

    }
    void area()
    {
        cout << "rectangle area: " << width*height;
    }
};

class Triangle:public Shape
{
    public:
    Triangle(int a,int b):Shape(a,b)
    {}
    void area()
    {
        cout << "\n\nTriangle class area: " << (float)(width*height/2);
    }
};

class Circle:public Shape
{
    public:
    Circle(float r):Shape(r)
    {

    }
    void area()
    {
        cout << "\n\nArea of circle is: " << (float)(3.1416*radius*radius);
    }
};
int main()
{
    hrkhan();
	Shape *shape;
	Rectangle rec(10,7);
	Triangle tri(10,5);
	Circle cir(10);
	shape=&rec;
	shape->area();
	shape=&tri;
	shape->area();
	shape=&cir;
	shape->area();
	cout << "\n\n";
	return 0;
}
