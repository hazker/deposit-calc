#include <stdio.h>

void Check(int s, int c);
float Cash(float d,int s, int c);

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


void Check(int s, int c){
	if(s<10 || c>365){
	printf("Wrong, TRY AGAIN \n");
	main();
}
}

float Cash(float d,int s, int c){
	if(s<100){
		if (c>30 && c<121){
			d=s*1.02;
		}
		if(c>120 && c<241){
			d=s*1.06;
		}
		if(c<31){
			d=s*0.9;
		}
		if(c<365 && c>240){
			d=s*1.12;
		}
	}
	if(s>100){
		if(c<31){
			d=s*0.9;
		}
		if(c>30 && c<121){
			d=s*1.03;
		}
		if(c>120 && c<241){
			d=s*1.08;
		}
		if(c>240 && c<365){
			d=s*1.15;
		}
	}
	printf("DOXOD= %f",d);
		return 0;
}
