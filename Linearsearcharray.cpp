#include<iostream>
using namespace std;

int LinearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
        
    }
    return -1;//if key dosen't find return -1
}
int main(){
    int n ;
    cout<<"Enter  size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter number to find in array:";
    int key;
    cin>>key;
cout<<LinearSearch(arr,n,key)<<endl;

    return EXIT_SUCCESS;
}