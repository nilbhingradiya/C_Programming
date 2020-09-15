//Write a program to enter and print data using structure and dynamic memory allocation.

#include<stdio.h>
struct course
{
  int marks;
  char subject[30];
};
void main()
{
  struct course *ptr;
  int i,noOfRecords;
  printf("Enter number of records:");
  scanf("%d",&noOfRecords);
  ptr=(struct course*)malloc(noOfRecords*sizeof(struct course));
  for(i=0;i<noOfRecords;i++)
  {
      printf("Enter name of the subject and marks respectively:\n");
      scanf("%s %d",&(ptr+i)->subject,&(ptr+i)->marks);
  }
  printf("Displaying information:\n");
  for(i=0;i<noOfRecords;++i)
  printf("%s %d\n",(ptr+i)->subject,(ptr+i)->marks);
}
