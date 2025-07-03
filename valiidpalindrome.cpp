#include<iostream>
#include<algorithm>
using namespace std;
bool validPallindrome(string name){
    string new1=name;
    reverse(new1.begin(),new1.end());
    return new1==name;
}
int main(){
    string name="muskan";
    if(validPallindrome(name)){
        cout<<name<<"is a vallid pallindrome"<<endl;
    }
    else{
        cout<<"not"<<endl;
    }
    return 0;
}



//brute force approach;
#include<iostream>
using namespace std;

bool validPalindrome(string name){
    int start = 0;
    int end = name.length() - 1;

    while(start < end){
        if(name[start] != name[end]){
            return false; // not a palindrome
        }
        start++;
        end--;
    }
    return true; // all matched
}

int main(){
    string name = "madam";
    if(validPalindrome(name)){
        cout << name << " is a valid palindrome" << endl;
    }
    else{
        cout << name << " is not a palindrome" << endl;
    }
    return 0;
}
