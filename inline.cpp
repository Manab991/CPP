#include <iostream>
using namespace std;
class op
{public:

    int a,b,add;
    float div;

inline void getdata()
{
    cout<<"\nEnter the two numbers : ";
    cin>>a>>b;
}
inline void sum()
{
 add=a+b;
 cout<<"\nsum ="<<add;
}
inline void division()
{
 div=(float)a/b;
 cout<<"\ndivision ="<<div;
}
};
int main()
{
    op obj;
    obj.getdata();
    obj.sum();
    obj.division();
    return 0;
}

