#include <iostream>

using namespace std;
class Rectangle
{
public:
    int length;
    int breadth;
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    // creating an object of classs Rectangle named r1 in stack
    Rectangle r1;
    r1.length =10;
    r1.breadth =5;
    cout<< "the are and perimeter for rectangle stored in stack is :";
    cout<<r1.area()<<endl<<r1.perimeter()<<endl;
    // now we are creating an object of classs Rectangle in heap
    Rectangle *p = new Rectangle();
    p->length=15;
    p->breadth=10;
    cout<< "the are and perimeter for rectangle stored in heap is :";
    cout<<p->area()<<endl<<p->perimeter()<<endl;
    return 0;
}
