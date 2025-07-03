#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;
int main(){
    vector<int>arr={1,2,2,3,3,3};
    
    //for finding frequency we use map
    //unordered_map=store frequency,here key_type and value_type
    unordered_map<int,int>freq;
    for(int val:arr){
        freq[val]++;
    }


    //now to check duplication we use set
    unordered_set<int>s; //<freq ka type
      for(auto it : freq){
        // it.first = number
        // it.second = frequency

        if(s.find(it.second) != s.end()){
            // frequency already exists
            cout << "false";
            return 0; // exit program as duplication found
        }
        s.insert(it.second);
    }

    // If no duplicate frequency found
    cout << "true";
    return 0;
}

