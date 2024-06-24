#include <stdio.h>

// Ýki diziyi birleþtiren fonksiyon
void concatArrays(int *destination, int *size1, int *source, int *size2) {
    
	for (int i = 0; i < *size2; i++) {
        
		destination[*size1 + i] = source[i];
    }

    // Birleþtirilen dizinin toplam eleman sayýsýný güncelleme
    *size1 += *size2;
}

int main() {
    
	int array1[100]; // Varsayýlan maksimum boyut
    int array2[100]; // Varsayýlan maksimum boyut
    int size1 = 0;
    int size2 = 0;
    int number;
    char input;

    	// Ýlk diziye elemanlarý alma
    	printf("1. Diziye Eleman Eklemek Icin Sayi Girin (Sonlandirmak icin herhangi bir harfe basin): ");

    	while (scanf("%d", &number) == 1) {
        
			array1[size1] = number;
        	size1++;
        	
			if (size1 >= 100) {
            
				printf("Dizi Sinirini Astiniz.\n");
           		return 1;
        	}
    	}

    	// Giriþin sonlandýðýný kontrol et
    	if (feof(stdin)) {
        	
			printf("Giris Sonlandirildi.\n");
        	return 0;
    	}

    	// Temizleme iþlemi
    	while ((input = getchar()) != '\n' && input != EOF);

    	// Ýkinci diziye elemanlarý alma
    	printf("2. Diziye Eleman Eklemek Icin Sayi Girin (Sonlandirmak icin herhangi bir harfe basin): ");

    	while (scanf("%d", &number) == 1) {
        	
			array2[size2] = number;
        	size2++;
        	
			if (size2 >= 100) {
            
				printf("Dizi Sinirini Astiniz.\n");
            	return 1;
        	}
    	}

    	// Ýki diziyi birleþtirme iþlemi
    	concatArrays(array1, &size1, array2, &size2);

    	// Birleþtirilmiþ diziyi ekrana yazdýrma
    	printf("Birlestirilmis Dizi: ");

    	for (int i = 0; i < size1; i++) {
        	
			printf("%d ", array1[i]);
    }

    return 0;
}

