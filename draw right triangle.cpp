#include <stdio.h>

int main(){
	
	int base;
		
		// Kullan�c�dan dik ��genin b�y�kl���n� al
		printf("Dik Ucgenin Buyuklugunu Giriniz: ");
		scanf("%d",&base);
		
		printf("\n");
		
		// �� i�e d�ng�lerle dik ��geni olu�tur
		for(int i=1;i<=base;i++){
			
			// Her sat�rda i kadar y�ld�z� yazd�r
			for(int j=1;j<=i;j++){
				
				printf("* ");
			}
			
			// Bir sonraki sat�ra ge�
			printf("\n");
		}
	
	return 0;
}
