#include <stdio.h>

int main() {
    char text[1000];
    int i = 0;

    	// Kullan�c�dan metin giri�i alma
    	printf("Metin Giriniz: ");
    	gets(text);

    	// Metni tarayarak k���k harfleri b�y�k, b�y�k harfleri k���k harfe d�n��t�rme
    	while (text[i] != '\0') {
        	
			if (text[i] >= 'a' && text[i] <= 'z') {
            	
				// K���k harfi b�y�k harfe d�n��t�rme
            	printf("%c", text[i] - 'a' + 'A');
        	} 
			else if (text[i] >= 'A' && text[i] <= 'Z') {
            	
				// B�y�k harfi k���k harfe d�n��t�rme
            	printf("%c", text[i] - 'A' + 'a');
        	}
			else {
            
				// Di�er karakterleri aynen yazd�rma
            	printf("%c", text[i]);
        	}

        // Sonraki karaktere ge�me
        i++;
    }

    return 0;
}

