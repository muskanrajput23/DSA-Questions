#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
//Write code Check if the given string is Palindrome or not
bool isPallindrome(string value1){
string value2=value1;
reverse(value2.begin(),value2.end());
    return value2==value1;
}
int main(){
    string name="naman";
    if(isPallindrome(name)){
    cout<<"yes";
}

    else{
        cout<<"no";
    }
}