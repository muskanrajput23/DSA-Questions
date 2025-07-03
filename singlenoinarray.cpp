#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={3,7,2,2,7,3,9};
    int ans=0;
    for(int val:arr){
        ans=val^ans;
    }
    cout<<ans;
}