#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"Enter 2 values: ";
    cin>>a>>b;
    try
    {
        if ( b == 0 )
        {
            throw b;
        }
    
        c=a/b;
        cout<<"The division result is:";
        cout<<"\t"<<c;
    }
    catch(int x)
    {
        cout<<"\n B cannot be zero";
        cout<<"\n divide by "<<x;
    }
    cout<<"\nat the end of main function";
    return 0;
}
