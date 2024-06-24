#include <stdio.h>
#include <stdlib.h>

void sort(int* arr,int size){
	
	int minIndex;
		
		for(int i=0;i<size;i++){
			minIndex = i;
			
			for(int j=i+1;j<size;j++){
				if(arr[minIndex]<arr[j]){
					minIndex = j;
				}
			}
			int temp = arr[minIndex];
			arr[minIndex] = arr[i];
			arr[i] = temp;
		}
}

int main(){
	
	int* arr = (int*)malloc(sizeof(int));
	int size = 0;
	int capacity = 1;
	int num;
	
		while(1){
			printf("Lutfen sayi giriniz(sonlandirmak icin negatif): ");
			scanf("%d", &num);
			
			if(num<0){
				break;
			}
			if(size>=capacity){
				capacity *= 2;
				arr = (int*)realloc(arr,capacity*sizeof(int));
			}
			arr[size] = num;
			size++;
		}
	float medyan;	
		if(size%2 == 0){
			medyan = (float)(arr[size/2-1] + arr[size/2]) / 2.0;
			printf("Dizinin medyani : %f",medyan);
		}
		else{
			medyan = arr[(size/2)];
			printf("Dizinin medyani : %f",medyan);
		}
	free(arr);	
	
	return 0;
}
