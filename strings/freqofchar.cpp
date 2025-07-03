#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    string value="hello";
    unordered_map<char,int>freq;
    for(char num:value)
    freq[num]++;
    
    // Printing the frequencies
    for(auto it : freq){
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}