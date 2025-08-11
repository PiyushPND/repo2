#include<stdio.h>
#include<string.h>
int main()
{   char str[100],t;
    printf("Enter any string:\t");
    fgets(str,100,stdin);
    if(str[strlen(str)-1]=='\n'){str[strlen(str)-1]='\0';}
    int l=0,r=strlen(str)-1;
    while(l<r)
    {   t=str[l];
        str[l]=str[r];
        str[r]=t;
        l++;
        r--;}
    printf("\nReversed string:\t%s\n",str);
    return 0;}
