//============================================================================
// Name        : two.cpp
// Author      : ankit
// Version     :
// Copyright   : Your copyright notice
// Description : 2d array practice
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int arr[3][4]={ {1,2,3,4},
					{1,2,3,4},
					{1,2,3,4}};
	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"--------------------------"<<endl;

	int **parr = new int*[3];
	parr[0] = new int[4];
	parr[1] = new int[4];
	parr[2] = new int[4];


	for(int i=0; i<3; i++){
			for(int j=0; j<4; j++){
				cout<<parr[i][j]<<" ";
			}
			cout<<endl;
		}
	cout<<"--------------------------"<<endl;

//	int *harr[3];
//	harr[0] = new int[4];
//	harr[1] = new int[4];
//	harr[2] = new int[4];
//	for(int i=0; i<3; i++){
//				for(int j=0; j<4; j++){
//					cout<<harr[i][j]<<" ";
//				}
//				cout<<endl;
//	}

	return 0;
}
