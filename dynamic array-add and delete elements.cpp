#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int* arr = (int*)malloc(sizeof(int));
	int num;
	int size = 0;
	int capacity = 1;
	
			while(1){
				
				printf("Lutfen sayi giriniz: ");
				scanf("%d",&num);
				
				if(num < 0){
					break;
				}
				if(size>=capacity){
					capacity *= 2;
					arr = (int*)realloc(arr,sizeof(int)*capacity);
				}
				arr[size] = num;
				size++;
			}
	char choice;
	int control;
		
		while(1){
			printf("Silme islemi yapmak istiyor musunuz(E,H): ");
			scanf(" %c",&choice);
			
			if(choice == 'H' || choice == 'h'){
				break;
			}
		
			if(choice == 'e' || choice == 'E'){
				
				printf("Hangi sayiyi silmek istiyorsunuz: ");
				scanf("%d",&control);
				
				int found = 0;
				for(int i=0;i<size;i++){
					if(arr[i]==control){
						found = 1;
						arr[i] = arr[size-1];
						size--;
						arr = (int*)realloc(arr,sizeof(int)*size);
						for(int j=i;j<size;j++){
							int temp = arr[j];
							arr[j] = arr[j+1];
							arr[j+1] = temp;
						}
						break;
					}
				}
				if(!found){
					printf("Sayi bulunamadi.\n");
				}
			}
		}
		printf("Yeni dizi: ");
		for(int i=0;i<size;i++){
			printf("%d ",arr[i]);
		}
				
	free(arr);
			
	return 0;
}
