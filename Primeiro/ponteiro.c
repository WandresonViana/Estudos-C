#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    int *p1;

    *p1 = &a;

    printf("O ponteiro %d" + *p1);
    printf("Abacate");
    return 0;
}
