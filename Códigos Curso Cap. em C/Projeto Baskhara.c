#include <stdio.h>
#include <math.h>
int main(){
	float a, b, c;
	float u, y, z, x;
	float r, h;
	printf("insira sua variavel 'a': ");
	scanf("%f",&a);
	printf("insira sua variavel 'b': ");
	scanf("%f",&b);
	printf("insira sua variavel 'c': ");
	scanf("%f",&c);
	z=b*b;
	y=4*a*c;
	u=z-y;
	
	printf("\n\n%f\n\n", z);
	printf("%f\n\n", y);
	printf("%f\n\n", u);
	
	printf("\nseu delta eh: %f\n\n",u);
	
	r=(int)sqrt( u );
	printf("%f\n\n",r);
	x=(-b+r)/2*a;
	h=(-b-r)/2*a;
	
	printf("seu 'x+' eh: %f\n\n", x);
	printf("seu 'x-' eh: %f\n\n", h);
	return 0;
}
