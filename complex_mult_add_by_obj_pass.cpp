#include<iostream>
using namespace std;
class complex
{
    public:
    float real,img;
    void getdata()
    {
        cout<<"\nEnter the real and imaginary part of the complex no. :";
        cin>>real>>img;
    }
    void add(complex c1,complex c2)
    {
        real=c1.real+c2.real;
        img=c1.img+c2.img;
    }
    void multiply(complex c1,complex c2)
    {
        real=(c1.real*c2.real)-(c1.img*c2.img);
        img=(c1.real*c2.img)+(c1.img*c2.real);
    }
    void display()
    {
        cout<<"\nResultant complex no = "<<real<<"+"<<img<<"i";
    }
};
int main()
{
    complex c1,c2,c3,c4;
    cout<<"For 1st complex no :";
    c1.getdata();
    cout<<"For 2nd complex no :";
    c2.getdata();
    cout<<"\n: MULTIPLICATION OPERATION :";
    c3.multiply(c1,c2);
    c3.display();
    cout<<"\n: ADDITION OPERATION :";
    c4.add(c1,c2);
    c4.display();
    return 0;

}

