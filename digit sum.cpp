#include <stdio.h>

int main() {
    
	int number, sum = 0;

    	// Kullanýcýdan sayý alma
    	printf("Sayi Giriniz: ");
    	scanf("%d", &number);

    	// Sayýnýn basamaklarýný toplama
    	while (number != 0) {
        	sum += number % 10;
        	number /= 10;
    	}

    	// Sonucu ekrana yazdýrma
    	printf("Sayinin Basamaklari Toplami %d'dir\n", sum);

    return 0;
}
