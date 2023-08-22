#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter number of rows for array:"<<endl;
    cin>>x;
    cout<<"Enter number of columns for array:"<<endl;
    cin>>y;
    int arr[x][y],tran[x][y],i,j;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cout<<"Enter array element:"<<"["<<i+1<<"]"<<"["<<j+1<<"]"<<endl;
            cin>>arr[i][j];
        }
    }
    cout<<"transpose of given array is:"<<endl;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            tran[i][j]=arr[j][i];
        }
    }
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cout<<tran[i][j]<<" ";
        }
    cout<<endl;
    }
    return 0;
}