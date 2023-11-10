#include<stdio.h>
#include<stdlib.h>
#define SIZE 2
void push(int);
void pop();
void display();
int stack[SIZE],top=-1;
void main()
{
int value,choice;
while(1)
{
printf("\n1.push\n 2.pop\n 3.display\n 4.exit\n");
printf("enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("enter the value to be inserted:");
      scanf("%d",&value);
      push(value);
	break;
case 2:pop();
      break;
case 3:display();
	break;
case 4:exit(0);
default:printf("wrong selection");
}
}
}
void push(int value)
{
if(top==SIZE-1)
printf("Stack is full!! Insertion is not possible!!");
else
{
top++;
stack[top]=value;
printf("insertion success");
}
}
void pop()
{
if(top==-1)
printf("stack is empty");
else
{
printf("deleted:%d",stack[top]);
top--;
}
}
void display()
{
if(top==-1)
printf("\nstack is empty");
else
{
int i;
printf("\nstack elements are:");
for(i=top; i>=0;i--)
printf("%d\n",stack[i]);
}
}


