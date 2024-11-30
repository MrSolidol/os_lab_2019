#include "revert_string.h"

void RevertString(char *str)
{
    int left = 0;
    int right = 0;

    // Определяем длину строки, чтобы указатель right указывал на последний символ
    while (str[right] != '\0') {
        right++;
    }
    right--; // Отнимаем 1, чтобы указать на последний символ (не на '\0')

    // Перестановка символов с помощью двух указателей
    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }
}

