#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *file;
    char word[35];
    int index=0;
    char ch;
    file=fopen("Demo.txt","r");
    if(file==NULL)
    {
        printf("ERROR:file does not exist.");
        return 1;
    }
    printf("Reversed word:\n");
    while((ch=getc(file))!=EOF)
    {
        if(ch==' '||ch=='\n')
        {
            for(int i=index-1;i>=0;i--)
            {
                putc(word[i],stdout);
            }
            putc('\n',stdout);
            index=0;
        }
        else
        {
            word[index++]=ch;
        }
    }
    if(index>0)
    {
        for(int i=index-1;i>=0;i--)
        {
            putc(word[i],stdout);
        }
        putc('\n',stdout);
    }
    fclose(file);
    printf("\n24CE023_Desai Charmi.");
    return 0;
}
