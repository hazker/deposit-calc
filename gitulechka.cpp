#include <iostream>
#include <stdio.h>

int main(){
float d,s,c;
	printf("Vvedit summu vklada ");
	scanf("%f",&s);
	printf("Vvedite srok");
	scanf("%f",&c);
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
	return 0;
}
