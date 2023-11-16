struct student
{
char name[10];
int id;
float marks;
}*sptr;
void main()
{
struct student*sptr1;
struct student*sptr2;
struct student s1,s2;
sptr1 =&s1;
sptr2 =&s2;
printf("Enter student name,id,marks");
scanf("%s%d%f",sptr1->name,&sptr1->id,&sptr1->marks);
printf("\n%s\n%d\n%f",sptr1->name,sptr1->id,sptr1->marks);
}
