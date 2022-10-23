#include<stdio.h>
#include<string.h>
int main(){
	char s[30];
	int i, v, If;
	printf("Fala uma palavra ai: ");
	scanf("%s", &s);
	i=strlen(s);
	for(If=0;If<i;If++){
	    if(s[If]=='a'||s[If]=='e'||s[If]=='i'||s[If]=='o'||s[If]=='u'){
	    	v++;
		}	
	}
	printf("\nVc tem %d vogais\n", v);
	return 0;
}
