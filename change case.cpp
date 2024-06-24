#include <stdio.h>

int main() {
    char text[1000];
    int i = 0;

    	// Kullanýcýdan metin giriþi alma
    	printf("Metin Giriniz: ");
    	gets(text);

    	// Metni tarayarak küçük harfleri büyük, büyük harfleri küçük harfe dönüþtürme
    	while (text[i] != '\0') {
        	
			if (text[i] >= 'a' && text[i] <= 'z') {
            	
				// Küçük harfi büyük harfe dönüþtürme
            	printf("%c", text[i] - 'a' + 'A');
        	} 
			else if (text[i] >= 'A' && text[i] <= 'Z') {
            	
				// Büyük harfi küçük harfe dönüþtürme
            	printf("%c", text[i] - 'A' + 'a');
        	}
			else {
            
				// Diðer karakterleri aynen yazdýrma
            	printf("%c", text[i]);
        	}

        // Sonraki karaktere geçme
        i++;
    }

    return 0;
}

