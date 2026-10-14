#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");

    wchar_t m1[100], m2[100], m3[100];

    wprintf(L"Введите три модуля: ");
    wscanf(L"%ls %ls %ls", m1, m2, m3);

    wprintf(L"%-15ls | %20ls | %.5ls\n", m1, m2, m3);

    return 0;
}