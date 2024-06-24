#include <stdio.h>

// Diziyi s�ralamak i�in kullan�lan selection sort algoritmas�
void selection(int arr[],int size){
	
	int i,j;
	int minindex;
		
		// Diziyi tarayarak en k���k eleman� se�me ve s�ralama
		for(i=0;i<size;i++){
			
			minindex = i;
			
			// Kalan diziyi tarayarak en k���k eleman� bulma
			for(j=i+1;j<size;j++){
				
				if(arr[j]<arr[minindex]){
					
					minindex = j;
					
				}
				
			}
			
			// Swap i�lemi ile elemanlar� yer de�i�tirme
			int temp = arr[i];
			arr[i] = arr[minindex];
			arr[minindex] = temp;
			
		}
	
}


int main(){
	
	int num[100];
	int counter = 0;
	
		// Kullan�c�dan say�lar� alma
		printf("Lutfen Sayi Giriniz(Cikmak Icin Herhangi Bir Harfe Basiniz): ");
		
		while(scanf("%d",&num[counter])==1){
			
			counter++;
			
			// Dizi s�n�r kontrol�
			if(counter>=100){
				
				printf("Sayi Sinirini Astiniz.");
				break;
				
			}
			
		}
	
		// S�ralama i�lemi
		selection(num,counter);
		
		// Sonu�lar� ekrana yazd�rma
		printf("En Kucuk Sayi: %d\n\n",num[0]);
		printf("En Buyuk Sayi: %d",num[counter-1]);
			
	return 0;
}
