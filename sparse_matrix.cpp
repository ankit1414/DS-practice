#include<iostream>
using namespace std;
struct element
{	int i;
	int j;
	int x;
	
};
struct sparseMatrix
{
	int m;
	int n;
	int num;
	struct element *e;
};
void create(struct sparseMatrix *s){
	cout<<"enter the dimensions: ";
	cin>>s->m>>s->n;
	cout<<"enter the no of non-zero elements: ";
	cin>>s->num;
	s->e = new element[s->num];
	cout<<"enter all non-zero elements:\n";
	for(int i=0; i<s->num; i++){
		cin>>s->e[i].i>>s->e[i].j>>s->e[i].x;
	}
}
void display(struct sparseMatrix s){
	int k=0;
	for(int i=0; i<s.m; i++){
		for(int j=0; j<s.n; j++){
			if(i==s.e[k].i && j == s.e[k].j){
				cout<<s.e[k++].x<<" ";
			}
			else{
				cout<<"0 ";
			}
		}
		cout<<endl;
	}
}
int main(){

	struct sparseMatrix s;

	create(&s);
	display(s);

	return 0;
}