#include <stdio.h>
#include <stdlib.h>

double calBonus(double profit);

int main(void){
	double profit;

	printf("利潤是多少?\t$");
	scanf("%lf", &profit);

	printf("bonus = $%.2lf\n", calBonus(profit));
	system("PAUSE");
	return 0;
}
	double calBonus(double profit){
	double b1, b2, b4, b6, b10, b;

	b1 = 100000*0.1;
	b2 = b1+100000*0.75;
	b4 = b2+200000*0.5;
	b6 = b4+200000*0.3;
	b10 = b6+400000*0.15;

	if(profit<=100000)
		b = profit*0.1;
	else if(profit<=200000)
		b = b1+(profit-100000)*0.075;
	else if(profit<=400000)
		b = b2+(profit-200000)*0.05;
	else if(profit<=600000)
		b = b4+(profit-400000)*0.03;
	else if(profit<=1000000)
		b = b6+(profit-600000)*0.015;
	else
		b = b10+(profit-1000000)*0.01;

	return b;

}

