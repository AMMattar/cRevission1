#include<iostream>
using namespace std;

int main()
{
    int x,y;
    char op;
    cout<<"enter an operation: \n";
    cin>>x>>op>>y;
    //using nested if
    /* if(op=='+') cout<<"the result = "<<x+y;
    else if(op=='-') cout<<"the result = "<<x-y;
    else if(op=='*') cout<<"the result = "<<x*y;
    else if(op=='/') 
    {   if(y>0)
        {
            cout<<"the result = "<<x/y;
        }
        else
        {
            cout<<"undefined";
        }
    }
    else
    {
        cout<<"use a valid operator + , - , * ,or /";
    } */
    //using switch case
    switch (op)
    {
    case '+':
        cout<<x+y;
        break;

    case '-':
        cout<<x-y;
        break;

    case '*':
        cout<<x*y;
        break;
    case '/':
        if(y>0)cout<<x/y;
        else cout<<"undefined";
        break;

    default:
        cout<<"use a valid operator + , - , * ,or /";
        break;
    }
    return 0;
}