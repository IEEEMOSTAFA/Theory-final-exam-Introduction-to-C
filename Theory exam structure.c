#include<stdio.h>
struct student
{
    float mark;
    int roll;
    char name[50];
};
int main()
{
struct student s1;
printf("enter information>>\n\n\n");

printf("enter name:");
scanf("%s",s1.name);

printf("enter roll number:");
scanf("%d",&s1.roll);

printf("enter marks:");
scanf("%f",&s1.mark);

printf("displaying information>>\n\n\n");
printf("name: %s\n",s1.name);
printf("roll number: %d\n",s1.roll);
printf("marks: %.3f",s1.mark);

    return 0;
}
