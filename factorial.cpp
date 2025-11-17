#include<stdio.h>
int main()
{
int num,i;
  unsigned long long factorial=1;
printf("eneter a positive integer:");
scanf("%d",&num);
if (num<0) {
printf("factorial of a negative number doesn't exist.\n");
}else {
printf("factorial of%d%=%11u\n",num,factorial);
}
return 0;
}
