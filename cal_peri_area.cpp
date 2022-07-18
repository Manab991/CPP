#include<iostream>
using namespace std;
class geo
{   public:
    double shape(double s)
    {
        double a,p;
        a=s*s;
        p=4*s;
         cout<<"AREA OF SQUARE :"<<a<<endl;
         cout<<"PERIMETER OF SQUARE :"<<p<<endl;
         return 0;
    }
    double shape(double s1,double s2)
    {
        double a,p;
        a=s1*s2;
        p=2*(s1+s2);
        cout<<"AREA OF RECTANGLE :"<<a<<endl;
        cout<<"PERIMETER OF RECTANGLE :"<<p<<endl;
         return 0;
    }
    double shape(double r,double a,double p)
    {
      a=3.14*r*r;
      p=2*3.14*r;
      cout<<"AREA OF CIRCLE :"<<a<<endl;
      cout<<"PERIMETER OF CIRCLE :"<<p<<endl;
       return 0;
    }

};
int main()
{
    geo obj;
    double a,b,c,d,e,f,g,h,j;
    cout<<"Enter the side of square :";
    cin>>a;
    cout<<"\nEnter the two side of rectangle :";
    cin>>b>>c;
    cout<<"\nEnter the radius of circle :";
    cin>>d;
    e=obj.shape(a);
    f=obj.shape(b,c);
    g=obj.shape(d,h,j);
    return 0;
}





