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
    for(i=1;i<9;i++)
    {
        if(m1[i-1]<m1[i]&&m1[i+1]<m1[i])
        cout<<"Peak value: "<<m1[i]<<endl;
    }
}
