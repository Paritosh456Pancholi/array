#include<iostream>
using namespace std;
void revarr(int arr[],int n){
    int low=0;
    int high=n-1;
    
    while(low<high){
        //int mid=(low+high)/2;
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
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
    
    revarr(arr,n);
    cout<<"reversed array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
