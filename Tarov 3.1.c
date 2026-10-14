#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[20] = "SibSUTIS";

    printf("SIZE0F: %zu\n", sizeof(arr));
    printf("STRLEN: %zu\n", strlen(arr));
    printf("FREE_BYTES: %zu\n", sizeof(arr) - strlen(arr) - 1);

    return 0;
}