#include <stdio.h>
#include <stdlib.h>

int main()
{
     greatings("top", 40);
     greatings("mike", 55);
     greatings("bottom", 23);

    return 0;
}
void greatings(char name[], int age){
    printf("hello %s,you are %d\n", name, age);
}

