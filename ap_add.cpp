//1+2+3+.......+n=
#include<iostream>
using namespace std;

class addition
{
    public:
    int n,sum;
    
    void add()
    {
        sum=(n*(n+1))/2;
    }
    void display()
    {
     cout<<sum<<" is the sum";
    }
    
    
};

int main()
{
    addition a;
    cout<<"Enter how many terms have to be added ::";
    cin>>a.n;
    a.add();
    a.display();
    return 0;
}