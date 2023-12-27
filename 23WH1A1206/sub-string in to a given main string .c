#include <stdio.h>
#include <string.h>

void insertSubstring(char *mainString, char *subString, int position) 
{
    int mainLength = strlen(mainString);
    int subLength = strlen(subString);

    for (int i = mainLength; i >= position; i--) 
    {
        mainString[i + subLength] = mainString[i];
    }

    for (int i = 0; i < subLength; i++) 
    {
        mainString[position + i] = subString[i];
    }
}

int main()
{
    char mainString[100], subString[100];
    int position;

    printf("Enter the main string: ");
    scanf("%s", mainString);

    printf("Enter the sub-string to insert: ");
    scanf("%s", subString);

    printf("Enter the position to insert: ");
    scanf("%d", &position);

    if (position < 0 || position > strlen(mainString)) 
    {
        printf("Invalid position. Position should be within the length of the main string.\n");
        return 1;
    }

    insertSubstring(mainString, subString, position);
    printf("Modified string after insertion: %s\n", mainString);

    return 0;
}
