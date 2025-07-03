#include<iostream>
using namespace std;
void reverseArray(int arr[],int size){
    int start=0,end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
            start++;
            end--;
        
    }
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}
int main(){
    int arr[6]={100,67,90,45,2,0};
    reverseArray(arr,6);
    printArray(arr,6);

}