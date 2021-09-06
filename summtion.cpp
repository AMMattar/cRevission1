#include<iostream>
using namespace std;

int main()
{
    int x, y, z;
    float sum, ave;
    cout<<"enter three numbers: \n";
    cin>>x>>y>>z;
    sum = x + y + z;
    ave = sum/ 3; 
    cout<<"the summation of the three numbers = "<<sum<<"\n and the average of the three numbers = "<<ave;
    cout<<endl;

    if (x==y)
    {
        cout<<"the first two numbers are equal";
    }
    else
    {
        cout<<"the first two numbers are not equal";
    }

    return 0;
}