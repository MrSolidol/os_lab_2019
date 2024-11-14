#include "swap.h"

void Swap(char *left, char *right)
{
    char temp = *left;  // сохраняем значение left во временной переменной
    *left = *right;     // присваиваем left значение right
    *right = temp;      // присваиваем right сохраненное значение left
}
