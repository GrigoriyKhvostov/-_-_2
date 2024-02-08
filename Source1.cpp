#include<iostream>
using namespace std;
int main()
{
    float i = 1.0;
    float k = 0.0;
    while (2 < 5)
    {
        k = i;
        i = i + 1;
        if (i == k)
        {
            break;
        }
    }
    cout << i;
}