//============================================================================
// Name        : factorial.cpp
// Author      : ankit
// Version     :
// Copyright   : Your copyright notice
// Description : Factorial using recursion
//============================================================================

#include <iostream>
using namespace std;

int factorial(int n){

	if(n==1){
		return 1;
	} else{
		return factorial(n-1)*n;
	}
}

int main() {
	int number;
	cout<<"enter the number: ";
	cin>>number;
	cout<<factorial(number);
	return 0;
}
