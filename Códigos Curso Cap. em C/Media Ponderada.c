#include<stdio.h>
int main(){
	float a, b, c, d;
	printf("Digite sua nota 1: ");
	scanf("%f", &a);
	printf("Digite sua nota 2: ");
	scanf("%f", &b);
	printf("Digite sua nota 3: ");
	scanf("%f", &c);
	d=(a+a+a+b+b+b+b+c+c)/9.0;
	printf("\n\nSua media eh: %.2f\n", d);
	return 0;
}
