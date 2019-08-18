//============================================================================
// Name        : taylor.cpp
// Author      : ankit
// Version     :
// Copyright   : Your copyright notice
// Description : taylor series using recursion.
//============================================================================

#include <iostream>
using namespace std;
//double e(int x , int n){
//	static double pow=1 , f=1;
//	double result;
//	if(n == 0){
//		return 1;
//	} else{
//
//		result = e(x , n-1);
//		pow = pow*x;
//		f = f*n;
//		return result + (pow/f);
//
//	}
//}
double e(double x , int n){
	static double ans = 1;

	if(n == 0){
		return ans;
	} else{

		ans = 1+x*ans/n;
		return e(x , n-1);
	}
}
/*
 * using loop:
 * double e(double x , int n){
 * 	   double ans;
 * 	   for( ; n>0;n-- ){
 * 	       ans = 1+ x*ans/n;
 * 	   }
 *     return ans;
 * }
 */
int main() {

	cout<<e(2 ,10);

	return 0;
}
