#include <stdio.h>

int main(){
	
	int base;
		
		 // Kullanýcýdan üçgenin satýr sayýsýný al
		printf("Ucgenin Satir Sayisini Giriniz: ");
		scanf("%d",&base);
		
		// Ýki iç içe döngü kullanarak üçgeni oluþtur
		for(int i=1;i<=base;i++){
			
			// Boþluklarý yazdýr (üçgenin sol tarafý)
			for(int j=1;j<i;j++){
				
				printf(" ");		
			}
			
			// Yýldýzlarý yazdýr (üçgenin sað tarafý)
			for(int j=i;j<=base;j++){
				
				printf("* ");	
			}
			
			// Bir sonraki satýra geç
			printf("\n");
		}

	return 0;
}
