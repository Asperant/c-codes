#include <stdio.h>

// Bir say�n�n asal olup olmad���n� kontrol eden fonksiyon
int isPrime(int number) {
    
	for (int i = 2; i * i <= number; i++) {
        
		if (number % i == 0) {
            
			return 0; // Asal de�il
        }
    }
    
	return 1; // Asal
}

int main() {
    
	int num;

    	printf("Lutfen Sayi Giriniz: ");
    	scanf("%d", &num);

    int smallPrime = num;

    	// Say�dan k���k en yak�n asal say�y� bul
    	while (smallPrime > 1) {
        	
			if (isPrime(smallPrime)) {
            break;
        }
        
		smallPrime--;
    }

    int bigPrime = num + 1;

    	// Say�dan b�y�k en yak�n asal say�y� bul
    	while (1) {
        	
			if (isPrime(bigPrime)) {
            break;
        	}
        	bigPrime++;
    	}

    int bigDiff = bigPrime - num;
    int smallDiff = num - smallPrime;

    	// Sonu�lar� ekrana yazd�rma
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
