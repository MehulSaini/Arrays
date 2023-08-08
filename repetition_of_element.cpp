#include <iostream>
using namespace std;
int main()
{
    int i,m[10],x,c=0;
    cout<<"Enter array:"<<endl;
    for(i=0;i<10;i++)
    {
        cin>>m[i];
    }
    for(i=0;i<10;i++)
    {
        x=m[i];
        for(i=0;i<10;i++)
        {
            if(m[i]==x)
            c++;
        }
        if(c>1)
        cout<<x<<" is repeating "<<(c-1)<<" times in the array"<<endl;
        c=0;
    }
    return 0;
}
