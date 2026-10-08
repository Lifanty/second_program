#include <stdio.h>
#include "min_count.h"

int main(void)
{
    FILE *f = fopen("numbers.txt", "r");
    if (f == NULL)
    {
        printf("File error\n");
        return -1;
    }
    else
    {
        int result = count_min_elements(f);
        printf("Count of min elements: %d\n", result);

        fclose(f);
        return 0;
    }
}