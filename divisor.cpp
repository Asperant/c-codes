#include <stdio.h>

int main(){
	
	int num;
		
		// Kullanýcýdan bir sayý al
		printf("Sayi Giriniz: ");
		scanf("%d",&num);
		
		// Sayýnýn tam bölenlerini ekrana yazdýr
		printf("Sayinin Tam Bolenleri: ");
		
			for(int i=1;i<=num;i++){
				
				// Eðer i sayýya tam bölünüyorsa, i'yi ekrana yazdýr
				if(num % i == 0){
					
					printf("%d ",i);	
				}	
			}
	
	return 0;
}
