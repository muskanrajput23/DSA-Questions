#include<iostream>
using namespace std;
int main(){
    int n,prev=0,curr=1;
    int nextterm;
    cout<<"enter the number";
    cin>>n;
    for(int i=2;i<n;i++){
        nextterm=prev+curr;
        prev=curr;
        curr=nextterm;

    }
    cout<<nextterm;
    

}
