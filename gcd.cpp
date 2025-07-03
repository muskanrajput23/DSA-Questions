#include<iostream>
using namespace std;
int gcd(int a,int b){//by eculid alogrithm in this we did a%b if a is greater else wise versa
    while(a>0&&b>0){
        if(a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
        
    }
    if(a==0)return b;
    return a;
}
int main(){
    int a,b;
    cout<<"enter a=,b=";
    cin>>a>>b;
    cout<<gcd(a,b);
    
}