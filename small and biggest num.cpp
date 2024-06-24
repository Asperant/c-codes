#include <stdio.h>

// Diziyi sýralamak için kullanýlan selection sort algoritmasý
void selection(int arr[],int size){
	
	int i,j;
	int minindex;
		
		// Diziyi tarayarak en küçük elemaný seçme ve sýralama
		for(i=0;i<size;i++){
			
			minindex = i;
			
			// Kalan diziyi tarayarak en küçük elemaný bulma
			for(j=i+1;j<size;j++){
				
				if(arr[j]<arr[minindex]){
					
					minindex = j;
					
				}
				
			}
			
			// Swap iþlemi ile elemanlarý yer deðiþtirme
			int temp = arr[i];
			arr[i] = arr[minindex];
			arr[minindex] = temp;
			
		}
	
}


int main(){
	
	int num[100];
	int counter = 0;
	
		// Kullanýcýdan sayýlarý alma
		printf("Lutfen Sayi Giriniz(Cikmak Icin Herhangi Bir Harfe Basiniz): ");
		
		while(scanf("%d",&num[counter])==1){
			
			counter++;
			
			// Dizi sýnýr kontrolü
			if(counter>=100){
				
				printf("Sayi Sinirini Astiniz.");
				break;
				
			}
			
		}
	
		// Sýralama iþlemi
		selection(num,counter);
		
		// Sonuçlarý ekrana yazdýrma
		printf("En Kucuk Sayi: %d\n\n",num[0]);
		printf("En Buyuk Sayi: %d",num[counter-1]);
			
	return 0;
}
