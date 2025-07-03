#include<iostream>
using namespace std;

bool armstrong(int n){
    int original = n; // original number ko store kar liya
    int sumOfCube = 0;
    while(n != 0){ // har digit ke liye loop
        int digit = n % 10; // last digit nikali
        sumOfCube += digit * digit * digit; // uska cube add kiya sum mein
        n /= 10; // last digit hata di
    }
    if(sumOfCube == original) // agar sum original ke barabar hai
        return true;
    else
        return false;
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if (armstrong(n))
        cout << n << " is an Armstrong number";
    else
        cout << n << " is not an Armstrong number";
}
