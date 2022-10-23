#include<stdio.h>
#include<string.h>
int main(){
	char s1[30], s2[30];
	int r;
	printf("fala uma palavra ai: ");
	scanf("%s", &s1);
	printf("agora fala outra: ");
	scanf("%s", &s2);
	r=strcmp(s1,s2);
	if(r==0){
		printf("\n duas palavras iguais\n");
	}else{
		printf("\n duas palavras diferentonas\n");
	}
	return 0;
}
