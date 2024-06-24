#include <stdio.h>

int isPalindrome(char txt[]){
	
	int end;
	int start = 0;
		
		for(end=0;end!='\0';end++);
		
		end--;
	
		while(start<end){
			
			if(txt[start]!=txt[end]){
				
				return 0;
			}
			
			start++;
			end--;
		}	
		
	return 1;
}

int main(){
	
	char text[100];
	
		printf("Lutfen Metin Giriniz: ");
		scanf("%s",text);
		
		if(isPalindrome(text)){
			
			printf("Girilen Metin Palindromdur.");
		}
		else{
			printf("Girilen Metin Palindrom Degildir.");
		}
		
	return 0;
}
