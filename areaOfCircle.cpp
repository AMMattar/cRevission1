#include<iostream>
using namespace std;

int main()
{
    float r,a=0,c=0, pi=3.14;
    cout<<"please enter the radios of the circle: \n";
    cin>>r;
    if(r >0)
    {
        a = pi * r * r;
        c = 2 * pi * r;
        cout<<"the area of the circle = "<<a;
        cout<<endl;
        cout<<"and the circumference of the circle = "<<c;
    }
    else
    {
        cout<<"sorry, the radios is wrong";
    }
    return 0;
}