// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,4,3,4,};
//     int n=5;

//         for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 cout << arr[i] << " ";
//                 break; // break to avoid printing same duplicate multiple times
//             }
//         }
//     }

//     return 0;
// }//brute force approach



#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int arr[6] = {1,2,3,2,4,4};
    int n = 6;

    unordered_map<int,int> freq;

    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }

    cout << "Duplicate elements are: ";
    for(auto it : freq){
        if(it.second > 1){
            cout << it.first << " ";
        }
    }

    return 0;
}

// | Problem                         | Approach                                                   | Why?                                      |
// | ------------------------------- | ---------------------------------------------------------- | ----------------------------------------- |
// | **Finding duplicates**          | Use **unordered\_map only**                                | To count frequency and check if >1        |
// | **Checking unique frequencies** | Use **unordered\_map + unordered\_set (s.find, s.insert)** | To store frequencies and check uniqueness |

