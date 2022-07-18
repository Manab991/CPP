#include<iostream>
using namespace std;
class add
{
    public:
    int sum(int a,int b)
    {
        int c;
        c=a+b;
        return c;
    }
    double sum(double a,double b)
    {
        double c;
        c=a+b;
        return c;
    }
    int sum(int a,int b,int c)
    {
        int d;
        d=a+b+c;
        return d;
    }

};
int main()
{
 add obj;
 int m,n,p,x,z;
 double q,r,y;
 cout<<"enter the integer value of m,n,p::";
 cin>>m>>n>>p;
 cout<<"enter the decimal value of q,r::";
 cin>>q>>r;
 x=obj.sum(m,n);
 y=obj.sum(q,r);
 z=obj.sum(m,n,p);
 cout<<"addition of two integers m,n ::"<<x;
 cout<<"\naddition of two double values ::"<<y;
 cout<<"\naddition of three integers ::"<<z;
 return 0;
}