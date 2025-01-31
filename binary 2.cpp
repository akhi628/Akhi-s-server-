#include <iostream>
using namespace std;
int main(){
    int arr[5],i,n,low,high,mid,key=4;
    cin>>n;
    for(i=1;i<n;i++){
        cin>>arr[i];
    }
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            cout<<"key value is found"<<mid+1;
            break;
            }else if(arr[mid]<key){
            low=mid+1;
            }else{
            high=mid-1;
            }
           }
         if(key>high){
            cout<<"not found";
         }
      }
