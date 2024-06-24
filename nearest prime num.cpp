#include <stdio.h>

// Bir sayýnýn asal olup olmadýðýný kontrol eden fonksiyon
int isPrime(int number) {
    
	for (int i = 2; i * i <= number; i++) {
        
		if (number % i == 0) {
            
			return 0; // Asal deðil
        }
    }
    
	return 1; // Asal
}

int main() {
    
	int num;

    	printf("Lutfen Sayi Giriniz: ");
    	scanf("%d", &num);

    int smallPrime = num;

    	// Sayýdan küçük en yakýn asal sayýyý bul
    	while (smallPrime > 1) {
        	
			if (isPrime(smallPrime)) {
            break;
        }
        
		smallPrime--;
    }

    int bigPrime = num + 1;

    	// Sayýdan büyük en yakýn asal sayýyý bul
    	while (1) {
        	
			if (isPrime(bigPrime)) {
            break;
        	}
        	bigPrime++;
    	}

    int bigDiff = bigPrime - num;
    int smallDiff = num - smallPrime;

    	// Sonuçlarý ekrana yazdýrma
    	if (bigDiff > smallDiff) {
        	printf("%d Sayisina En Yakin Asal Sayi %d'dir",num,smallPrime);
    	} 
		else if (bigDiff < smallDiff) {
        
			printf("%d Sayisina En Yakin Asal Sayi %d'dir",num,bigPrime);
    	} 
		else {
        	
			printf("%d Sayisina En Yakin Asal Sayilar %d ve %d'dir", num, smallPrime, bigPrime);
    	}

    return 0;
}
