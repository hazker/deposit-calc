#include <stdio.h>
#include "deposit.h"
//#include "deposit.cpp"

int main(){
float d=0;
int s,c;
	printf("Vvedit summu vklada(v tisachah)-\n");
	scanf("%d",&s);
	printf("Vvedite srok(v dnyah)-\n");
	scanf("%d",&c);
	Check(s,c);
	Cash(d,s,c);
	return 0;
}
