#include <stdio.h>

// Bir say�n�n asal olup olmad���n� kontrol eden fonksiyon
int isPrime(int num) {
    
	// Asal say� kontrol�
    for (int i = 2; i < num; i++) {
        
		if (num % i == 0) {
            
			return 0; // Asal de�ilse 0 d�nd�r
        }
    }
    
	return 1; // Asalsa 1 d�nd�r
}

int main() {
    int number;

    	// Kullan�c�dan say� alma
    	printf("Kontrol Etmek Istediginiz Sayiyi Giriniz: ");
    	scanf("%d", &number);

    	// Asal say� kontrol� ve sonucu ekrana yazd�rma
    	if (isPrime(number) == 0) {
    		
        	printf("%d Sayisi Asal Sayi Degildir\n", number);
    	} 
		else {
        	
			printf("%d Sayisi Asal Sayidir\n", number);
   	 	}

    return 0;
}
