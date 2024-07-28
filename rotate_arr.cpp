#include <bits/stdc++.h>
using namespace std;

//brute 

void Right_Rotate(int arr[],int n,int k){
  
  if(n==0 || n==1 ) return;
  
  k = k % n;
  
  int temp[n];
  
  int z=n-k;
  
  for(int i=0;i<k;i++){
    temp[i]=arr[z++];
  }
  
  for(int i=k;i<n;i++){
    temp[i]=arr[i-k];
  }
  
  for(int i=0;i<n;i++){
    arr[i]=temp[i];
  }
  
}

void left_Rotate(int arr[],int n,int k){
  
  if(n==0 || n==1 ) return;
  
  k = k % n;
  
   int temp[n];
   
   for(int i=0;i<k;i++){
     temp[i]=arr[i];
   }
   
   for(int i=0;i<n-k;i++){
     arr[i]=arr[i+k];
   }
   int j=0;
   for(int i=n-k;i<n;i++){
     arr[i]=temp[j++];
   }
   
   
}

void reverse(int arr[],int start,int end){
  while(start<=end){
    swap(arr[start],arr[end]);
    start++; end--;
  }
}
//optimal

void rotate_right(int arr[],int n,int k){
  if(n==0 || n==1 ) return;
  
  k = k % n;
  
  reverse(arr,n-k,n-1);
  reverse(arr,0,n-k-1);
  reverse(arr,0,n-1);
  
}

void rotate_left(int arr[],int n,int k){
  if(n==0 || n==1 ) return;
  
  k = k % n;
  
  reverse(arr,0,k-1);
  reverse(arr,k,n-1);
  reverse(arr,0,n-1);
  
}

int main() 
{
   int arr[] = {3,7,8,9,10,11};
   int n=sizeof(arr)/sizeof(arr[0]);
   int k=9;
  
   rotate_right(arr,n,k);
   for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
   }
   
    return 0;
}