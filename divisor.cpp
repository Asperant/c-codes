#include <stdio.h>

int main(){
	
	int num;
		
		// Kullan�c�dan bir say� al
		printf("Sayi Giriniz: ");
		scanf("%d",&num);
		
		// Say�n�n tam b�lenlerini ekrana yazd�r
		printf("Sayinin Tam Bolenleri: ");
		
			for(int i=1;i<=num;i++){
				
				// E�er i say�ya tam b�l�n�yorsa, i'yi ekrana yazd�r
				if(num % i == 0){
					
					printf("%d ",i);	
				}	
			}
	
	return 0;
}
