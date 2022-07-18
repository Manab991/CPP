#include<iostream>
using namespace std;
class volume
{
    public:
    double vol(double r,double h,double p)
    {
        
        p=(3.14*r*r*h);
        return p;
    }
    double vol(double a)
    {
        double p;
        p=a*a*a;
        return p;

    }
    double vol(double r,double h)
    {
        double p;
        p=(3.14*r*r*h)/3;
        return p;
    }
    double vol()
     {
        double p,r;
        cout<<"Enter radius of sphere:";
        cin>>r;
        p=(4*3.14*r*r*r)/3;
         return p;
     }

};
int main()
{
    volume obj;
    double m,n,q,w,t,d,e,f,g;
    cout<<"Enter the height and radius of cylinder:";
    cin>>m>>n;
    cout<<"\nEnter side of cube";
    cin>>q;
    cout<<"\nEnter height and radius of cylinder:";
    cin>>w>>t;
    
    d=obj.vol(m,n,d);
    e=obj.vol(q);
    f=obj.vol(w,t);
    g=obj.vol();
    cout<<"The volume of cylinder:"<<d<<endl;
    cout<<"The volume of cube:"<<e<<endl;
    cout<<"The volume of cone:"<<f<<endl;
    cout<<"The volume of sphere:"<<g;
    return 0;
}