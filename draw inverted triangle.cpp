#include <stdio.h>

int main(){
	
	int base;
		
		 // Kullan�c�dan ��genin sat�r say�s�n� al
		printf("Ucgenin Satir Sayisini Giriniz: ");
		scanf("%d",&base);
		
		// �ki i� i�e d�ng� kullanarak ��geni olu�tur
		for(int i=1;i<=base;i++){
			
			// Bo�luklar� yazd�r (��genin sol taraf�)
			for(int j=1;j<i;j++){
				
				printf(" ");		
			}
			
			// Y�ld�zlar� yazd�r (��genin sa� taraf�)
			for(int j=i;j<=base;j++){
				
				printf("* ");	
			}
			
			// Bir sonraki sat�ra ge�
			printf("\n");
		}

	return 0;
}
