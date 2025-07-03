#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"enter the character ";
    cin>>c;
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='I'||c=='E'||c=='O'||c=='U'){
        cout<<c <<"is a vowel";
    }
    else{
        cout<<c <<"is consonant";
    }
}