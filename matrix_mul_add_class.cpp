#include <iostream>
using namespace std;

class Matrix
{  
    public:
    int a[100][100];
    int b[100][100];
    int c[100][100];
    int s[100][100];

    int i,j,k,m,n,p,q;
    void Insert()
        {  
            cout<<"enter the no. of row and column number of first matrix :";
            cin>>m>>n;
            cout<<"enter the no. of row and column of second matrix :";
            cin>>p>>q;
            cout << "Enter the values for the first matrix :";
            for (i=0; i<m; i++)
            {
                for (j=0; j<n; j++)
                {
                    cin >> a[i][j];
                }
            }
            cout << "Enter the values for the second matrix :";
            for (i=0; i<p; i++)
            {
                for (j=0; j<q; j++)
                {
                    cin >> b[i][j];
                }
            }
        }
    void Mult()
        {
            if(n==p)
            {
                for (i=0; i<n; i++)
                {
                    for (j=0; j<p; j++)
                    {
                        c[i][j]=0;
                        for (k=0; k<n;k++)
                        {
                            c[i][j] +=a[i][k]*b[k][j];
                        }
                    }
                
                }
            }
        }
   
    void display()
        {
            if(n==p)
            {
                cout << "The Multiplication Resultant Matrix is: \n";
                for (i=0; i<m; i++)
                {
                    for (j=0; j<q; j++)
                    {
                        cout << c[i][j]<<"\t";
                    }
                    cout<<"\n";
                }
            }
            else
                cout<<"Multiplication will not occur";
        }
    void add()
        {
           if (m==p && n==q)
           {
                for (i=0; i<m; i++)
                {
                    for (j=0; j<n; j++)
                    {
                         s[i][j]=a[i][j]+b[i][j];
                    }
                }
                cout<<"Sum of two matrices :\n";
                for(i=0;i<m;i++)
                {
                    for(j=0;j<n;j++)
                    {
                        cout<<s[i][j]<<"\t";
                    }
                    cout<<"\n";
                }
             }
           else
               cout<<"No addition will occur";
        }
};
int main()
{
    Matrix obj;
    obj.Insert();
    obj.Mult();
    obj.display();
    obj.add();

    return 0;
}