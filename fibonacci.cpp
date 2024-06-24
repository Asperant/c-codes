#include <stdio.h>

int main(){
    
	// Ýlk iki Fibonacci terimi
    int num1 = 1;
    int num2 = 1;

    // Kullanýcýdan alýnacak terim sayýsý
    int terms;

    	// Kullanýcýdan terim sayýsýný alma
    	printf("Fibonacci Dizisinin Kacinci Terimine Kadar Gormek Istersiniz: ");
    	scanf("%d", &terms);

    	// Ýlk iki terimi ekrana yazdýrma
    	printf("%d %d ", num1, num2);

    	// Fibonacci dizisini oluþturma ve ekrana yazdýrma
    	for (int i = 2; i < terms; i++) {
        	
			// Geçici deðiþken kullanarak terimleri güncelleme
        	int sum = num2;
        	num2 += num1;
        	num1 = sum;

        	// Güncellenen terimi ekrana yazdýrma
        	printf("%d ", num2);
    	}

    return 0;
}
