#include <stdio.h>

void selection(int arr[],int size){
	
	int i,j;
	int minindex;
	
		for(i=0;i<size-1;i++){
			
			minindex = i;
			
			for(j=i+1;j<size;j++){
				
				if(arr[j]<arr[minindex]){
					
					minindex = j;
				}	
			}
			
			int temp = arr[i];
			arr[i] = arr[minindex];
			arr[minindex] = temp;
		}
}


int main(){
	
	int num[100];
	int counter = 0;
	int i;
	
		printf("Lutfen Sayi Giriniz(Cikmak Icin Herhangi Bir Harf Giriniz): ");
		
		while(scanf("%d",&num[counter])==1){
			
			counter++;
			
			if(counter>=100){
				
				printf("Sayi Sinirini Astiniz");
				break;
			}
		}
	
		selection(num,counter);
		
		printf("Sirali Dizi: ");
		
		for(i=0;i<counter;i++){
			
			printf("%d ",num[i]);	
		}
	
	return 0;
}
