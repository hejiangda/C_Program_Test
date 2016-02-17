#include <stdio.h>
#include <string.h>

#define line 100

int main(){
	char s1[line]={"hello"};
	char *searchPtr=NULL;
	char *tmpPtr=NULL;
	int i=0;


	printf("Please input the text:\n\t");
	fgets(s1,line,stdin);
	tmpPtr=strchr(s1,'\n');
	*tmpPtr='\0';

	if(strtok(s1," ")!=NULL){
		++i;
		while(strtok(NULL," ")!=NULL){
			++i;
		}
	}
	printf("The numbers of the words in your sentence is :%d\n",i);


	return 0;
}
