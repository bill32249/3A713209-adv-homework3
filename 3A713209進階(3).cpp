#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void){
long int i;
int b1,b2,b4,b6,b10,b;
printf("請輸入利潤為：");
scanf("%ld",&i);

b1=100000*0.1;
b2=b1+100000*0.075;
b4=b2+200000*0.05;
b6=b4+200000*0.03;
b10=b6+400000*0.015;

  if (i<100000)
    b=i*0.1;
  else if(i<=200000)
        b=b1+(i-100000)*0.075;
        else if(i<=400000)
            b=b2+(i-200000)*0.05;
            else if(i<=600000)
                b=b4+(i-400000)*0.03;
                else if(i<=1000000)
                    b=b6+(i-600000)*0.015;
                    else
                        b=b10+(i-1000000)*0.01;

printf("獎金=%d\n",b);

system("pause");
return 0;
}

