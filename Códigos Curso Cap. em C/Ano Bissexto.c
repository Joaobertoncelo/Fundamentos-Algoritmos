#include<stdio.h>
int main(){
	int A, B, C, D;
	printf("Digite o ano a ser conferido: ");
	scanf("%d", &A);
	
	B=A%4;
	C=A%100;
	D=A%400;
	
	if ((B==0)&&(C!=0)||(D==0)){
		printf("\n\nSeu ano eh bissexto\n\n");
	}else{
		printf("\n\nVoce ta num ano normal\n\n");
	}
	return 0;
}
