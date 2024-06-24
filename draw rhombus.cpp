#include <stdio.h>

int main(){
	
	int base;
		
		// Kullanýcýdan yüksekliði al
		printf("Yuksekligi Giriniz: ");
		scanf("%d",&base);
		
		// Üçgenin üst kýsmýný oluþtur
		for(int i=1;i<=base;i++){
			
			// Boþluklarý yazdýr
			for(int j=1;j<=base-i;j++){
				
				printf(" ");	
			}
			
			// Yýldýzlarý yazdýr
			for(int j=1;j<=2*i-1;j++){
				
				printf("*");	
			}
			
			// Bir alt satýra geç
			printf("\n");
		}
		
		// Üçgenin alt kýsmýný oluþtur
		for(int i=base-1;i>=1;i--){
			
			// Boþluklarý yazdýr
			for(int j=1;j<=base-i;j++){
				
				printf(" ");	
			}
			
			// Yýldýzlarý yazdýr
			for(int j=1;j<=2*i-1;j++){
				
				printf("*");	
			}
			
			// Bir alt satýra geç
			printf("\n");
		}
		
	return 0;
}
