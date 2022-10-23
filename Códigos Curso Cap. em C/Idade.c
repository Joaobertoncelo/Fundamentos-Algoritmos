#include<stdio.h>
int main(){
	int AN, AA, IA, IM, ID, IS;
	printf("Digite o ano em que voce nasceu: ");
	scanf("%d", &AN);
	printf("Digite o ano atual: ");
	scanf("%d", &AA);
	
	IA=AA-AN;
	IM=IA*12;
	ID=IA*365;
	IS=IA*52;
	
	printf("\n\nSua idade em anos eh: %d\n", IA);
	printf("Sua idade em meses eh: %d\n", IM);
	printf("Sua idade em semanas eh: %d\n", IS);
	printf("Sua idade em dias eh: %d\n", ID);
	return 0;
}
