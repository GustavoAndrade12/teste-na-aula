#include <stdio.h>
int main()
{  
int A = 22;
int B = 7;

printf("A + B * A = %d\n", A+B*A);
printf("B * A + B = %d\n", B*A+B);  
printf("A DIV B   = %d\n",  A/B );  
printf("B MOD A   = %d\n",  B%A );
printf("B - A / B = %d\n", B-A/B);
printf("A / B - A = %d\n", A/B-A);
printf("10 + A MOD B = %d\n", 10+A%B);
printf("B DIV A - 50 = %d\n", B/A-50);
printf("A + B MOD A - A DIV B * 2 = %d\n", A+B%A-A/B*2);
printf("A * (B + A) - (A - B) / 2 = %d\n", A*(B+A)-(A-B)/2);
}