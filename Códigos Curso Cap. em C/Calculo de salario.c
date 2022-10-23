#include<stdio.h>
int main(){
	float S, CS;
	printf("Insira seu salario: ");
	scanf("%f", &S);
	if((S<2000.0)&&(S>0.0)){
		CS=S+(S*(30.0/100.0));
		printf("Seu novo salario eh: %.2f", CS);
	}else{
		CS=S+(S*(15.0/100.0));
		printf("Seu novo salario eh: %.2f", CS);
	}
}
