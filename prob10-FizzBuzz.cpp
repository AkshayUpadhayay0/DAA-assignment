#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int count3 = 0;
    int count5 = 0;
    int count15 = 0;

    for (int i = 1; i <= num; i++)
    {
        count15++;
        count5++;
        count3++;
        if (count15 % 15 == 0)
        {
            cout << "FizzBuzz" << endl;
            count15 = 0;
        }
        
        else if (count5 % 5 == 0)
        {
            cout << "Buzz" << endl;
            count5 = 0;
        }
        else if (count3 % 3 == 0)
        {
            cout << "Fizz" << endl;
            count3 = 0;
        }
        else
        {
            cout << i << endl;
        }
    }
    return 0;
}