#include <stdio.h>

// Belirtilen karakteri bir dizeden kaldıran fonksiyon
void removeCharacter(char *str,char ch){
	
	// Kaynak ve hedef işaretçileri
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
		
		// Yeni sonlandırıcı karakteri ekle
		*dst = '\0';
}


int main(){
	
	char text[1000];
	char removeChar;
		
		// Kullanıcıdan metni alma
		printf("Lutfen Metin Giriniz: ");
		gets(text);
		
		// Kullanıcıdan silinecek harfi alma
		printf("Lutfen Silinecek Harfi Seciniz: ");
		scanf("%c",&removeChar);
		
		// Belirtilen harfi metinden kaldırma
		removeCharacter(text,removeChar);
		
		// Sonuçları ekrana yazdırma
		printf("Sectiginiz Harf Silinmis Metin: ");
		printf("%s",text);
		
	return 0;
}
