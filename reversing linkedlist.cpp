#include<iostream>
using namespace std;
struct node
{	
	int data;
	node *next;

	node(int data){
		this->data = data;
		next = NULL;
	}
	
};

void display(node *start){

	node *traveller = start;
	while(traveller){
		cout<<traveller->data<<"  ";
		traveller = traveller->next;
	}
}

node * createLinkedList(int a[] , int size){
	node * start = NULL;
	node * pusher;
	for(int i=0; i<size; i++){
		if(start == NULL){
			start = new node(a[i]);
			pusher = start;
		}
		else{
			pusher->next = new node(a[i]);
			pusher = pusher->next;
		}
	}
	return start; 
}

node* reverseLL(node * start){
//performed using sliding pointers;
	node *p;
	node *q;
	node *r;
	p = start;
	q = NULL;
	r = NULL;

	while(p != NULL){
		r = q;
		q = p;
		p = p->next;
		q->next = r;
	}
	start=q;
	return start;

}

int main(){

	int arr[] ={1 ,2 ,3 ,4 ,5};
	node *start = createLinkedList(arr , 5);
	display(start);
	start = reverseLL(start);
	cout<<"\n";
	display(start);






	return 0;
}