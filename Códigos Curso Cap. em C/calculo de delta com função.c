#include<stdio.h>
#include<math.h>
double delta(int a, int b, int c){
	double delta;
	delta=pow(b,2);
	delta=delta-(4*a*c);
	return delta;
}
int main(){
    double a, b, c, d;
	printf("Digite suas variáveis 'a', 'b' e 'c': ");
	scanf("%lf %lf %lf", &a, &b, &c);
	d=delta(a,b,c);
	printf("seu delta eh: %.2lf", d);
	return 0;
}
