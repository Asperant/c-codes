#include <stdio.h>

// Bir sayýnýn asal olup olmadýðýný kontrol eden fonksiyon
int isPrime(int num) {
    
	// Asal sayý kontrolü
    for (int i = 2; i < num; i++) {
        
		if (num % i == 0) {
            
			return 0; // Asal deðilse 0 döndür
        }
    }
    
	return 1; // Asalsa 1 döndür
}

int main() {
    int number;

    	// Kullanýcýdan sayý alma
    	printf("Kontrol Etmek Istediginiz Sayiyi Giriniz: ");
    	scanf("%d", &number);

    	// Asal sayý kontrolü ve sonucu ekrana yazdýrma
    	if (isPrime(number) == 0) {
    		
        	printf("%d Sayisi Asal Sayi Degildir\n", number);
    	} 
		else {
        	
			printf("%d Sayisi Asal Sayidir\n", number);
   	 	}

    return 0;
}
