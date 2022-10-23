#include<stdio.h>
int main(){
	int X, Y, Z;
	float S;
	printf("Insira um numero inteiro X: ");
	scanf("%d", &X);
	printf("insira um numero inteiro Y: ");
	scanf("%d", &Y);
	printf("Qual operacao deseja realizar?\n\nSoma-1\nSubtracao-2\nDivisao-3\nMultiplicacao-4 \n");
	scanf("%d", &Z);
	
	switch(Z){
		case 1:
			S=X+Y;
			printf("\nA soma eh: %.2f\n", S);
			break;
		case 2:
			S=X-Y;
			printf("\nA subtracao eh: %.2f\n", S);
			break;
		case 3:
			S=X/Y;
			printf("\nA divisao eh: %.2f\n", S);
			break;
		case 4:
			S=X*Y;
			printf("\nA multiplicacao eh: %.2f\n", S);
			break;
		default:
			printf("\nEu por acaso falei que tinha essa opcao???\n");
	}	
	return 0;
}
