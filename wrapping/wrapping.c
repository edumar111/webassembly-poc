#include <stdio.h>
#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
int sumNums(int a, int b)
{
    return a + b;
}

EMSCRIPTEN_KEEPALIVE
int subtractNums(int a, int b)
{
    return a - b;
}
EMSCRIPTEN_KEEPALIVE
int main() 
{
    printf("Hello Wrapping sum %d\n", sumNums(5,8));

    return 0;
}