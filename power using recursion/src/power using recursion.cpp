//============================================================================
// Name        : power.cpp
// Author      : ankit
// Version     :
// Copyright   : Your copyright notice
// Description : Power of number using recursion
//============================================================================

#include <iostream>
using namespace std;

int power(int m , int n){

	if(n>0){
		return power(m ,n-1)*m;
	} else {
		return 1;
	}
}
/*//better method:
 * int power(int m , int n){
 *
 * 	if(n==0)
 * 		return 1;
 *
 * 	else if(n%2 == 0)
 * 		return power(m*m , n/2);
 *
 * 	else
 * 		return m*power(m*m , (n-1)/2);
 *
 * 	}
 *
 */
int main() {

	int no,p;
	cout<<"enter the number : ";
	cin>>no;
	cout<<"enter the exponent : ";
	cin>>p;
	cout<<power(no,p);
	return 0;
}
