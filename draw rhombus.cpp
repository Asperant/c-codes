#include <stdio.h>

int main(){
	
	int base;
		
		// Kullan�c�dan y�ksekli�i al
		printf("Yuksekligi Giriniz: ");
		scanf("%d",&base);
		
		// ��genin �st k�sm�n� olu�tur
		for(int i=1;i<=base;i++){
			
			// Bo�luklar� yazd�r
			for(int j=1;j<=base-i;j++){
				
				printf(" ");	
			}
			
			// Y�ld�zlar� yazd�r
			for(int j=1;j<=2*i-1;j++){
				
				printf("*");	
			}
			
			// Bir alt sat�ra ge�
			printf("\n");
		}
		
		// ��genin alt k�sm�n� olu�tur
		for(int i=base-1;i>=1;i--){
			
			// Bo�luklar� yazd�r
			for(int j=1;j<=base-i;j++){
				
				printf(" ");	
			}
			
			// Y�ld�zlar� yazd�r
			for(int j=1;j<=2*i-1;j++){
				
				printf("*");	
			}
			
			// Bir alt sat�ra ge�
			printf("\n");
		}
		
	return 0;
}
