#include <stdio.h>
int main(){
	int var1=3;
	int var2=8;
	int var3=5;
	int var4=9;
	float var5=10;
	printf(" 1 %d\n 2 %d\n 3 %d\n 4 %d\n 5 %f\n\n",var1,var2,var3,var4,var5);
	var3=var1+var2;
	printf(" 1 %d\n 2 %d\n 3 %d\n 4 %d\n 5 %f\n\n",var1,var2,var3,var4,var5);
	var4=var5+var3;
	printf(" 1 %d\n 2 %d\n 3 %d\n 4 %d\n 5 %f\n\n",var1,var2,var3,var4,var5);
	var2=var3/var5;	
	printf(" 1 %d\n 2 %d\n 3 %d\n 4 %d\n 5 %f\n\n",var1,var2,var3,var4,var5);
	return 0;
}

