#include <iostream>
using namespace std;
int main()
{
    int i,m1[10];
    int search;
    cout<<"Enter array:"<<endl;
    for(i=0;i<10;i++)
    {
        cin>>m1[i];
    }
    cout<<"Enter value to search:"<<endl;
    cin>>search;
    for(i=0;i<10;i++)
    {
        if (m1[i]==search)
        {
        cout<<"element at "<<i<<" has the value "<<search<<endl;
        break;
        }
        else if (i==9&&m1[i]!=search)
        cout<<"Value not found"<<endl;
    }
}