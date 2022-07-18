#include<iostream>
using namespace std;
class matrix
{
    public:
    int row,col,i,j,k;
    int a[100][100];
    void getdata(int r, int c)
    {
        row=r;
        col=c;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            cin>>a[i][j];
        }
        
    }
    void multiplication(matrix m1,matrix m2)
    {
        if(m1.col==m2.row)
        {
            row=m1.row;
            col=m2.col;
            for(i=0;i<row;i++)
            {
                for(j=0;j<col;j++)
                {
                     a[i][j]=0;
                   
                    for(k=0;k<m2.row;k++)
                    {
                        
                        a[i][j]+=m1.a[i][k]*m2.a[k][j];
                    }
                }
            }
        }
      else
        cout<<"Multiplication can not be occured\n";

    }
    int add(matrix m1,matrix m2)
    {
        row=m1.row;
        col=m1.col;
        if(row==m2.row && col==m2.col)
        {
            for(i=0;i<row;i++)
                for(j=0;j<col;j++)
                {
                    a[i][j]=m1.a[i][j]+m2.a[i][j];
                }
        }
        else
            cout<<"Addition is not possible\n";
            return 0;
    }
    void display()
    {
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                cout<<a[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }

};
int main()
{
    matrix mat1,mat2,mat3,mat4;
    int r1,c1,r2,c2;
    cout<<"Enter the no. of row and column in 1st matrix ::";
    cin>>r1>>c1;
    cout<<"Enter the no. of row and column in 2nd matrix ::";
    cin>>r2>>c2;
    
    cout<<"Enter the elements of 1st matrix :";
    mat1.getdata(r1,c1);
    cout<<"Enter the elements of 2nd matrix :";
    mat2.getdata(r2,c2);
    
    cout<<"1st matrix is :\n";
    mat1.display();
    cout<<"2nd matrix is :\n";
    mat2.display();
    
    cout<<"product matrix is :\n";
    mat3.multiplication(mat1,mat2);
    mat3.display();
       
    mat4.add(mat1,mat2);
    cout<<"Sum of two matrix :\n";
    mat4.display();
return 0;
    
}