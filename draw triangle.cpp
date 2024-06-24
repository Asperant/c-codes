#include <stdio.h>

int main(){
	
	int base;
		
		// Kullanýcýdan satýr sayýsýný al
		printf("Satir Sayisini Giriniz: ");
		scanf("%d",&base);
		
		// Her bir satýrý döngü ile oluþtur
		for(int i=1;i<=base;i++){
			
			// Yýldýzlardan önce boþluklarý yazdýr
			for(int j=1;j<=base-i;j++){
				
				printf(" ");	
			}
			
			// Güncel satýr için yýldýzlarý yazdýr
			for(int j=1;j<=2*i-1;j++){
				
				printf("*");	
			}
			
			// Güncel satýrýn yýldýzlarýný yazdýrdýktan sonra bir alt satýra geç
			printf("\n");
		}
	
	return 0;
}
