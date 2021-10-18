#include <bits/stdc++.h>
using namespace std;
int jump(int num, int key, int arr[])
{
    int low = 0;
    int a = 1;
    int high = 0;
    int count = 1;
    while (high <= num)
    {
        high = pow(2, a);
        if (key <= arr[high])
        {
            for (int i = low; i <= high; i++)
            {
                if (key == arr[i])
                {
                    cout << "PRESENT " << count << endl;
                    return 0;
                }
            }
        }
        low = high;
        a++;
        count++;
    }
    if (high > num)
    {
        for (int i = low; i < num; i++)
        {
            if (key == arr[i])
            {
                cout << "PRESENT " << count << endl;
                return 0;
            }
        }
    }
    cout << "NOT PRESENT " << count << endl;
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int k;
        cin >> k;
        jump(n, k, a);
    }
    return 0;
}