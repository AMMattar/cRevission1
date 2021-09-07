#include<iostream>
using namespace std;

int main()
{
    float c, k,f;
    cout<<"Please enter a Celsius degree:\n";
    cin>>c;
    k= c + 273;
    f = c * (5/9) +32;
    cout<<"the Kelvin degree = "<<k<<" and the Fahrenheit degree = "<<f;
    return 0;
}