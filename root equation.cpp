#include <stdio.h>
#include <math.h>

int main(){
	
	float a, b, c;
	float x1, x2;
	float delta;
	
		// Kullanıcıdan denklem katsayılarını alma
		printf("ax^2 + bx + c seklindeki denklemin \n");
	
		printf("a'sini giriniz: ");
		scanf("%f", &a);
	
		printf("b'sini giriniz: ");
		scanf("%f", &b);
		
		printf("c'sini giriniz: ");
		scanf("%f", &c);
	
	// Delta hesaplaması
	delta = (b * b) - (4 * a * c);
	
	// Kökleri bulma	
	x1 = (-b + (sqrt(delta))) / 2*a;
	x2 = (-b - (sqrt(delta))) / 2*a;
		
		// Sonuçları ekrana yazdırma
		printf("Denklemin Kokleri %.2f ve %.2f 'dir", x1, x2);
	
	return 0;
}
