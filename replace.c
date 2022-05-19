#include<stdio.h>
#include<string.h>

int main()
{
    char stat[]="You must write in PASCAL language";
    int n = strlen(stat);
    for (int i = 0; i<n; i++)
    {
        if (stat[i]=='P'&&stat[i+1]=='A'&&stat[i+2]=='S'&&stat[i+3]=='C'&&stat[i+4]=='A'&&stat[i+5]=='L')
        {
            stat[i]='C';
            for (int j = i+1; j<n; j++)
            {
                stat[j]=stat[j+5];
            }
        }
    }
    printf("%s",stat);
}
