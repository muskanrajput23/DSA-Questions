#include<iostream>
using namespace std;
int main(){
char name[10];
cout<<"enter the string ";
cin.getline(name,10);//input k liye

for(char single:name){//separate value
    cout<<single<<" ";
}
}//this is for printing character array