//stack program.

#include<stdio.h>
#include<stdlib.h>
#define maxsize 5

int top;
void push(int stack[maxsize],int element)
{
    
    top ++;
    stack[top]=element;

}
int pop(int stack[maxsize])
{
    
    int temp;
    temp=stack[top];
    top--;
    return(temp);
}
int peep(int stack[maxsize])
{

    return (stack[top]);

}
int is_full(int stack[maxsize])
{

    if(top==maxsize)
    return 1;
    else 
    return 0;
}
int is_empty(int stack[maxsize])
{

    if(top=-1)
    return 1;
    else
    return 0;
}
int top=-1;
int main()
{
int stack[maxsize],element,choice;
void push(int [maxsize],int);
int pop(int [maxsize]);
int peep(int [maxsize]);
int is_full(int [maxsize]);
int is_empty(int [maxsize]);
do {
printf("stack operation\n");
printf("..................");
printf("1,push\n");
printf("2,pop\n");
printf("3,peep\n");
printf("4,exit\n");
printf("enter your choice(1 to 4)");
scanf("%d",&choice);
switch(choice)
{
case 1:
if(!is_full(stack))
   { printf("enter the element of push");
    scanf("%d",&element);
    push(stack,element);
   }
 else 
  printf("stack overflow");
   break;
 case 2:
  if(!is_empty(stack))
   printf("the poped element is %d",pop(stack));
   else
  printf("stack underflows");
break;
case 3:
if(!is_empty(stack))
printf("the peeped element is %d",peep(stack));
else
printf("stack underflow");
break;
case 4:
exit(0);
default:
printf("wrong input emter 1 to 4 only");
}
} while(1);
}