// Move All Negative Number To The Left Side Of An Array

#include<iostream>
#include<vector>
using namespace std;

void moveAllneg(vector<int>&arr, int n){
    //dutch national flag algo 
int l=0, h=n-1;
while(l<=h){
    if(arr[l]<0){
        l++;}
    else if(arr[h]>0){
        h--;       
    }
    else{
        swap(arr[l],arr[h]);  
        l++;
        h--;
    }
  }  
}

int main(){
  vector<int>arr={1,2,-3,4,-5,6};
  int n = arr.size();

  moveAllneg(arr, n);   
  cout<<"sorted array is: "<<endl; 
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
