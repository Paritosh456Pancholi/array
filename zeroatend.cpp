#include<iostream>
using namespace std;
int zero_at_end(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
}
int main(){
    int n;
    
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"input array:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    zero_at_end(arr,n);
    cout<<"new array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}