#include <stdio.h>

int main(){
	
	int base;
		
		// Kullan�c�dan sat�r say�s�n� al
		printf("Satir Sayisini Giriniz: ");
		scanf("%d",&base);
		
		// Her bir sat�r� d�ng� ile olu�tur
		for(int i=1;i<=base;i++){
			
			// Y�ld�zlardan �nce bo�luklar� yazd�r
			for(int j=1;j<=base-i;j++){
				
				printf(" ");	
			}
			
			// G�ncel sat�r i�in y�ld�zlar� yazd�r
			for(int j=1;j<=2*i-1;j++){
				
				printf("*");	
			}
			
			// G�ncel sat�r�n y�ld�zlar�n� yazd�rd�ktan sonra bir alt sat�ra ge�
			printf("\n");
		}
	
	return 0;
}
