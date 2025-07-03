#include<iostream>
using namespace std;
void alterSwap(int arr[],int size){
    for(int i=0;i<size-1;i=i+2){
        swap(arr[i],arr[i+1]);
    
    }
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
    cout<<arr[i];
}
}
int main(){
    int alter[6]={1,2,3,4,5,6};
    int n=6;
    alterSwap(alter,6);
    printArray(alter,6);

}
//alternate array