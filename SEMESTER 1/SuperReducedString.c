#include <stdio.h>
#include <string.h>
int main()
{
    char str[101];
    int j = 0;
    scanf("%s", &str);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (j > 0 && str[j - 1] == str[i])
            j--;
        else
            str[j++] = str[i];
    }
    str[j] = '\0';

    if (j == 0)
    {
        strcpy(str,"Empty String");
    }
    printf("%s\n", str);

}
