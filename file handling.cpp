#include<stdio.h>
#include<string>
using namespace std;
int main()
{
    FILE *fp;
    char dr[50];
    fp = fopen("shanto.txt","r");
    if(fp==NULL)
    {
        printf("File not found");
    }
    else{
    while(fgets(dr, 50, fp)!= NULL)
    {
        printf("%s", dr);
    }
    fclose(fp);}
    return 0;
}
