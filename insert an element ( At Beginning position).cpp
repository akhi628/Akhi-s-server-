#include<iostream>
using namespace std;
int main(){

int arr[100],n,i,item;
cout<<"Enter the size of array:"<<endl;
cin>>n;
cout<<"Enter Element in array:"<<endl;
for(i=0; i<n; i++){
    cin>>arr[i];
}
cout<<"Enter the element at beginning"<<endl;
cin>>item;
n++;

for(i=n-1; i>0; i--)
{
arr[i]=arr[i-1];
}
arr[0]=item;
cout<<"Resultant array element";
for(i=0; i<n; i++)
{
cout<<arr[i];
}

}
