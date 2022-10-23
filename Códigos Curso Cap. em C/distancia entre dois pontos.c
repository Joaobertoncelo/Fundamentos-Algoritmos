#include<stdio.h>
#include<math.h>
typedef struct{
	int x;
	int y;
}ponto;
int main(){
	int i;
	double d;
	ponto pontos[2];
	for(i=0;i<2;i++){
		printf ("Digite Seu %d Valor de x: ", i+1);
		scanf("%d", &pontos[i].x);
	}
	for(i=0;i<2;i++){
		printf ("Digite Seu %d Valor de y: ", i+1);
		scanf("%d", &pontos[i].y);
	}
	d=sqrt(pow(pontos[0].x-pontos[0].y,2)+pow(pontos[1].x-pontos[1].y,2));
	printf("A distancia entre os pontos eh: %.2lf\n", d);
	return 0;
}
