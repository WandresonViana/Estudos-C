#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a = 6;
    int *p1 = NULL;
    int *p2;
    p1 = &a;
    p2 = p1;
    

    printf("%p \n", *p1);
    printf("%d \n",*p2);
    printf("Abacate");
    return 0;
}
