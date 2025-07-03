#include <iostream>
using namespace std;
void update(int arr[],int size){
    cout<<"update array"<<endl;
    arr[2]=10;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



int main(){
    int arr[5]={1,2,3,4,6};
    int n=5;
update(arr,5);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

//concept because we give arr address that is why it changed in original array.
// When you pass an array to a function, you are not sending a copy of the array.
//  You are sending the address of the first element (called the base address).


//  Arrays are passed by address to functions.
// ✔️ No copy is made, so changes inside the function affect the original array in main.
// ✔️ That’s why when you modify arr[0] in your function, the original array also updates.



