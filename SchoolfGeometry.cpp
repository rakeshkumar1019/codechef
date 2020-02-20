 #include<iostream>
 #include<bits/stdc++.h>
 using namespace std;
 int main(){
     int t;
     cin>>t;
     while(t--){
         long long int n;
         cin>>n;
         long long int* arr=new long long int[n];
         long long int* ar=new long long int[n];
         for(int i=0;i<n;i++){
             cin>>arr[i];
         }
         for(int i=0;i<n;i++){
             cin>>ar[i];
         }
         
         sort(arr,arr+n);
         sort(ar,ar+n);
         long long int sum=0;
         for(int i=0;i<n;i++){
             sum=sum+min(arr[i],ar[i]);
         }
         cout<<sum<<endl;
     }
 }
 
