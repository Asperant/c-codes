#include <stdio.h>

int main(){
	
	int num;
	int fact = 1;
		
		// Kullan�c�dan Say� Alma
		printf("Faktoriyelini Istediginiz Sayiyi Giriniz: ");
		scanf("%d", &num);
	
	// Girilen Say�n�n faktoriyelini hesaplama
	while(num != 0){
		
		fact = num * fact;
		num --;	
	}
		
		// Sonucu ekrana yazd�rma
		printf("Sectiginiz Sayinin Faktoriyeli %d'dir\n",fact);
	
	return 0;
}
