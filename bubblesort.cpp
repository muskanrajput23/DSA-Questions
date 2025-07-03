#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        bool isSwap=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
        }
        if(!isSwap)
        return;
    }
}
    void printArray(int arr[],int n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        
    }
}


int main(){
    int n=5;
    int arr[]={3,2,5,4,1};
    bubbleSort(arr,n);
    printArray(arr,n);
}