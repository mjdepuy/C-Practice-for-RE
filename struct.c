#include <stdio.h>
#include <stdlib.h>

struct OBJ{
    int i;
    char *j;
};

int main(int argc, char **argv){
    struct OBJ a;
    a.i = 109;
    a.j = (char *)malloc(sizeof(char)*32);
    a.j = "Test string!";
    
    printf("Printing struct member values...\n");
    printf("a.i = %d\n",a.i);
    printf("a.j = '%s'\n",a.j);
    return 0;
}