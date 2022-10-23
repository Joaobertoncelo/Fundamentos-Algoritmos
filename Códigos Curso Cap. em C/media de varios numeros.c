#include<stdio.h>
int main(){
	int i, s=0, t, r;
	printf("insira seu numero: ");
	scanf("%d", &i);
	do{
		s=s+i;
		printf("Insira outro numero: ");
		scanf("%d", &i);
		t++;
	}while(i!=0);
	r=s/--t;
	printf("Sua media eh: %d", r);
	return 0;
}
