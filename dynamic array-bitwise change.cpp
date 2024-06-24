#include <stdio.h>
#include <stdlib.h>

int control(int num,int shift){
	return ((num) & (1<<shift));
}

int main(){
	
	FILE* file = fopen("metin.txt","w");
	int* arr = (int*)malloc(sizeof(int));
	int size = 0;
	int capacity = 1;
	int num;
	
		while(1){
			
			printf("Lutfen sayi giriniz(sonlandirmak icin negatif): ");
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
		for(int i=0;i<size;i++){
			if(control(arr[i],4)){
				arr[i] = (arr[i]<<1);
			}
			else{
				arr[i] = (arr[i]>>1);
			}
			fprintf(file,"%d\n",arr[i]);
		}
	fclose(file);
	free(arr);
	
	return 0;
}
