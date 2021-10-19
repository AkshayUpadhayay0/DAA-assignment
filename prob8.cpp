#include<bits/stdc++.h>
using namespace std;

int sort(int num,int arr[])
{
    int comparisons = 0;
    int swap = 0;
    for (int i = 0; i < num-1; i++)
    {
        int min = i;
        for(int j=i+1;j<num;j++)
        {
            comparisons++;
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        if(min==i){
            swap++;
        }
        if(min!=i){
            swap++;
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Comparisons = "<<comparisons<<endl<<"Swaps = "<<swap<<endl;
    return 0;
}

int main(){
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        sort(n,a);
    }
   return 0; 
}