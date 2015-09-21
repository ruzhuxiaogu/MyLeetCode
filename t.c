#include<stdio.h>
#include<stdlib.h>

int main()
{
unsigned char a,b,c;
scanf("%d",&a);
printf("%d\n",a);
getchar();
printf("%d\n",a);
scanf("%c %d",&b,&c);
printf("%d,%c,%d\n",a,b,c);
return 0;
}
