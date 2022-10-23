#include<stdio.h>
int main(){
	float a, b, c, d;
	printf("Digite suas tres notas: ");
	scanf("%f %f %f", a, b, c);
	
	d=(a+a+a+b+b+b+b+c+c)/2.0;
	printf("Sua media eh: %f", d);
	return 0
}
