#include<stdio.h>
int main(){
	int i, x[10]={0,0,0,0,0,0,0,0,0,0}, MV, CT;
	printf("Digite seu 1 valor inteiro: ");
	scanf("%d", &MV);
	for(i=0;i<9;i++){
		printf("Digite seu %d valor inteiro: ", i+2);
		scanf("%d", &x[i]);
		if(x[i]<MV){
			MV=x[i];
			CT=i+2;
		}
	}
	printf("\nO menor valor eh: %d\n", MV);
	printf("Ele fica na posicao: %d\n", CT);
	return 0;
}
