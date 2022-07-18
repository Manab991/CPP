#include<iostream>
using namespace std;
class addition
{
    public:
    int i,n,sum;
    void add()
    {
        for(i=1;i<=n;i++)
        {
            sum=n*(n-1)/2;
            cout<<sum<<" is the sum";
        }
    }
};
int main()
{
    addition add1;
    cin<<"Enter the number of terms ::";
    cout>>add1.n;
    add1.add();
    return 0;
}