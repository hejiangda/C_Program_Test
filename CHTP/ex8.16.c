#include <stdio.h>
#include <string.h>

int main(){
	char s1[30];
	char s2[30];
	char *searchPtr=NULL;
	char *sPtr;
	int i=0;

	printf("Please input the text:\n\t");
	fgets(s1,30,stdin);
	sPtr=strchr(s1,'\n');
	*sPtr='\0';
	printf("Please input the string you are finding:\n\t");
	fgets(s2,30,stdin);
	sPtr=strchr(s2,'\n');
	*sPtr='\0';

	// printf("--%s--\n",s1);
	// printf("--%s--\n",s2);

	searchPtr=strstr(s1,s2);
	if (searchPtr!=NULL){
		printf("\t%s\n",searchPtr);
		searchPtr=strstr(searchPtr+1,s2);
		printf("\t%s\n",searchPtr);
	}else printf("Not Found!\n");
	return 0;
}
