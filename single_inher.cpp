#include<iostream>
using namespace std;
class a
{
    public:
    int val_a;
    void fun_a()
    {
        cout<<"\nThe value in class a ="<<val_a;
    }

};
class b : public a
{
    public:
    int val_b;
    void fun_b()
    {
        cout<<"\nThe value in class b ="<<val_b;
    }
    void add()
    {
        cout<<"\nSum of values are :"<<val_a+val_b;
    }
};
int main()
{
    b obj;
    cout<<"\nval_a = ";
    cin>>obj.val_a;
    obj.fun_a();
    cout<<"\nval_b = ";
    cin>>obj.val_b;
    obj.fun_b();
    obj.add();
    return 0;
}