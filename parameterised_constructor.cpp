#include <iostream>
using namespace std;
class student {
   public:
       int roll;//data member (also instance variable)    
       string name;//data member(also instance variable)
      student(int i, string n)  
        {  
            roll = i;  
            name = n;  
        }  
       void display()  
        {  
            cout<<roll<<"  "<<name<<"  "<endl;  
        }  
};
int main(void) {
   student e1(101, "Sonoo"); //creating an object ofstudent 
   student e2(102, "Nakul"); 
    e1.display();  
    e2.display();  
    return 0;
}