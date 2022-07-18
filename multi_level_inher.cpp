#include<iostream>
using namespace std;
class a
{
    public:
    int val_a;
    void fun_a()
    {
        cout<<"\nThe value in class a =";
        cin>>val_a;
    }

};
class b : public a
{
    public:
    int val_b;
    void fun_b()
    {
        cout<<"\nThe value in class b =";
        cin>>val_b;
    }
    void add()
    {
        cout<<"\nSum of values are :"<<val_a+val_b;
    }
};
class c : public b
{
    public:
    void func_c()
    {
        cout<<"\nMultiplication of two number = "<<val_a * val_b;
    }

};

int main()
{
    c obj;
    obj.fun_a();
    obj.fun_b();
    obj.add();
    obj.func_c();
    return 0;
}