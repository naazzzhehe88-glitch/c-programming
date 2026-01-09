#include <stdio.h>

int main()
{
 int age;
 printf("Enter age ");
 scanf("%d",&age);
 if( age>=18)
 {
     printf("Person is eligible to vote");
 }
 else 
 {
      printf("Person is not eligible to vote");
 }
 return 0;
}
