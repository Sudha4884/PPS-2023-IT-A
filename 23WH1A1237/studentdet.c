struct student
{
char name [10];
int id;
float cgpa;
};
void main()
{
int i,n;
struct student s[10];
printf("\n number of students");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nenter student name,id,cgpa");
scanf("%s%d%f",s[i].name,&s[i].id,&s[i].cgpa);
}
for(i=0;i<n;i++)
{
printf("\n%s%d\n%f",s[i].name,s[i].id,s[i].cgpa);
}
}
