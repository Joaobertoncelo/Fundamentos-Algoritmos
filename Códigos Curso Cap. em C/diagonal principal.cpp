#include<stdio.h>
int main(){
	int i, j, M[10][10], N;
	printf("digite a razao da matriz: ");
	scanf("%d", &N);
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(i=j){
				printf("1");
			}
		}
	printf("\n");
	}
	return 0;
}
