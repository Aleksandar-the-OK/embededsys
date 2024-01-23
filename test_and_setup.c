#include <stdio.h>
#include <cstring>

int main(int argc, char const *argv[])
{
    if (argc <= 1 || argc > 2)
    {
        printf("for more information on how to use this program use argument -h\n");
    }
    else if (strcmp(argv[1], "-h") == 0)
    {
        printf("to use this program input a name as your argument\n");
    }
    else
    {
        char const *name = argv[1];

        printf("hello world! - I'm %s \n", name);
    }

    return 0;
}
