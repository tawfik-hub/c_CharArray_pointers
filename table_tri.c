/*
Ecrire un programme C qui remplit un tableau d’entiers et calcule la somme
 de ses éléments en utilisant un pointeur pour son parcours.
*/
#include <stdio.h>
#include<stdlib.h>
#include <string.h>
void delay(unsigned int _d);
int main()
{
    char arr[100]="t";
    char *tmp;
    char *ptr = arr;
    int i=0;
    //*ptr = arr;
    printf("plz put the element you want if you finished plz put 'end' \n ");
    while (i<5)
    {
       printf("plz put a variable of %d \n ",i);
       scanf("%c",ptr);
       //*ptr=tmp;
       getchar(); // very important to get the char !!! because the char entred and enter keyboard will give 2 char so we have to put getchar to escape the '\n' ==enter key
       printf("the size is  %d  \n ",strlen(arr));
       i++;
       ptr++;
    }
    printf("%s",arr);
    return 0;
}

