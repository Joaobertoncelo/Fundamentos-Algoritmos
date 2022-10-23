#include <stdio.h>
int main(){
	int x,y,a,b,c;
	float d;
	printf("informe o valor de x: ");
	scanf("%d",&x);
	printf("informe o valor de y: ");
	scanf("%d",&y);
	
	a=x+y;
	b=x-y;
	c=x*y;
	d=x/y;
	
	printf("o resultado de x+y eh: %d\n",a);
	printf("o resultado de x-y eh: %d\n",b);
	printf("o resultado de x*y eh: %d\n",c);
	printf("o resultado de x/y eh: %f\n",d);
	return 0;
}
