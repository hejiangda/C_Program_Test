#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 输入英文 数字
// 输出密文

int main(int argc, char const *argv[])
{
  FILE *infPtr;
  FILE *outfPtr;
  int key;
  int choice;
  char c;
  // 输入文件
  // 输入密钥
  printf("Enter 0 to copy plaintext to plaintext.txt \nand output ciphertext to ciphertext.txt\n");
  printf("Enter 1 to encipher from plaintext.txt\n");
  printf("Enter 2 to decipher from ciphertext.txt\n");
  scanf("%d",&choice );
  getchar();
  if(choice==0)
  {
    printf("Enter key:");
    scanf("%d",&key );
    getchar();
    if((infPtr=fopen("plaintext.txt","w+"))==NULL)
    {
      puts("File could not be opened!");
      exit(0);
    }
    else
    {
      c=getchar();

      while(c!='\n')
      {
        fputc(c,infPtr);
        c=getchar();
      }
      rewind(infPtr);
    }
    // 输出文件

    if((outfPtr=fopen("ciphertext.txt","w+"))==NULL)
    {
      puts("File could not be opened!");
      exit(0);
    }
    else
    {
      c=fgetc(infPtr);
      if(c==' ')
      {

      }
      else
      if(c+key-'z'>=0)
      {
        c='a'+(c+key-'z'-1);
      }else(c+=key);
      while (!feof(infPtr))
      {
        printf("%c",c );
        fprintf(outfPtr,"%c",c );
        c=fgetc(infPtr);
        if(c==' ')
        {

        }
        else
        if(c+key-'z'>=0)
        {
          c='a'+(c+key-'z'-1);
        }else(c+=key);
      }
    }
    fclose(outfPtr);
    fclose(infPtr);
    puts("");
  }
  else if(choice==1)
  {

    printf("Enter key:");
    scanf("%d",&key );
    getchar();
    if((infPtr=fopen("plaintext.txt","r+"))==NULL)
    {
      puts("File could not be opened!");
      exit(0);
    }
    // 输出文件
    printf("%s\n","Output:" );
    if((outfPtr=fopen("ciphertext.txt","w+"))==NULL)
    {
      puts("File could not be opened!");
      exit(0);
    }
    else
    {
      c=fgetc(infPtr);
      if(c==' ')
      {

      }
      else
      if(c+key-'z'>=0)
      {
        c='a'+(c+key-'z'-1);
      }else(c+=key);

      while (!feof(infPtr))
      {
        printf("%c",c );
        fprintf(outfPtr,"%c",c );

        c=fgetc(infPtr);
        if(c==' ')
        {

        }
        else
        if(c+key-'z'>=0)
        {
          c='a'+(c+key-'z'-1);
        }else(c+=key);
      }
    }
    puts("");
    fclose(outfPtr);
    fclose(infPtr);
  }
  else if(choice==2)
  {
    printf("Enter key:");
    scanf("%d",&key );
    getchar();

    if((infPtr=fopen("ciphertext.txt","r+"))==NULL)
    {
      puts("File could not be opened!");
      exit(0);
    }
    // 输出文件
    printf("%s\n","Output:" );
    if((outfPtr=fopen("plaintext.txt","w+"))==NULL)
    {
      puts("File could not be opened!");
      exit(0);
    }
    else
    {
      c=fgetc(infPtr);
      if(c==' ')
      {

      }
      else if('a'-(c-key)>0)
      {
        c='z'+('a'-(c-key)-1);
      }else(c-=key);


      while (!feof(infPtr))
      {
        printf("%c",c );
        fprintf(outfPtr,"%c",c );

        c=fgetc(infPtr);
        if(c==' ')
        {

        }
        else if('a'-(c-key)>0)
        {
          c='z'+('a'-(c-key)-1);
        }else(c-=key);

      }
    }
    puts("");
    fclose(outfPtr);
    fclose(infPtr);
  }
  return 0;
}
