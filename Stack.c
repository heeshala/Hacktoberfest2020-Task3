#include <stdio.h>
#include <stdlib.h>
//Global Variable
char choice[20],ele[20];
int i;
int size;
//Creating Stack
struct stack{
    int arr[100];
    int top;
    int rear;
}st;

//Inserting Element
void push(int element)
{
    if((st.top)==size)
    {
        printf("\n Stack is Full");
    }
    else
    {
        st.top--;
        printf("\nEnter a Value ");
        scanf("%s",ele);
        st.arr[st.top]= ele[i];
    }
}

//Removing Element
int pop()
{
    if((st.top)==-1)
    {
        printf("\nStack is Empty");
        return 0;
    }
    else
    {
        int out;
        out=st.arr[st.top];
        st.top++;
        return out;
    }
}

//Peek
int peek()
{
    int display;
    display=st.arr[st.rear];
    return display;
}

//Display Stack
void display()
{
    if((st.top)>=0)
    {
        printf("\n\nElements in the Stack");
        for(i=st.top;i>=0;i++)
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
    printf("\nStack Operations.....");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.PEEK\n\t 4.DISPLAY\n\t 5.EXIT");

    do{
        printf("\nEnter Your Choice  ");
        scanf("%s",choice);
        switch(choice[i])
        {
        case 1:
            {
                push(ele[i]);break;
            }
        case 2:
            {
                printf("%d",pop());
            }
        case 3:
            {
                printf("%d",peek());
            }
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
        }
    }while(choice[i]==5);
    return 0;
}
