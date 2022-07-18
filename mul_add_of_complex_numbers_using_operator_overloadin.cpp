#include<iostream>
using namespace std;
class complex
{
    public:
    int img,real,a,b;
    void get(int a, int b)
    {
        real=a;
        img=b;
    }
    void show()
    {
        cout<<"result ="<<real<<"+"<<img<<"i\n";
    }
    complex operator +(complex c)
    {
        complex obj;
        obj.real= real+c.real;
        obj.img= img+c.img;
        return obj;
    }
    complex operator*(complex h)
    {
        complex obj;
        obj.real=(real* h.real)-(img*h.img);
        obj.img=(real*h.img)+(img*h.real);
        return obj;

    }
    
};

int main()
{
    complex c1,c2,c3,c4;
    cout<<"enter the real and img part of 1st no :";
    cin>>c1.a>>c1.b;
    c1.get(c1.a,c1.b);
    cout<<"enter the real and img part of 2nd no :";
    cin>>c2.a>>c2.b;
    c2.get(c2.a,c2.b);
    c3=c1+c2;
    c3.show();
    c4=c1*c2;
    c4.show();
    return 0;
}