#include<iostream>
using namespace std;
class largest
{
 public:
 int w,x,y,z;
 void getdata (int p, int q,int r,int s)
 {
     w=p;
     x=q;
     y=r;
     z=s;
 }
 void large(void)
 {
     if(w>x && w>y && w>z)
     cout<<w<<"is the largest";
     else if(x>w && x>y && x>z)
     cout<<x<<"is the largest";
     else if(y>w && y>x && y>z)
     cout<<y<<"is the largest";
     else
     cout<<z<<"is the largest";
 }
};
  int main()
  {
      largest a;
      int p,q,r,s;
      cout<<"Enter four numbers::";
      cin>>p>>q>>r>>s;
      a.getdata(p,q,r,s);
      a.large();
      return 0;

  }


