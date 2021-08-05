#include<iostream>
using namespace std;
int remdup(int arr[],int n){
    int result=1;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[result-1]){
            arr[result]=arr[i];
            result++;
        }
    }
return result;
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
    
    remdup(arr,n);
    cout<<"new array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

