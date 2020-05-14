#include<stdio.h>
#include<stdlib.h>
int main()
{    char content[100];
    FILE *fp;
    fp=NULL;
    fp=fopen("input.txt","w");
    if(fp==NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("enter the contents to the file\n");
    gets(content);
    fprintf(fp,"%s",content);
    fclose(fp);
    fp=NULL;
    fp=fopen("input.txt","r");
      if(fp==NULL)
    {
        printf("Error!");
        exit(1);
    }
    char ch;
    printf("Contents of file are:\n");
    do
    {ch=fgetc(fp);
    putchar(ch);
    }while(ch!=EOF);
    return 0;
}
