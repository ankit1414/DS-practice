//============================================================================
// Name        : combination.cpp
// Author      : ankit
// Version     :
// Copyright   : Your copyright notice
// Description : Combination formula using recursion
//============================================================================

#include <iostream>
using namespace std;
//the recursion is based on pascals triangle
int c(int n , int r){

	if(r == 0 || r == n){
		return 1;
	} else {
		return c(n-1 , r-1) + c(n-1 , r);
	}
}

int main() {

	cout<<c(5,2);
	return 0;
}
