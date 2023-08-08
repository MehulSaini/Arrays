#include <iostream>
using namespace std;
int main()
{
    int i,m1[10];
    cout<<"Enter array:"<<endl;
    for(i=0;i<10;i++)
    {
        cin>>m1[i];
    }
    int x=m1[0];
    for(i=0;i<10;i++)
    {
        if(x>m1[i])
        x=m1[i];
    }
    cout<<"smallest element is:"<<x<<endl;
    int y=m1[0];
    for(i=0;i<10;i++)
    {
        if(y<m1[i])
        y=m1[i];
    }
    cout<<"largest element is:"<<y<<endl;
}
