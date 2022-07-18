#include<iostream>
using namespace std;
class largest
{   public:
    int a,b,c,d;
    void large()
    {
    if(a>b&&a>c&&a>d)
        cout<<a<<" is largest";
    else if(b>a&&b>c&&b>d)
        cout<<b<<" is largest";
    else if(c>a&&c>b&&c>d)
        cout<<c<<" is largest";
    else
        cout<<d<< "is largest";
    }
};

int main()
{
    largest lar;
    cout<<"Enter the value of the four number ::";
    cin>>lar.a>>lar.b>>lar.c>>lar.d;
   
    lar.large();
    return 0;
}