#include "min_count.h"

int count_min_elements(FILE *f)
{
    int min_val;
    int current;
    int count = 0;

    /* Считываем первое число и принимаем его за начальный минимум */
    if (fscanf(f, "%d", &min_val) != 1)
    {
        printf("File is empty\n");
        return 0;
    }

    /* Первое число встретилось 1 раз */
    count = 1;

    /* Читаем оставшиеся числа из файла */
    while (fscanf(f, "%d", &current) == 1)
    {
        if (current < min_val)
        {
            /* Нашли новый минимум — обновляем min_val и сбрасываем счётчик */
            min_val = current;
            count = 1;
        }
        else if (current == min_val)
        {
            /* Наткнулись на число, равное текущему минимуму */
            count++;
        }
    }

    return count;
}