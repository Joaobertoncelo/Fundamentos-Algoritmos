#include<stdio.h>
int main(){
	int matriz[3][3], transposta[3][3], i, j;
	for(i=0; i<3; i++){
		for(j=0;j<3;j++){
			printf("digite o valor da posicao %d %d da matriz: ", i+1, j+1);
		    scanf("%d", &matriz[i][j]);
		    transposta[j][i]=matriz[i][j];
		}
	}
	printf("sua transposta eh: \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ", transposta[i][j]);
		}
		printf("\n");
	}
	return 0;
}
