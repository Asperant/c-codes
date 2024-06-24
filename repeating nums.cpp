#include <stdio.h>

// Selection sort algoritmas� ile s�ralama
void selectionSort(int arr[], int size) {
    
	int i,j,minIndex;

    for (i=0;i<size-1;i++) {
        
		minIndex = i;

        for (j=i+1;j<size;j++) {
            
			if (arr[j] < arr[minIndex]) {
               
			    minIndex = j;
            }
        }

        // Swap i�lemi
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

// Tekrar eden elemanlar� sayan fonksiyon
void countRepeatingElements(int arr[], int size) {
    
	int i=0;

    while (i<size) {
        
		int current = arr[i];
        int count=1;

        while (i<size-1 && arr[i]==arr[i+1]) {
            
			count++;
            i++;
        }

        	if (count>1) {
            	
				printf("%d Sayisi %d Kez Tekrar Ediyor.\n",current,count);
        	}
        i++;
    }
}

int main() {
    
	int num[100];
    int counter = 0;

    	printf("Lutfen Sayi Giriniz(Cikmak Icin Herhangi Bir Harfe Basiniz): ");

    	while (scanf("%d", &num[counter]) == 1) {
        	counter++;

        	if(counter>=100) {
            	printf("Sayi Sinirini Astiniz.");
            	break;
        	}
    	}

    	// Selection sort ile diziyi s�ralama
    	selectionSort(num,counter);

    	printf("Tekrar Eden Elemanlar:\n\n");

    	// Tekrar eden elemanlar� yazd�rma
    	countRepeatingElements(num,counter);

    return 0;
}
