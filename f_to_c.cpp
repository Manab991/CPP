#include<iostream>
using namespace std;
 class f_to_c
 {
 public:
  float cen,faren;
  void cent()
  {
      cen=((faren-32)*5)/9;
  }
  void display()
  {
      cout<<"Temparature in centigrade ::"<<cen;
  }
 };

 int main()
 {
    f_to_c far;
    cout<<"Enter the temparature in farenhite ::";
    cin>>far.faren;
    far.cent() ;
    far.display();
    return 0;
 }