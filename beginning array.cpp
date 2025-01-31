#include <iostream>
using namespace std;
int main(){
int arr[5];
int n;
cout<<"Enter the number of element in the array :";
cin>>n;
cout<<"Enter the elements of the array:";
for(int i=0; i<n; i++){
    cin>>arr[i];
}
int element_to_add;
cout<<"Enter the element to add at the beginning :";
cin>>element_to_add;
for(int i=n; i>0; i--){
    arr [i]=arr[i-1];
}
arr[0]=element_to_add;
n++;
cout<<"updated array:";
for(int i =0; i<n; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;}
