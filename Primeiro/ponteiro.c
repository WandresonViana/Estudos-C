#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a = 6;
    int *p1 = NULL;
    int *p2;
    p1 = &a;
    p2 = p1;
    *p2 = 8;
    

    printf("%d \n", *p1);
    printf("%d \n", *p2);
    
    return 0;
}
