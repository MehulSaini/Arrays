#include <iostream>
using namespace std;
int main()
{
    int arr[2][2],i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<"Enter array element:"<<"["<<i<<"]"<<"["<<j<<"]"<<endl;
            cin>>arr[i][j];
        }
    }
    cout<<"Given array is:"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    cout<<endl;
    }
return 0;
}