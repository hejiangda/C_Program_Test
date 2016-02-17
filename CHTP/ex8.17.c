#include <stdio.h>
#include <string.h>

#define line 100

int main(){
	char s1[line]={"hello"};
	char s2[line]={"j"};
	char *searchPtr=NULL;
	char *tmpPtr=NULL;
	int i=0;


	printf("Please input the text:\n\t");
	fgets(s1,line,stdin);
	tmpPtr=strchr(s1,'\n');
	*tmpPtr='\0';
	printf("Please input the string you are finding:\n\t");
	fgets(s2,line,stdin);
	tmpPtr=strchr(s2,'\n');
	*tmpPtr='\0';

	if(strstr(s1,s2)!=NULL){
		searchPtr=strstr(s1,s2);
		++i;
	//	printf("***%s***\n",searchPtr);//debug
		while(strstr(searchPtr+1,s2)!=NULL){
			searchPtr=strstr(searchPtr+1,s2);
	//		printf("***%s***\n",searchPtr);//debug
			++i;
		}
	}
	printf("The numbers of the string you found is :%d\n",i);


	return 0;
}
