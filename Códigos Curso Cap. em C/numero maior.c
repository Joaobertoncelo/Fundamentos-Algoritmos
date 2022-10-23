#include<stdio.h>
int main(){
	int A, B;
    printf("Digite um numero: ");
    scanf("%d", &A);
    printf("Digite outro numero: ");
    scanf("%d", &B);
    
    if (A>B){
    	printf("\nO Primeiro eh maior\n");
	}else if(B>A){
		printf("\nO Segundo eh maior\n");
	}else{
		printf("\nEu falei pra digitar outro numero man, nao o mesmo\n");
	}
	return 0;
}
