#include<stdio.h>
#include<stdlib.h>
int main(){
	float n[5], media=0;
	int i;
	for(i=0;i<5;i++){
		printf("insiraa a nota do aluno %d\n", i+1);
		scanf("%f", &n[i]);
		media=media+n[i];
	}
	printf("a media de turma eh: %.1f\n", media/5);
	return 0;
}
