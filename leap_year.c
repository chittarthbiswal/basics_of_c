#include<stdio.h>

int main()
{
    int x;
    printf("year =  ");
    scanf("%d",&x);

if (x%4==0 && x%100 != 0){
    printf("yes it is a leap year");
}
else if (x%400==0){
    printf("yes it is a leap year");
}
else {
    printf("no it is not a leap year");
}
return 0;
}