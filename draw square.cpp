#include <stdio.h>

int main(){
	
	int side;
		
		// Kullan�c�dan karenin kenar uzunlu�unu al
		printf("Karenin Kenarini Giriniz: ");
		scanf("%d",&side);
		
		// �ki i� i�e d�ng� kullanarak kareyi olu�tur
		for(int i=1;i<=side;i++){
			
			// Her bir sat�rda y�ld�zlar� yazd�r
			for(int j=1;j<=side;j++){
				
				printf("* ");	
			}
			
			// Bir sonraki sat�ra ge�
			printf("\n");
		}
	
		return 0;
}
