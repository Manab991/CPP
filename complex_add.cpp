#include<iostream>
using namespace std;
class comp
{
    public:
    int real1,real2,real_add,real_mul,img1,img2,img_add,img_mul;
   void add()
    {
          real_add=real1+real2;
          img_add=img1+img2;
          cout<<"\nThe sum of two complex number = "<<real_add<<"+"<<img_add<<"i";
    }
    void multi()
    {   real_mul=(real1*real2)-(img1*img2);
        img_mul=(real1*img2)+(img1*real2);
        cout<<"\nThe multiplication of two complex number = "<<real_mul<<"+"<<img_mul<<"i";
    }
};
int main()
{
    comp obj;
    cout<<"Enter the real part of 1st number :";
    cin>>obj.real1;
    cout<<"\nEnter the imaginary part of 1st number :";
    cin>>obj.img1;
    cout<<"\n1st complex number = "<<obj.real1<<"+"<<obj.img1<<"i";

    cout<<"\nEnter the real part of 2nd number :";
    cin>>obj.real2;
    cout<<"\nEnter the imaginary part of 2nd number :";
    cin>>obj.img2;
    cout<<"\n2nd complex number = "<<obj.real2<<"+"<<obj.img2<<"i";

    obj.add();
    obj.multi();
    return 0;
}