#include <stdio.h>
#include <stdlib.h>
//Global Variable
int size,choice,ele;
#define MAXSIZE 5


//Creating Stack
struct stack{
    int arr[100];
struct stack
{
    int stk[MAXSIZE];
    int top;
};
typedef struct stack STACK;
STACK s;

}st;

void push(void);
int pop(void);
void display(void);
//Inserting Element
void push(int element)
void push()
{
    if((st.top)==size)
    int num;
    if (s.top == (MAXSIZE - 1))
    {
        printf("\n Stack is Full");
        printf("Stack is Full\n");
        return;
    }
    else
    {
        st.top--;
        printf("\nEnter a Value ");
        scanf("%s",&ele);
        st.arr[st.top]=ele;
        printf("Enter the element to be pushed\n");
        scanf("%d", &num);
        s.top = s.top + 1;
        s.stk[s.top] = num;
    }
    return;
}

//Removing Element
int pop()
{
    if((st.top)==-1)
    int num;
    if (s.top == -1)
    {
        printf("\nStack is Empty");
        printf("Stack is Empty\n");
        return (s.top);
    }
    else
    {
        int out;
        out=st.arr[st.top];
        st.top++;
        return out;
        num = s.stk[s.top];
        printf("poped element is = %dn", s.stk[s.top]);
        s.top = s.top - 1;
    }
}

//Peek
int peek()
{
    int display;
    display=st.arr[st.rear];
    return display;
    return (num);
}

//Display Stack
void display()
{
    if((st.top)>=0)
    int i;
    if (s.top == -1)
    {
        printf("\n\nElements in the Stack");
        for(i=st.top;i>=0;i++)
        {
            printf("\n%d",st.arr[i]);
        }
        printf("Stack is empty\n");
        return;
    }
    else
    {
        printf("No elements to Display");
        printf("\n The status of the stack is \n");
        for (i = s.top; i >= 0; i--)
        {
            printf("%d\n", s.stk[i]);
        }
    }
    printf("\n");
}

int main()
{
    st.top=-1;
    printf("Enter a Stack size less than 100 : ");
    scanf("%d",&size);
    int choice;
    int option = 1;
    s.top = -1;

    printf("\nStack Operations.....");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.PEEK\n\t 4.DISPLAY\n\t 5.EXIT");

    do{
        printf("\nEnter Your Choice  ");
        scanf("%c",&choice);
        switch(choice)
    while (option)
    {
        printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");

        printf("Enter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            {
                push(ele);break;
            }
            push();
            break;
        case 2:
            {
                printf("%d",pop());
            }
            pop();
            break;
        case 3:
            {
                printf("%d",peek());
            }
            display();
            break;
        case 4:
            {
                display();break;
            }
        case 5:
            {
                printf("\n\t EXIT Point");break;
            }
        default:
            printf("\nEnter a correct choice (1,2,3,4,5)");
            return -1;
        }
    }while(choice=5);
    return 0;
        fflush(stdin);
        printf("Do you want to continue(Type 0 or 1)?\n");
        scanf("%d", &option);
    }
}