#include <bits/stdc++.h>
using namespace std;
int findDiff(int num, int arr[], int key)
{
    int flag = 0;
    for (int i = 0; i < num ; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (arr[j] - arr[i] == key)
            {
                flag=flag+1;
            }
        }
    }
    cout << flag << endl;
    return 0;
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int k;cin>>k;
        findDiff(n,a,k);
    }
    return 0;
}