#include <stdio.h>

int main(){
    
	// �lk iki Fibonacci terimi
    int num1 = 1;
    int num2 = 1;

    // Kullan�c�dan al�nacak terim say�s�
    int terms;

    	// Kullan�c�dan terim say�s�n� alma
    	printf("Fibonacci Dizisinin Kacinci Terimine Kadar Gormek Istersiniz: ");
    	scanf("%d", &terms);

    	// �lk iki terimi ekrana yazd�rma
    	printf("%d %d ", num1, num2);

    	// Fibonacci dizisini olu�turma ve ekrana yazd�rma
    	for (int i = 2; i < terms; i++) {
        	
			// Ge�ici de�i�ken kullanarak terimleri g�ncelleme
        	int sum = num2;
        	num2 += num1;
        	num1 = sum;

        	// G�ncellenen terimi ekrana yazd�rma
        	printf("%d ", num2);
    	}

    return 0;
}
