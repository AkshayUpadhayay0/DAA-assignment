#include <bits/stdc++.h>
using namespace std;
int insertion(int num, int arr[])
{
    int cmp = 0;
    int shift = 0;
    int i = 0, j = 0;
    for (i = 0; i < num; i++)
    {
        int temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] >= temp)
        {
            arr[j + 1] = arr[j];
            j--;
            shift++;
            cmp++;
        }
        arr[j + 1] = temp;
    }
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
        <<"Comparusons = " << cmp << endl
        <<"Shifts = " << shift+num-1 << endl;
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
        insertion(n, a);
    }
    return 0;
}