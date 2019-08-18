//============================================================================
// Name        : Fibonacci.cpp
// Author      : ankit
// Version     :
// Copyright   : Your copyright notice
// Description : Fibonacci series using recursion.
//============================================================================

#include <iostream>
using namespace std;
//can also be done using memorization
int fibonacci(int a){
	static int first =0;
	static int second = 1;
	if(a == 0){
		return 0;
	} else{
		cout<<first<<" ";
		int temp = first;
		first = first + second;
		second = temp;
		return fibonacci(a-1);

	}

}

int main() {

	fibonacci(7);
	return 0;
}
