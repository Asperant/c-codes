#include <stdio.h>
#include <stdlib.h>

void rightRotatedShift(char* text,int shift){
	
	int len;
	for(len=0;text[len]!='\0';len++);
	
		for(int i=0;i<shift;i++){
			int temp = text[len-1];
			
			for(int j=len-1;j>0;j--){
				text[j] = text[j-1];
			}
			text[0] = temp;
		}
}

int main(){
	
	char* text = (char*)malloc(sizeof(char));
	int size = 0;
	int capacity = 1;
	char letter;
	int shift;
	
		printf("Lutfen metin girin: ");
		while((letter = getchar()) != '\n'){
			if(size>=capacity-1){
				capacity *= 2;
				text = (char*)realloc(text,sizeof(char)*capacity);
			}
			text[size] = letter;
			size++;
		}
		text[size] = '\0';
		
		printf("Kac kere kaydirilacagini giriniz: ");
		scanf("%d",&shift);
		
		rightRotatedShift(text,shift);
		
		printf("Kaydirilmis metin: %s",text);
	free(text);	
	
	return 0;
}
