#include <stdio.h>

int main(){
	
	int num;
		
		// Kullanýcýdan satýr sayýsýný al
		printf("Satir Sayisini Giriniz: ");
		scanf("%d",&num);
		
		// Ýki nokta arasýnda yýldýzlarla bir çapraz oluþtur
		for(int i=0;i<num;i++){
			
			for(int j=0;j<num;j++){
				
				// Eðer i ve j deðerleri eþitse veya i + j toplamý satýr sayýsýnýn bir eksiðine eþitse
				if(i == j || i + j == num-1){
					
					// Yýldýzý yazdýr
					printf("*");	
				}
				else{
					
					// Aksi takdirde boþluk yazdýr
					printf(" ");
				}
			}
			
			// Bir sonraki satýra geç
			printf("\n");
		}
	
	return 0;
}
