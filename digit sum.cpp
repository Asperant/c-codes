#include <stdio.h>

int main() {
    
	int number, sum = 0;

    	// Kullan�c�dan say� alma
    	printf("Sayi Giriniz: ");
    	scanf("%d", &number);

    	// Say�n�n basamaklar�n� toplama
    	while (number != 0) {
        	sum += number % 10;
        	number /= 10;
    	}

    	// Sonucu ekrana yazd�rma
    	printf("Sayinin Basamaklari Toplami %d'dir\n", sum);

    return 0;
}
