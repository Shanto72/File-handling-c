#include<stdio.h>
#include<string>
using namespace std;
int main()
{
    FILE *fp;
    char dr[50];
    fp = fopen("open.txt","w");
    while(fgets(dr, 50, fp)!= NULL)
    {
        printf("%s", dr);
    }
    return 0;
}
