#include <stdio.h>  
#include<stdlib.h>   
# define max 2
int queue[max];   
int front=-1;  
int rear=-1;  
     
void enqueue(int x)  
    {  
        if(front==-1 && rear==-1)     
        {  
            front=0;  
            rear=0;  
	    printf("Enter the element which is to be inserted:");  
            scanf("%d", &x);  
            queue[rear]=x; 
	    printf("\n %d inserted",queue[rear]); 
        }  
        else if((rear+1)%max==front)   
        {  
            printf("Queue is overflow");  
        }  
        else  
        {  
            rear=(rear+1)%max; 
            printf("Enter the element which is to be inserted:");  
            scanf("%d", &x);  
            queue[rear]=x; 
            printf("\n %d inserted",queue[rear]); 
        }  
    }  
      
     
int dequeue()  
    {  
        if((front==-1) && (rear==-1))  
        {  
            printf("\nQueue is underflow");  
        }  
     else if(front==rear)  
    {  
       printf("\nThe dequeued element is %d", queue[front]);  
       front=-1;  
       rear=-1;  
    }   
    else  
    {  
        printf("\nThe dequeued element is %d", queue[front]);  
       front=(front+1)%max;  
    }  
    }  
    
void display()  
    {  
        int i=front;  
        if(front==-1 && rear==-1)  
        {  
            printf("\n Queue is empty..");  
        }  
        else  
        {  
            printf("\nElements in a Queue are :\n");  
            while(i!=rear)  
            {  
                printf("%d\n",queue[i]);  
                i=(i+1)%max;  
            } printf("%d\n",queue[i]);   
        }  
    }  
int main()  
    {  
        int choice=1,x;    
          
        while(choice<4 && choice!=0) 
        {  
        printf("\n 1: Insert an element");  
        printf("\n 2: Delete an element");  
        printf("\n 3: Display the element"); 
	printf("\n 4: Exit "); 
        printf("\nEnter your choice:");  
        scanf("%d", &choice);  
          
        switch(choice)  
        {  
              
            case 1:  
                     
            enqueue(x);  
            break;  
            case 2:  
            dequeue();  
            break;  
            case 3:  
            display();
            break;
	    case 4:
	    exit(0);
	     
      }
        }  
        return 0;  
    }  
