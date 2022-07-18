#include <iostream>
using namespace std;
class space
{
    int x,y,z;
    public:
    void getdata(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void display(void)
    {
        cout<<"x="<<x<<endl;
        cout<<"y="<<y<<endl;
        cout<<"z="<<z<<endl;
    }
    void operator-(void)
    {
        x=-x;
        y=-y;
        z=-z;
    }
};
int main()
{
    space s;
    s.getdata (10,-20,30);
    cout<<"\ns=>\n";
    s.display();
    -s;
    cout<<"\ns=>\n";
    s.display();
    return 0;
}