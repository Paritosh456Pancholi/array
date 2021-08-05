#include<iostream>
using namespace std;
int linearsearch(int arr[],int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Entered array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int key;
    cout<<"Enter number to find:";
    cin>>key;
    
    cout<<"Element found at index:";
    cout<<linearsearch(arr,n,key)<<endl;
    return 0;
}