#include <stdio.h>

int main(){
	
	int num;
	int fact = 1;
		
		// Kullanýcýdan Sayý Alma
		printf("Faktoriyelini Istediginiz Sayiyi Giriniz: ");
		scanf("%d", &num);
	
	// Girilen Sayýnýn faktoriyelini hesaplama
	while(num != 0){
		
		fact = num * fact;
		num --;	
	}
		
		// Sonucu ekrana yazdýrma
		printf("Sectiginiz Sayinin Faktoriyeli %d'dir\n",fact);
	
	return 0;
}
