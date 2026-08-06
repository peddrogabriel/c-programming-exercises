// This program checks whether two numbers are equal or whether the sum of two numbers equals the third.
// Author: Pedro Gabriel

#include <stdio.h>

int main()
{

int A,B,C;

scanf("%d%d%d", &A, &B, &C);

if(A==B || B==C || A==C || A + B == C || A + C == B || B + C == A)
{
    printf("S");
}

else 

printf("N");

return 0;

}