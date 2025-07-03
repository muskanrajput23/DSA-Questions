#include<iostream>
using namespace std;
int sumOfDigit(int n){
    int sumOfDigit=0;
    while(n!=0){
    int digit = n % 10;
    sumOfDigit=sumOfDigit+digit;
    n=n/10;
    }
    return sumOfDigit;


}
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    cout<<"the sum of digit of a number"<<n<<"is"<<sumOfDigit(n);
}