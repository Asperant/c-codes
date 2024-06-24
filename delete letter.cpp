#include <stdio.h>

// Belirtilen karakteri bir dizeden kaldýran fonksiyon
void removeCharacter(char *str,char ch){
	
	// Kaynak ve hedef iþaretçileri
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
		
		// Yeni sonlandýrýcý karakteri ekle
		*dst = '\0';
}


int main(){
	
	char text[1000];
	char removeChar;
		
		// Kullanýcýdan metni alma
		printf("Lutfen Metin Giriniz: ");
		gets(text);
		
		// Kullanýcýdan silinecek harfi alma
		printf("Lutfen Silinecek Harfi Seciniz: ");
		scanf("%c",&removeChar);
		
		// Belirtilen harfi metinden kaldýrma
		removeCharacter(text,removeChar);
		
		// Sonuçlarý ekrana yazdýrma
		printf("Sectiginiz Harf Silinmis Metin: ");
		printf("%s",text);
		
	return 0;
}
