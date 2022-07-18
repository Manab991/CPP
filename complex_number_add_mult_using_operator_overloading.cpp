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
    complex operator +(complex c2)
    {
        complex temp;
        temp.real=real+c2.real;
        temp.img=img+c2.img;
        return temp;
    }
    complex operator*(complex c2)
    {
        complex mult;
        mult.real=(real*c2.real)-(img*c2.img);
        mult.img=(real*c2.img)+(img*c2.real);
        return mult;
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
    c3=c1*c2;
    c3.display();
    cout<<"\n: ADDITION OPERATION :";
    c4=c1+c2;
    c4.display();
    return 0;

}

