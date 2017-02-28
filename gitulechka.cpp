#include <iostream>
#include <stdio.h>

void Check(int s, int c);

int main(){
float d,s,c;
	printf("Vvedit summu vklada(v tisachah)-\n");
	scanf("%f",&s);
	printf("Vvedite srok(v dnyah)-\n");
	scanf("%f",&c);
	Check(s,c);
	return 0;
}


void Check(int s, int c){
	if(s<10 || c>365){
	printf("Wrong, TRY AGAIN \n");
	main();
}
}