#include<bits/stdc++.h>
using namespace std;
int binarySearch(int num,int key,int arr[])
{
    int start=0;
    int end = num-1;
    int mid=0;
    int count = 0;
    while(start<=end)
    {
        mid = (start+end)/2;
        if(key==arr[mid]){
            for(int i=start;i<=end;i++)
            {
                if(key==arr[i]){
                    count++;
                }
            }
            cout<< key << "-" << count << endl;
            return 0;
        }
        else if (key<arr[mid])
        {
            end = mid-1;
        }
        else{
            start=mid+1;
        }    
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int k;
        cin>>k;
        binarySearch(n,k,a);
    }
    return 0;
}