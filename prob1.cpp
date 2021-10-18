#include <bits/stdc++.h>
using namespace std;
int linear(int n, int a[], int key)
{
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            cout << "Yes "<< count <<endl;
            return 0;
        }
        else{
            count++;
        }
    }
    cout<<"NO "<<count<<endl;
    return 0;
}
int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int key;
        cin >> key;
        linear(n, arr, key);
    }
    return 0;
}