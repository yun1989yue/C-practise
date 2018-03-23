
#include <stdio.h>
#include <string.h>

int main()
{
    char output[256];
    char ori[256] = "Hello, just for test!";

    memset(output, 0, 256);

    sprintf(output, "The ori sentense is %s\n", ori);
    printf("%s", output);
}
