#include <stdio.h>
#include <stdlib.h>
//Global Variable
int size,choice,ele;


//Creating Stack
struct stack{
    int arr[100];
    int top;
    int size;

}st;

//Inserting Element
void push(int ele)
{
    if((st.top)==(st.size)-1)
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
    display=st.arr[st.top];
    return display;
}

//Display Stack
void display()
{
    int i;
    if((st.top)<st.size)
    {
        printf("\n\nElements in the Stack");
        for(i=0;i<=st.top;i++)
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
    int choice;

    printf("Enter a Stack size less than 100 : ");
    scanf("%d",&st.size);
    printf("\nStack Operations.....");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.PEEK\n\t 4.DISPLAY\n\t 5.EXIT");

    do{
        printf("\nEnter Your Choice  ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            {
                push(ele);break;
            }
        case 2:
            {
                printf("%d",pop());break;
            }
        case 3:
            {
                printf("%d",peek());break;
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
    }while(choice!=5);
    return 0;
}
