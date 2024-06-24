#include <stdio.h>

// �ki diziyi birle�tiren fonksiyon
void concatArrays(int *destination, int *size1, int *source, int *size2) {
    
	for (int i = 0; i < *size2; i++) {
        
		destination[*size1 + i] = source[i];
    }

    // Birle�tirilen dizinin toplam eleman say�s�n� g�ncelleme
    *size1 += *size2;
}

int main() {
    
	int array1[100]; // Varsay�lan maksimum boyut
    int array2[100]; // Varsay�lan maksimum boyut
    int size1 = 0;
    int size2 = 0;
    int number;
    char input;

    	// �lk diziye elemanlar� alma
    	printf("1. Diziye Eleman Eklemek Icin Sayi Girin (Sonlandirmak icin herhangi bir harfe basin): ");

    	while (scanf("%d", &number) == 1) {
        
			array1[size1] = number;
        	size1++;
        	
			if (size1 >= 100) {
            
				printf("Dizi Sinirini Astiniz.\n");
           		return 1;
        	}
    	}

    	// Giri�in sonland���n� kontrol et
    	if (feof(stdin)) {
        	
			printf("Giris Sonlandirildi.\n");
        	return 0;
    	}

    	// Temizleme i�lemi
    	while ((input = getchar()) != '\n' && input != EOF);

    	// �kinci diziye elemanlar� alma
    	printf("2. Diziye Eleman Eklemek Icin Sayi Girin (Sonlandirmak icin herhangi bir harfe basin): ");

    	while (scanf("%d", &number) == 1) {
        	
			array2[size2] = number;
        	size2++;
        	
			if (size2 >= 100) {
            
				printf("Dizi Sinirini Astiniz.\n");
            	return 1;
        	}
    	}

    	// �ki diziyi birle�tirme i�lemi
    	concatArrays(array1, &size1, array2, &size2);

    	// Birle�tirilmi� diziyi ekrana yazd�rma
    	printf("Birlestirilmis Dizi: ");

    	for (int i = 0; i < size1; i++) {
        	
			printf("%d ", array1[i]);
    }

    return 0;
}

