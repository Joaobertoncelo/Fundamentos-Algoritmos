#include<stdio.h>
void omaior(int a, int b){
	if(a>b){
		printf("\nAstolfo eh maior\n");
	}else if(b>a){
		printf("\nEugenio eh maior\n");
	}else{
		printf("\nO Astolfo eh igual o Eugenio\n");
	}
}
int main(){
	int a, b;
	printf("Digite o Astolfo: ");
	scanf("%d", &a);
	printf("Digite o Eugenio: ");
	scanf("%d", &b);
	omaior(a,b);
	return 0;
}
