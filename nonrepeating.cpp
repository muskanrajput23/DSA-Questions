#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int arr[6]={4, 5, 4, 3, 6, 3};
    int n=6;
     unordered_map<int,int>freq;
     for(int i=0;i<n;i++)
     freq[arr[i]]++;

     cout<<"non repeating number ";//to check non repeating value
     for(auto it:freq){
        if(it.second=1)
        cout << it.first << " ";
     }
}