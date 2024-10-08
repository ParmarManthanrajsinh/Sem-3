// Algorithm counts the length of the given string.

#include <stdio.h>

int STRLEN(char str[])
{
    int c = 0;

    while (str[c] != '\0')
    {
        c++;
    }
    return c;
}

// Algorithm: TOLOWER

void TOLOWER(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    str[i] = '\0';
}

// Algorithm: STR_CAT not using third string

// void STR_CAT(char str1[], char str2[])
// {
//     int i = 0, j = 0;
//     while (str1[i] != '\0')
//     {
//         i++;
//     }
//     while (str2[j] != '\0')
//     {
//         str1[i] = str2[j];
//         j++;
//         i++;
//     }
//     str1[i] = '\0';
// }

// Algorithm: STR_CAT using third string

void STR_CAT(char str1[], char str2[], char str3[])
{
    int i = 0, j = 0, k = 0;
    while (str1[i] != '\0')
    {
        str3[k] = str1[i];
        i++;
        k++;
    }
    while (str2[j] != '\0')
    {
        str3[k] = str2[j];
        j++;
        k++;
    }
    str3[k] = '\0';
}

int main()
{
    char str1[100], str2[100], str3[100];

    printf("Enter a string: ");
    scanf("%s", str1);
    printf("Enter another string: ");
    scanf("%s", str2);
    printf("The length of the string is: %d\n", STRLEN(str1));
    TOLOWER(str1);
    printf("To lower %s\n", str1);

    STR_CAT(str1, str2, str3);
    printf("Concatenates two strings str1 and str2 : %s", str3);

    return 0;
}