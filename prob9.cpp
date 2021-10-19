#include<bits/stdc++.h>
using namespace std;

int duplicate(int n,int a[])
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(a[i]==a[j]){
                cout << "YES"<<endl;
                return 0;
            }
        }
        
    }
    cout<<"NO"<<endl;

    return 0;
}

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int a[n];
        for (int i = 0; i < n;i++)
        {
            cin>>a[i];
        }
        duplicate(n,a);
    }
   return 0; 
}