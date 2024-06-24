#include <stdio.h>

// Belirtilen karakteri bir dizeden kald�ran fonksiyon
void removeCharacter(char *str,char ch){
	
	// Kaynak ve hedef i�aret�ileri
	char *src = str;
	char *dst = str;
	
		// Dize sonuna kadar tarama
		while(*src){
			
			// Belirtilen karakteri bulmazsa hedefe kopyala
			if(*src != ch){
				
				*dst = *src;
				dst++;	
			}
			src++;
		}
		
		// Yeni sonland�r�c� karakteri ekle
		*dst = '\0';
}


int main(){
	
	char text[1000];
	char removeChar;
		
		// Kullan�c�dan metni alma
		printf("Lutfen Metin Giriniz: ");
		gets(text);
		
		// Kullan�c�dan silinecek harfi alma
		printf("Lutfen Silinecek Harfi Seciniz: ");
		scanf("%c",&removeChar);
		
		// Belirtilen harfi metinden kald�rma
		removeCharacter(text,removeChar);
		
		// Sonu�lar� ekrana yazd�rma
		printf("Sectiginiz Harf Silinmis Metin: ");
		printf("%s",text);
		
	return 0;
}
