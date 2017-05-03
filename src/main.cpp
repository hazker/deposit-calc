#include <stdio.h>
#include "deposit.h"
#include "deposit.cpp"

int main(){
float d=0;
int s,c,p=1;
while(p==1){
	printf("Vvedit summu vklada(v tisachah)-\n");
	scanf("%d",&s);
	printf("Vvedite srok(v dnyah)-\n");
	scanf("%d",&c);
	p=Check(s,c);
}
	d=Cash(d,s,c);
	printf("Doxod=%f",d);
	return 0;
}
