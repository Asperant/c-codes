#include <stdio.h>

int main(){
	
	int num;
		
		// Kullan�c�dan sat�r say�s�n� al
		printf("Satir Sayisini Giriniz: ");
		scanf("%d",&num);
		
		// �ki nokta aras�nda y�ld�zlarla bir �apraz olu�tur
		for(int i=0;i<num;i++){
			
			for(int j=0;j<num;j++){
				
				// E�er i ve j de�erleri e�itse veya i + j toplam� sat�r say�s�n�n bir eksi�ine e�itse
				if(i == j || i + j == num-1){
					
					// Y�ld�z� yazd�r
					printf("*");	
				}
				else{
					
					// Aksi takdirde bo�luk yazd�r
					printf(" ");
				}
			}
			
			// Bir sonraki sat�ra ge�
			printf("\n");
		}
	
	return 0;
}
