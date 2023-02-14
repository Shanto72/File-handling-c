#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    FILE *fp;
    char dr[50]="I am overwriting something";
    fp = fopen("shanto.txt","w");
    if(fp==NULL)
    {
        printf("File not found");
    }
    else
    {
        if(strlen(dr)>0)
        {
            fputs(dr,fp);
            fputs("\n", fp);
        }
        fclose(fp);
    }
    return 0;
}
