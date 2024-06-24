#include <stdio.h>

#define MAX_SIZE 100

void insertionSort(int arr[], int size) {
    
	for (int i = 1; i < size; i++) {
        
		int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            
			arr[j + 1] = arr[j];
            j = j - 1;
        }
        
        arr[j + 1] = key;
    }
}

int main() {
    
	int array[MAX_SIZE];
    int oddArray[MAX_SIZE], evenArray[MAX_SIZE];
    int oddCounter = 0, evenCounter = 0;

    int num;
    
    	while (1) {
        	printf("Lutfen Sayi Giriniz(cikis icin herhangi bir harf giriniz): ");
        	
			if (scanf("%d", &num) != 1) {
            // Eðer bir harf (geçerli bir sayý olmayan bir giriþ) girilirse döngüden çýk
            break;
        	}

        	array[oddCounter + evenCounter] = num;

        	if (num % 2 == 0) {
            	
				evenArray[evenCounter++] = num;
        	} 
			else {
            
				oddArray[oddCounter++] = num;
        	}

        if (oddCounter + evenCounter >= MAX_SIZE) {
            
			printf("Maksimum dizi boyutuna ulasildi. Program sona eriyor.\n");
            break;
        }
    }

    if(oddCounter + evenCounter > 0){
        
		insertionSort(evenArray, evenCounter);
        insertionSort(oddArray, oddCounter);

        printf("Tek Sayilarin Dizisi: ");
        for(int i = 0; i < oddCounter; i++){
            
			printf("%d ", oddArray[i]);
        }

        printf("\n\nCift Sayilarin Dizisi: ");
        for(int i = 0; i < evenCounter; i++){
            
			printf("%d ", evenArray[i]);
        }
    } 
	else{
        printf("Girilen gecerli bir sayi yok.\n");
    }

    return 0;
}

