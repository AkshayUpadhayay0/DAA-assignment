#include <bits/stdc++.h>
using namespace std;
int findSum(int num, int arr[])
{
    int count = 0;
    int i, j, k;
    for (i = 0; i < num - 2; i++)
    {
        for (j = i + 1; j < num - 1; j++)
        {
            for (k = j + 1; k < num; k++)
            {
                if(arr[i]+arr[j]==arr[k])
                {
                    cout<<i+1<<", "<<j+1<<", "<<k+1<<endl;
                    count++;
                }
            }
        }
    }
    if(count==0){
        cout<<"No sequence"<<endl;
    }
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
        findSum(n,a);
    }
    return 0;
}