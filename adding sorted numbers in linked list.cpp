#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct Node{
	
	int data;
	struct Node* next;
}node;

node* add_sorted(node* r,int x){
	
	node* new_node = (node*)malloc(sizeof(node));
	
		if (new_node == NULL) {
        
			printf("Bellek tahsisi basarisiz\n");
        	exit(EXIT_FAILURE);
    	}
    
	new_node->data = x;
	new_node->next = NULL;
	
		if(r==NULL || r->data >= x){
			
			new_node->next = r;
			return new_node;
		}
	
	node* iter = r;
	
		if(r->next!=NULL && r->next->data < x){
			
			iter = iter->next;
		}	
	
	new_node->next = iter->next;
	iter->next = new_node;
	
	return r;	
}

void print_list(node* r){
	
	while(r!=NULL){
		
		printf("%d ",r->data);
		r = r->next;
	}
}


int main(){
	
	node* root = NULL;
	int num;
	char input[100];
	
		printf("Lutfen sayi giriniz(cikis icin harf giriniz): ");
	
		while(1){
			
			if(scanf("%d",&num)==0){
				
				break;
			}
			
			root = add_sorted(root,num);	
		}
	
		printf("Listenin son hali: ");
		print_list(root);	
	
	return 0;
}
