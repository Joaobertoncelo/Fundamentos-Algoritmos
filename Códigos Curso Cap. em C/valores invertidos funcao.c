#include<stdio.h>
void gilberto(int a[10], int b[10], int i){
	for(i=0;i<10;i++){
		b[i]=a[9-i];
	}
}
int main(){
	int a[10], b[10], i;
	for(i=0;i<10;i++){
		printf("Digite o seu %d valor: ", i+1);
		scanf("%d", &a[i]);
	}
	gilberto(a, b, i);
	printf("\n");
	for(i=0;i<10;i++){
		printf(" %d ", b[i]);
	}
	return 0;
}
