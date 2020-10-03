#include <stdio.h>
#include <stdlib.h>
//Global Variable
int size,choice,ele;
int a;


//Creating Stack
struct stack{
    int arr[100];
    int top;

}st;

//Inserting Element
void push()
{
    if((st.top)==(size-1))
    {
        printf("\n Stack is Full");
    }
    else
    {
        st.top++;
        printf("\nEnter a Value ");
        scanf("%d",&ele);
        st.arr[st.top]=ele;
    }
}

//Removing Element
int pop()
{
    if((st.top)==-1)
    {
        printf("\nStack is Empty");
    }
    else
    {
        int out;
        out=st.arr[st.top];
        st.top--;
        return out;
    }
}

//Peek
int peek()
{
    int display;
    if((st.top)==-1)
    {
     printf("\nStack is empty");
     return 0;
    }
    else
    {
    display=st.arr[st.top];
    return display;
    }
}

//Display Stack
void display()
{
    if((st.top)>=0)
    {
        printf("\n\nElements in the Stack");
        for(int i=st.top;i>=0;i--)
        {
            printf("\n%d",st.arr[i]);
        }
    }
    else
    {
        printf("No elements to Display");
    }
}

int main()
{
    st.top=-1;
    printf("Enter a Stack size less than 100 : ");
    scanf("%d",&size);
    
    do{ 
        printf("\nStack Operations.....");
        printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.PEEK\n\t 4.DISPLAY\n\t 5.EXIT");
        printf("\nEnter Your Choice  ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            {
                push();
                break;
            }
        case 2:
            {   a=pop();
                printf("\n%d",a);
                printf(" Deleted");
                break;
            }
        case 3:
            {   a=peek();
                if(st.top>=0)
                {
                printf("%d",peek());
                printf(" is top most element in the stack");
                }
                break;
            }
        case 4:
            {
                display();
                break;
            }
        case 5:
            {
                printf("\n\t EXIT Point");
                break;
            }
        default:
            printf("\nEnter a correct choice (1,2,3,4,5)");
        }
    }while(choice!=5);
    return 0;
}
