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

node* mergeLL(node* first , node* second){

	node * third = NULL;
	node * traveller;

	while(first != NULL && second != NULL){

		if(third == NULL){

			if(first->data <= second->data){

				third = first;
				traveller = third;
				first = first ->next;
				traveller->next = NULL;
			

			}
			else{
				third = second;
				traveller = third;
				second = second ->next;
				traveller->next = NULL;

			}
				
		} 
		else {

			if(first->data <= second->data){

				traveller->next = first;
				traveller = first;
				first = first->next;
				traveller->next = NULL;


			}
			else{
				traveller->next = second;
				traveller = second;
				second = second->next;
				traveller->next = NULL;

			}

		}


	}
	

	if(first){
		traveller->next = first;
	} 
	else if(second){
		traveller->next = second;
	}




	return third;
}

int main(){

	int a[] = {2, 4, 6, 8, 10};
	int b[] = {1, 3, 5, 7, 9, 11, 13, 15, 17};
	node *first , *second;
	first = createLinkedList(a , 5);
	second = createLinkedList(b , 9);
	//display(first);
	//cout<<endl;
	//display(second);
	node *merged;
	merged = mergeLL(first , second);

	display(merged);





	return 0;
}