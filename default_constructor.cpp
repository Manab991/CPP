#include <iostream>  
using namespace std;  
class scholarship  
 {  
   public: 
   int marks;
   scholarship()
   {
    cout<<"\nEnter obtain marks :";
    cin>>marks;
    if(marks<=700)
    {
        if(marks>=600)
        cout<<"\nElligible";
        else
        cout<<"\nNot elligible";
    }
    else
    cout<<"Full marks is 700 . So enter the right input";
   }
 };
 int main()
 {
    scholarship s;
    return 0;
 }