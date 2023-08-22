#include <iostream>
using namespace std;
int main()
{
    int r1,r2,c1,c2;
    cout<<"Enter number of rows for matrix1:"<<endl;
    cin>>r1;
    cout<<"Enter number of columns for matrix1:"<<endl;
    cin>>c1;
    cout<<"Enter number of rows for matrix2:"<<endl;
    cin>>r2;
    cout<<"Enter number of columns for matrix2:"<<endl;
    cin>>c2;
    if(c1==r2)
    {
        int arr1[r1][c1],arr2[r2][c2],prod[r1][c2],i,j,k;
        cout<<"For matrix 1: "<<endl;
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                cout<<"Enter array element:"<<"["<<i+1<<"]"<<"["<<j+1<<"]"<<endl;
                cin>>arr1[i][j];
            }
        }
        cout<<"For matrix 2: "<<endl;
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                cout<<"Enter array element:"<<"["<<i+1<<"]"<<"["<<j+1<<"]"<<endl;
                cin>>arr2[i][j];
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                prod[i][j]=0;
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                for(k=0;k<c1;k++)
                {
                    prod[i][j]+=arr1[i][k]*arr2[k][j];
                }
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                cout<<prod[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else
    cout<<"invalid rows and columns"<<endl;
    return 0;
}