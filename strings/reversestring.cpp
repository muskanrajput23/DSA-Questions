#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string name="muskan rajput";

    //reverse string by function

    // reverse(name.begin(),name.end());
    // cout<<name;

    //reverse by brute force

    int start=0,end=name.length()-1;
    while(start<end){
        swap(name[start],name[end]);
        start++;
        end--;
    }
    cout<<name;
    }
