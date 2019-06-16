#include <stdio.h>
#include <stdlib.h>

struct OBJ{
    int i;
    char j[32];
}

int main(int argc, char **argv){
    struct OBJ a;
    a.i = 109;
    a.j = "Struct test string!\n";

    printf("Printing struct member values...\n");
    printf("a.i = %d\n",a.i);
    printf("a.j = '%s'\n",a.j);
    return 0;
}