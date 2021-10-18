#include <bits/stdc++.h>
using namespace std;

int binary(int n, int a[], int k)
{
    for (int i = 0; i < n; i++)
    {
        int flag =1;
        for (int j = 0; j < n-i-1; j++)
        {
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=0;
            }
        }
        if(flag){
            break;
        }
    }
    int low = 0;
    int high = n - 1;
    int mid = 0;
    int count = 1;
    while (high >= low)
    {
        mid = (low + high) / 2;
        if (k == a[mid])
        {
            cout << "YES " << count << endl;
            return 0;
        }
        else if (k < a[mid])
        {
            high = mid - 1;
            count++;
        }
        else
        {
            low = mid + 1;
            count++;
        }
    }
    cout << "NO " << count;
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
        int key;
        cin >> key;
        binary(n, a, key);
    }
    return 0;
}