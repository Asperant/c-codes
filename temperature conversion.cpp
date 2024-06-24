#include <stdio.h>

double c_to_f(double celsius) {
    
	return (celsius * 9 / 5) + 32;
}

double f_to_c(double fahrenheit) {
    
	return (fahrenheit - 32) * 5 / 9;
}


int main(){
	
	double temperature;
	char unit;
	
		printf("Sicaklik ve Birim Giriniz(C/F): ");
		scanf("%lf %c",&temperature,&unit);
		
		if(unit == 'C' || unit == 'c'){
			
			printf("%.2f Celcius %.2f Fahrenheit'a esittir",temperature,c_to_f(temperature));
		}
		else if(unit == 'F' || unit == 'f'){
			
			printf("%.2f Fahrenheit %.2f Celcius'a esittir",temperature,f_to_c(temperature));	
		}
		else{
			
			printf("Gecersiz Birim Girdiniz");	
		}
	
	
	return 0;
}
