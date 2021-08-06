#include<iostream>
using namespace std;
void Lra(int arr[],int n)
{
    int temp= arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
       
    }
     arr[n-1]=temp;
    

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
    cout<<"input array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    Lra(arr,n);
    cout<<"new array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}