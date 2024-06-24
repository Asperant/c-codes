#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// Dizinin aritmetik ortalamasýný hesaplayan fonksiyon
double calculateMean(int arr[], int size) {
    
	double sum = 0, mean;
    
    	for (int i = 0; i < size; i++) {
        
			sum += arr[i];
    	}
    
    	mean = sum / size;
    
    return mean;
}

// Dizinin standart sapmasýný hesaplayan fonksiyon
double StandardDeviation(int arr[], int size) {
    
	double mean = calculateMean(arr,size);
    double sumOfSquares = 0, result;
    
    	for (int i = 0; i < size; i++) {
        	
			sumOfSquares += pow(arr[i] - mean, 2);
    	}
    
    	result = sqrt(sumOfSquares / size);
    
    return result;
}

int main() {
    
	int numbers[100];
    int count = 0, value;
    
    	printf("Sayilari girmeye baslayabilirsiniz. (Bitirmek icin herhangi bir harf girin)\n");

    	while (count < 100) {
        	
			if (scanf("%d", &value) != 1) {
            break; // Sayý giriþi beklenmiyorsa döngüden çýk
        	}

        	numbers[count] = value;
        	count++;
    	}

    	if(count > 0){
        
			// Kullanýcý en az bir sayý girdiyse iþlem yap
        	printf("Aritmetik Ortalama: %lf\n", calculateMean(numbers, count));
        	printf("Standart Sapma: %lf\n", StandardDeviation(numbers, count));
    	} 
		else{
        	printf("Girilen sayi yok, islem yapilamaz.\n");
    	}

    	// Belleði serbest býrak

    return 0;
}

