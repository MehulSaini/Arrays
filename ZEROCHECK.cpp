#include <iostream>
using namespace std;
int main()
{
    int i,m[10],count=0,x,n[10];
    for(i=0;i<10;i++)
            {
                n[i]=0;
            }
    cout<<"Enter array:"<<endl;
    for(i=0;i<10;i++)
    {
        cin>>m[i];
    }
    cout<<"new array"<<endl;
    for(i=0;i<10;i++)
    {
        if(m[i]==0)
        {
            count = count + 1;
            for(i=0;i<10;i++)
            {
                if(n[i]==0)
                n[i]=m[i+1];
            }
            i++;
        }
        else
        {
            for(i=0;i<10;i++)
            {
                if(n[i]==0)
                n[i]=m[i];
            }
        }
    }
    for(i=(10-count);i<10;i++)
    {
        n[i]=0;
    }
    for(i=0;i<10;i++)
            {
                cout<<n[i]<<endl;
            }
}
 
