#include<stdio.h>
#include<string.h>
int main(){
	char s[30];
	int i, v, If;
	printf("Fala uma frase ai: ");
	gets(s);
	i=strlen(s);
	for(If=0;If<i;If++){
	    if(s[If]==' '){
	    	v++;
		}	
	}
	v++;
	printf("\nVc tem %d palavras mucho lokas\n", v);
	return 0;
}
