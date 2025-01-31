#include <iostream>
using namespace std;
int main (){
int arr[]={ 3, 2,4, 6 ,90};
int n = sizeof (arr)/sizeof(arr[0]);
int key=2;
 for (int i =0; i<n; i++){
    if(arr[i]==key){
        n=n-1;
        for(int j=i; j<n; j++){
            arr[j]=arr[i];
        }
        break;
    }
 }

 for ( int i=0; i<n;  i++){
    cout<<arr[i]<<" ";
 }
}
