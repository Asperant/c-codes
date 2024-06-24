#include <stdio.h>

int main(){
	
	int side;
		
		// Kullanýcýdan karenin kenar uzunluðunu al
		printf("Karenin Kenarini Giriniz: ");
		scanf("%d",&side);
		
		// Ýki iç içe döngü kullanarak kareyi oluþtur
		for(int i=1;i<=side;i++){
			
			// Her bir satýrda yýldýzlarý yazdýr
			for(int j=1;j<=side;j++){
				
				printf("* ");	
			}
			
			// Bir sonraki satýra geç
			printf("\n");
		}
	
		return 0;
}
