//array is linear data structure which store same type of data in a contigous memory location.
//store multiple value in one variable.
//declaree->int arr[4];
//initialise->int arr[4]={1,2,3,4};

//We can initialize the array with any value by using the fill_n command 

/**Example code:

#include<iostream>
using namespace std;

int main() {
    int array[100];

    //To initialize the array with value'1'.
    fill_n(array, 100, 1);

    //To check the array input (kewaal 5 hi kari h print)
    for(int i = 0; i <= 5; i++){
        cout << array[i] << endl;
    }**/
// #include<iostream>
// using namespace std;
// //function
// void printArray(int arr[],int size){
//     cout<<"we are using the print function"<<endl;;
//     for(int i=0; i<size; i++){
//         cout << arr[i] << " "; // prints 1 2 3 4 5
        
//     }
// }
// int main(){
//     int array[5]={1,2,3,4,5};
//     cout<<"Printing the array"<<endl;

//     //int n = sizeof(array);  // calculates number of elements

//     printArray(array,5);
//     return 0;
// }

//printing character
#include<iostream>
using namespace std;
int main(){
    char c[5]={'a','b','c','d','e'};
    int n=5;
    for(int i=0;i<n;i++){
        cout<<c[i]<<" ";
    }
}
//for taking input
int arr[4];
int n=4;
for(int i=0;i<n;i++){
    cin>>arr[i];
}




