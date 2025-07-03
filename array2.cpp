// #include<iostream>
// #include<climits>
// using namespace std;
// int maxNum(int arr[],int size){
//     int max=INT_MIN;
//     for(int i=0;i<size;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     return max;
// }
// int main(){
//     int maximum[5]={2,3,4,5,10};
//     cout<<maxNum(maximum,5);
// }

//for minimum
#include<iostream>
#include<climits>
using namespace std;
int minNum(int arr[],int size){
    int mini=INT_MAX;
    for(int i=0;i<size;i++){
        mini=min(arr[i],mini);
        // if(arr[i]<min){
        //     min=arr[i];
        }
    
    return mini;
}
int main(){
    int minimum[5]={2,3,4,5,10};
    cout<<minNum(minimum,5);
}

//ibuilt
// mini=min(arr[i],mini);//same for max