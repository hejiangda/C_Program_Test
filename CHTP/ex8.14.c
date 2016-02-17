#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s1[30];
    char *tmp;
    char s2[30]={0};
    int num1;
    long num2;
    int i=0;
    scanf("%[^\n]",s1);
    tmp=strtok(s1,")");
    while(tmp!='\0'){
        if(0==i){
            num1=atoi(tmp+1);
        }

        if(i>=1){
            strcat(s2,tmp);
        }
        i++;
        //printf("%s***\n",s2);
        tmp=strtok(NULL,"-");
    }
    // printf("%s***",s2);
    num2=atol(s2);
    printf("%d%s%ld",num1,"    ",num2);
    //printf("Hello world!\n");
    return 0;
}
