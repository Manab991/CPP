#include<iostream>
using namespace std;
class prt
{
    public:
    int a,b;
    prt(int a)
    {
        cout<<"The value is "<<a<<"\n";
    }
    prt(int a, int b)
    {
        cout<<"The values are "<<a<<" and "<<b<<"\n";
    }
    prt()
    {
        cout<<"No value will be printed\n";
    }

};
int main()
{   
    prt obj;
    obj.a=8;
    obj.b=12;
    prt obj1(obj.a);
    prt obj2(obj.a,obj.b);
    return 0;
}