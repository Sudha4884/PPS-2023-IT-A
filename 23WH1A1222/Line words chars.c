#include <stdio.h>
void main()
{
    char str[100];
    int w=0,l=0,chars=0;
    scanf("%s",&str);
    for(int i=0;str[i]!='\0';i++)
     {
         if(str[i] == ' ')
         {
              w++;
         }
         else if(str[i] == '\n')
         {
             l++;
             w++;
         }
         else if(str[i] != ' ' && str[i] != '\n'){
         chars++;
         }
     }
    if(chars > 0)
    {
        w++;
        l++;
    }
     printf("Total number of words : %d\n",w);
     printf("Total number of lines : %d\n",l);
     printf("Total number of characters : %d\n",chars);

}
