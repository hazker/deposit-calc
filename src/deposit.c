#include <stdio.h>
#include "deposit.h"


int Check(int s, int c){
	if(s<10 || c>365 || c<0){
	printf("Wrong, TRY AGAIN \n");
	return 1;
}
return 0;
}

float Cash(float d,int s, int c){
	if(s<101){
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
		return d;
}
