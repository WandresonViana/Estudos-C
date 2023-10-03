#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 6;
    int *p1;

    *p1 = &a;
    *p1 = 4;

    printf("O ponteiro %d" + *p1);
    printf("Abacate");
    return 0;
}
