#include <stdio.h>
#include <stdlib.h>
//Global Variable
int size,choice,ele;


//Creating Stack
struct stack{
    int arr[100];
    int top;

}st;

//Inserting Element
void push()
{
    if((st.top)==size-1)
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
        ele=st.arr[st.top];
        st.top--;
        return ele;
    }
}

//Peek
int peek()
{
    ele=st.arr[st.top];
    return ele;
}

//Display Stack
void display()
{
    if((st.top)>=0)
    {
        int i;
		printf("\n\nElements in the Stack");
        for(i=st.top;i>=0;i--)
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
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            {
                push();
				break;
            }
        case 2:
            {
                printf("%d",pop());
                break;
            }
        case 3:
            {
                printf("%d",peek());
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
				return 0;
            }
        default:
            printf("\nEnter a correct choice (1,2,3,4,5)");
        }
    }while(1);
    return 0;
}
