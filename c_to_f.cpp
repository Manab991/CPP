#include<iostream>
using namespace std;
 class c_to_f
 {
 public:
  float cen,faren;
  void far()
  {
      faren=((9*cen)/5)+32;
  }
  void display()
  {
      cout<<"Temparature in farenhite ::"<<faren;
  }
 };

 int main()
 {
    c_to_f cent;
    cout<<"Enter the temparature in centigrade ::";
    cin>>cent.cen;
    cent.far() ;
    cent.display();
    return 0;
 }