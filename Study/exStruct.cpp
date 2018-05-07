#include <stdio.h>

struct MyData
{
     char name[80];
     int age;
};


int main ()
{
  MyData data;
  printf ("Name: ");
  scanf ("%s", data.name);  
  printf ("Age: ");
  scanf ("%d",&data.age);
  printf ("%s's data is %d\n.", data.name , data.age);
  return 0;
} // exStruct.cpp



