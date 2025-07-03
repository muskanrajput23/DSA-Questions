#include<iostream>
#include <climits>
using namespace std;
int main(){
    int num,reverse=0,rem;
    cout<<"enter the number";
    cin>>num;
    while(num!=0){
        rem=num%10;
        if(reverse>INT_MAX/10||reverse<INT_MIN/10){
                return 0;
        }
        reverse=reverse*10+rem;
        num/=10;
    }
    cout<<reverse;
}