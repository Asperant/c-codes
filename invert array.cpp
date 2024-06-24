#include <stdio.h>

int main() {
    
	int numbers[1000];
    int size = 0;

    	printf("Lutfen Sayi Giriniz (Cikis icin herhangi bir harf giriniz): ");

    	// Kullan�c� say� girdik�e devam eden bir d�ng�
    	while (1) {
        
			if (scanf("%d", &numbers[size]) == 0) {
            	break;
        	}
        	size++;
    	}

    	// Diziyi ters �evirme
    	for (int i = 0; i <= size / 2; i++) {
        	
			int temp = numbers[i];
        	numbers[i] = numbers[size - i - 1];
        	numbers[size - i - 1] = temp;
    	}

    	// Ters �evrilen diziyi ekrana yazd�rma
    	printf("Ters Cevrilmis Dizi: ");
    	
		for (int i = 0; i < size; i++) {
        
			printf("%d ", numbers[i]);
    	}

    return 0;
}
