#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char c,i;
    c=getchar();
    int (*f[13])(int)={isdigit,isalpha,isalnum,isxdigit,islower,isupper,tolower,toupper,isspace,iscntrl,ispunct,isprint,isgraph};
    char *cf[13]={"isdigit","isalpha","isalnum","isxdigit","islower","isupper","tolower","toupper","isspace","iscntrl","ispunct","isprint","isgraph"};
    for(i=0;i<13;i++){
        printf("%-10s=%7d\n",cf[i],(*f[i])(c));
    }

    return 0;
}
