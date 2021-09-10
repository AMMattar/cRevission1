#include <iostream>
using namespace std;

int main()
{
    int num[10];
    int x, count = 0;
    float sum = 0, avg = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "please enter a number: ";
        cin >> x;
        num[i] = x;
        if (x % 2 != 0)
        {
            sum += x;
            count++;
        }
    }
    avg = sum / count;
    for (int i = 9; i = 0; i--)
    {
        cout << num[i];
        cout << endl;
    }

    return 0;
}