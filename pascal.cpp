#include <stdio.h>

// Fakt�riyel hesaplayan fonksiyon
int fact(int num){
	
	if(num==0||num==1){
		
		return 1;
	}
	else{
		
		return num * fact(num-1);
	}	
}

int main(){
	
	int line;
	
		printf("Kacinci Satira Kadar Gormek Istersiniz: ");
		scanf("%d",&line);
			
		for(int i=0;i<line;i++){
			
			// Bo�luklar� ekle
			for(int k=0;k<line-i-1;k++){
				
				printf("  ");
			}
			
			// Katsay�lar� ekle
			for(int j=0;j<=i;j++){
				
				// Pascal ��geni form�l�: C(n, k) = n! / (k! * (n-k)!)
				int coef = fact(i) / (fact(j) * fact(i-j));
				printf("%4d",coef);
				
			}
			
			printf("\n");
		}
	
	return 0;
}