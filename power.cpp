#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double base=1.3;
    double exp1=2.3;
    double exp2=-2.3;
    double res1,res2;
    // calculates the power
     res1=pow(base,exp1);
      res2=pow(base,exp2);
      cout<<"the power of a number is"<<base<<"^"<<exp1<<"="<<res1<<endl;
      cout<<"the power of a number is"<<base<<"^"<<exp2<<"="<<res2<<endl;
      
}