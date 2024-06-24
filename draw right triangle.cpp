#include <stdio.h>

int main(){
	
	int base;
		
		// Kullanýcýdan dik üçgenin büyüklüðünü al
		printf("Dik Ucgenin Buyuklugunu Giriniz: ");
		scanf("%d",&base);
		
		printf("\n");
		
		// Ýç içe döngülerle dik üçgeni oluþtur
		for(int i=1;i<=base;i++){
			
			// Her satýrda i kadar yýldýzý yazdýr
			for(int j=1;j<=i;j++){
				
				printf("* ");
			}
			
			// Bir sonraki satýra geç
			printf("\n");
		}
	
	return 0;
}
