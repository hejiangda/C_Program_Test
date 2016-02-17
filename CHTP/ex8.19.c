#include <stdio.h>
#include <string.h>

#define line 100

int main(){
	char s1[line]={"hello"};
	char s2;
	char *searchPtr=NULL;
	char *tmpPtr=NULL;
	int i=0;
  int j=0;
  int num[52]={0};
  char abc[52];

  for(i=0;i<52;i++){
    if(i<26){
      abc[i]='a'+i;

    }else abc[i]='A'+i-26;
//    printf ("%c",abc[i]);
  }
i=0;
	printf("Please input the text:\n\t");
	fgets(s1,line,stdin);
	tmpPtr=strchr(s1,'\n');
	*tmpPtr='\0';

  for(i=0;i<52;i++){
    if(strchr(s1,abc[i])!=NULL){
  		searchPtr=strchr(s1,abc[i]);
  		++num[i];
  		while(strchr(searchPtr+1,abc[i])!=NULL){
  			searchPtr=strchr(searchPtr+1,abc[i]);
  			++num[i];
  		}
  	}
  }

	printf("The numbers of the abc in your sentence are :\n");
for(i=0;i<52;i++){
  if(num[i]!=0){
    printf("\t%c\t%d\n",abc[i],num[i]);
  }
}

	return 0;
}
