#include <stdio.h>
#include <stdlib.h>

typedef struct n{
	int data;
	struct n* next;
}node;

node* addToHead(node** head,int data){
	
	node* newNode = (node*)malloc(sizeof(node));
	newNode->data = data;
	
	if(*head == NULL){
		return newNode;
	}
	newNode->next = *head;
	*head = newNode;
	return newNode;
}

void addToEnd(node** head,int data){
	
	node* newNode = (node*)malloc(sizeof(node));
	newNode->data = data;
	newNode->next = NULL;
	
	if(*head == NULL){
		*head = newNode;
	}
	node* temp = *head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = newNode;
}

void deleteAtEnd(node** head){
	
	if(*head == NULL){
		printf("Liste bos...\n");
		return ;
	}
	if((*head)->next == NULL){
		free(*head);
		*head = NULL;
	}
	else{
		node* temp = *head;
		while(temp->next->next != NULL){
			temp = temp->next;
		}
		free(temp->next);
		temp->next = NULL;
	}
}

void deleteAtHead(node** head){
	
	node* temp = *head;
	
	if(*head == NULL){
		printf("liste bos...");
		return ;
	}
	*head = (*head)->next;
	free(temp);
}

void freeList(node** head){
	node* current = *head;
	node* nextNode;
	
	while(current != NULL){
		nextNode = current->next;
		free(current);
		current = nextNode;
	}
	free(*head);
}

void printList(node* head){
	node* temp = head;
	while(temp != NULL){
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void reverseList(node** head){
	
	if(*head == NULL){
		printf("Liste bos...");
		return ;
	}
	
	node* next = NULL;
	node* current = *head;
	node* prev = NULL;
	
	while(current != NULL){
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
}

int main(){

	




	return 0;
}
