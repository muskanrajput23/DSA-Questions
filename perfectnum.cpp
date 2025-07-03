#include<iostream>
using namespace std;
int main(){
    int num,sum=0,div;
    cout<<"enter the number";//28=1+2+4+7+14
    cin>>num;
    for(int i=1;i<num;i++){
        div = num % i;
    if (div == 0)
      sum += i;
    }
    if(sum==num){
        cout<<num<<"is perfect number";
    }
    else{
        cout<<num<<"not perfect number";
    }

}