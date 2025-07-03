#include <iostream>
using namespace std;
bool linearSearch(int arr[],int size, int key){
for(int i=0;i<size;i++){
    if(arr[i]==key){
        return true;
    }
    
        
    
}
return false;
}




int main(){
    int arr[5]={1,2,3,4,6};
    int n=5;
     bool found = linearSearch(arr, n, 4);

    if(found){
        cout << "Key is found";
    }
    else{
        cout << "Key is not found";
    }
}
