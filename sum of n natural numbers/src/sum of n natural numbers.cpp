//============================================================================
// Name        : sum.cpp
// Author      : ankit
// Version     :
// Copyright   : Your copyright notice
// Description : Sum of n natural numbers using recursion.
//============================================================================

#include <iostream>
using namespace std;

int sum(int n){
	if(n>0){
		return sum(n-1) + n;
	} else{
		return 0;
	}
}

int main() {
	int n;
	cout<<"enter the number : ";
	cin>>n;
	cout<<sum(n);
	return 0;
}
