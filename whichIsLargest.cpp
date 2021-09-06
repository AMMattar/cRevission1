#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"please choose two numbers: \n";
    cin>>x>>y;
    if (x>y)
    {
        cout<<"the "<<x<<" is larger";
    }
    else if(y>x)
    {
        cout<<"the "<<y<<" is larger ";     
    }
    else
    {
        cout<<"the two numbers are equal";
    }
    
    return 0;
}