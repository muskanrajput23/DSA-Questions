#include<iostream>
using namespace std;
int fact(int n){
    int  fact=1;
    for(int i=1;i<=n;i++)
    fact=fact*i;
    return fact;
}
int main(){
int n;
cout<<"enter the number";
cin>>n;
cout<<fact(n);
}