#include<iostream>
using namespace std;
int main(){
    int decimal=50;
    int binary=0; // initialize to zero
    int pow=1;

    while(decimal>0){
        int rem=decimal%2;
        decimal=decimal/2;
        binary += (rem * pow);
        pow *= 10;
    }

    cout << binary;
    return 0;
}
