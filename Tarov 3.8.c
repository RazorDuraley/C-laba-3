#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");

    const char    *narrow = "Сбой матрицы";
    const wchar_t *wide   = L"Сбой матрицы";

    printf("char -> sizeof: %zu bytes, strlen: %zu chars\n",
           sizeof("Сбой матрицы"), strlen(narrow));
    printf("wchar -> sizeof: %zu bytes, wcslen: %zu chars\n",
           sizeof(L"Сбой матрицы"), wcslen(wide));

    return 0;
}