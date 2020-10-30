//Other method for stack questions
#include <stdio.h>
#define MAXSIZE 5
 
struct stack
{
    int stk[MAXSIZE];
    int top;
};

typedef struct stack STACK;
STACK s;
 
void push(void);
int  pop(void);
void display(void);
 
void main ()
{
    int choice;
    int option = 1;
    s.top = -1;
 
    printf ("STACK OPERATION\n");
    while (option)
    {
        printf ("1. Push\n");
        printf ("2. Pop\n");
        printf ("3. Display\n");
        printf ("4. Exit\n");
 
        printf ("Enter your choice\n");
        scanf    ("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return;
        }
        fflush (stdin);
        printf ("Want to continue(Type 0 or 1)?\n");
        scanf    ("%d", &option);
    }
}

//Inserting Element
void push ()
{
    int num;
    if (s.top == (MAXSIZE - 1))
    {
        printf ("Stack is Full\n");
        return;
    }
    else
    {
        printf ("Enter element to be pushed\n");
        scanf ("%d", &num);
        s.top = s.top + 1;
        s.stk[s.top] = num;
    }
    return;
}
//  Removing Element
int pop ()
{
    int num;
    if (s.top == - 1)
    {
        printf ("Stack is Empty\n");
        return (s.top);
    }
    else
    {
        num = s.stk[s.top];
        printf ("pop element is = %dn", s.stk[s.top]);
        s.top = s.top - 1;
    }
    return(num);
}

void display ()
{
    int i;
    if (s.top == -1)
    {
        printf ("Stack is empty\n");
        return;
    }
    else
    {
        printf ("\n Status of the stack is \n");
        for (i = s.top; i >= 0; i--)
        {
            printf ("%d\n", s.stk[i]);
        }
    }
    printf ("\n");
}
