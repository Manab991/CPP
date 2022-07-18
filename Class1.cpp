//ADDITION OF TWO NUMBERS
#include<iostream>
using namespace std;
class sum
{
    public:
    int a,b,c;
    void data(int m, int n)
    {
        a=m;
        b=n;
    }
    void add()
    {
        c=a+b;
        cout<<c<<" is the sum";
    }

};
int main()
{
    sum add1;
    int x,y,z;
    cout<<"Enter the two numbers ::";
    cin>>x>>y;
    add1.data(x,y);
    add1.add();
    return 0;
}