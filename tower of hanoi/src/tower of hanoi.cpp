//============================================================================
// Name        : tower.cpp
// Author      : ankit
// Version     :
// Copyright   : Your copyright notice
// Description : tower of hanoi problem using recursion
//============================================================================

#include <iostream>
using namespace std;

void TOH(int n , int A , int B , int C){

	if(n>0){
		TOH(n-1 ,A ,C,B);
		cout<<"("<<A<<" , "<<B<<")"<<endl;
		TOH(n-1, B,A,C);

	}
}

int main() {
	TOH(2 ,1 ,2 ,3);
	return 0;
}
