#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter number of rows for array1 and array2:"<<endl;
    cin>>x;
    cout<<"Enter number of columns for array1 and array2:"<<endl;
    cin>>y;
    int arr1[x][y],arr2[x][y],sum[x][y],i,j;
    cout<<"For array 1: "<<endl;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cout<<"Enter array element:"<<"["<<i+1<<"]"<<"["<<j+1<<"]"<<endl;
            cin>>arr1[i][j];
        }
    }
    cout<<"For array 2: "<<endl;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cout<<"Enter array element:"<<"["<<i+1<<"]"<<"["<<j+1<<"]"<<endl;
            cin>>arr2[i][j];
        }
    }
    cout<<"Sum of array 1 and array 2 = "<<endl;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cout<<sum[i][j]<<" ";
        }
    cout<<endl;
    }
    return 0;
}