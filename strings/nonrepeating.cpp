#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main(){
    string name="gattu";
    unordered_map<char,int>freq;
    for(char ch:name)
    freq[ch]++;

    //for printing the non repeating char;

    for(auto it : freq){
    if(it.second == 1){
        cout << "The non-repeating character is: " << it.first << endl;
    }
}

}
