#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int *arr=new int[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
        }
        long long int ans=(sum%k);
        cout<<ans<<endl;
        
    }
}
