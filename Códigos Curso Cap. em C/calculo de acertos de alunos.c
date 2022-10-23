#include<stdio.h>
int main(){
	char gab[10], res[10];
	int i, n, na, pont[10]={0,0,0,0,0,0,0,0,0,0};
	for(i=0;i<10;i++){
	    printf("digite a resposta da %d questao de sua prova: ", i+1);
	    scanf("%s", &gab[i]);
    }
    printf("digite o numero de alunos em sua sala: ");
    scanf("%d", &na);
    for(i=0;i<na;i++){
    	for(n=0;n<10;n++){
    		printf("digite a resposta %d do aluno %d: ", n+1, i+1);
    	    scanf("%s", &res[i]);
    	
    	    if(res[i]==gab[i]){
    		    pont[i]++;
	        }
		}    	
	}
	for(i=0;i<na;i++){
		printf("a nota do seu %d aluno eh: %d\n", i+1, pont[i]);
	}
	return 0;
}
