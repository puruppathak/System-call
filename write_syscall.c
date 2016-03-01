#include<stdio.h>
#include<string.h>

int main()
{
FILE *file;
char *str="Hello Puru";
file=fopen("my_file.text","a");
fwrite(&str,1,sizeof(str),file);    // invoke the call
fclose(file);
return 0;
}
