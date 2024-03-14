#include <stdio.h>

int main(void)
{
    int i[2] = {42, 43};
    int *p = i;

    if(p)
    {
       printf("The answer is: %d and %d\n", i[0], p[0]);
       printf("The answer is: %d and %d\n", i[1], p[1]);


       printf("The answer is: %d and %d\n", *(i + 0), *(p + 0));
       printf("The answer is: %d and %d\n", *(i + 1), *(p + 1));
    }





     return 0;
}
