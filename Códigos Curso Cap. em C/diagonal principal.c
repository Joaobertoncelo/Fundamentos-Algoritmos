#include<stdio.h>
int main(){
	int i, j, M[10][10], N;
	do{
		printf("digite a razao da matriz(entre 1 e 10): ");
	    scanf("%d", &N);
	    if(N>10||N<1){
	    	printf("\nEu falei entre 1 e 10 animal, ve se digita certo agora: \n\n");
		}
	}while(N>10||N<1);
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(i==j){
				printf("1 ");
			}else{
				printf("0 ");
			}
		}
	printf("\n");
	}
	return 0;
}
