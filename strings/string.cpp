#include<iostream>
#include<string>
using namespace std;
int main(){
    string name="gattuaa";//print string,they are dynamic
    //concataenation
    string name2="pilluaa";
    string combine=name+name2;
    cout<<combine<<endl;
    cout<<name<<endl;
    //length
    cout<<name.length()<<endl;;

    //compare
    cout<<(name==name2)<<endl;

    //input

    string subject;
    cout<<"enter the subject ";
    getline(cin,subject);
    cout<<subject;

     
    
}