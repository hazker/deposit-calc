#include <stdio.h>
#include "deposit.h"
#include "deposit.cpp"

int main(){
float d,s,c;
	printf("Vvedit summu vklada(v tisachah)-\n");
	scanf("%f",&s);
	printf("Vvedite srok(v dnyah)-\n");
	scanf("%f",&c);
	Check(s,c);
	Cash(d,s,c);
	return 0;
}
