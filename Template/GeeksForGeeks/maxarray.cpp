#include<bits/stdc++.h>
using namespace std;
int max_arr(int arr[],int n){
    int max = arr[0];
    for (int i=0;i<n;i++){
        if (arr[0]<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=max_arr(arr,n);
    cout<< ans;
    
}