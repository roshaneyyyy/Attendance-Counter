#include<stdio.h>
int main()
{
    int i, a, n;
    int present=0, absent=0;
    float percentage;
    printf("enter the number of students:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
printf("student %d=",i);
scanf("%d",&a);
if (a==1)
{
printf("present\n");
present++;
}
else if(a==0)
{
printf("absent\n");
absent++;
}

else
{
    printf("invalid/n");
}

    }
    percentage=(present*100.0)/n;
    printf("the total perecentage of absent student:%d\n",absent);
    printf("the total perecentage of present student:%d\n",present);
    printf("attendence percentage:%d",present);
    return 0;
}