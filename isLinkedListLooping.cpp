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

void display(node *start){

	node *traveller = start;
	while(traveller){
		cout<<traveller->data<<"  ";
		traveller = traveller->next;
	}
}

int isLooping(node* start){

	node *p , *q;
	p = q = start;

	do{

		q = q->next;
		p = p->next;
		p == p?p->next:p;

	} while(p && q && p!=q);
	int r;

	p != q ? r=0:r= 1; 
	return r;




}

int main(){

	int a[] = {1, 3, 5, 7, 9, 11, 13, 15, 17};

	node *start = createLinkedList(a , 9);

	node* temp = start;
	while(temp->next != NULL) temp = temp-> next;

	temp ->next = start->next->next;

	//display(start); //infinite loop

	int flag = isLooping(start);

	flag == 1?cout<<"loooping":cout<<"not looping";






	return 0;
}