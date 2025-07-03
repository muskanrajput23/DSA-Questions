#include<iostream>
using namespace std;

//main program
int main()
{
	char val;
	cout<<"Enter a character: ";
	cin>>val;
    int c=(int)val;

//printing the ASCII value of input 
 //through typecasting

cout<<"The ASCII value of "<<val<<" is "<<c;
return 0;
}