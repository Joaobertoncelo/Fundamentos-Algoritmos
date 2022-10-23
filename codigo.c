#include<stdio.h>
int main(){
	FILE *file;
	file = fopen("jose.txt", "w");
	if(file == NULL){
		printf("Nao foi possivel abrir o arquivo");
		return 0;
	}
	fprintf(file, "\nfelicia");
	fclose(file);
	
	return 0;
}
