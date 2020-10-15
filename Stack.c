#include <stdio.h>
#include <stdlib.h>


//Creating Stack
struct stack{
    int arr[100];
    int top;

}st;

//Inserting Element
void push(int size)
{
    if((st.top)==size)
    {
        printf("Stack is Full\n");
    }
    else
    {
        int ele;
		st.top++;
        printf("Enter a Value : ");
        scanf("%d",&ele);
        st.arr[st.top]=ele;
    }
}

//Removing Element
void pop()
{
    if((st.top)==-1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("%d popped\n",st.arr[st.top]);
		st.top--;
    }
}

//Peek
void peek()
{
    if((st.top)==-1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
		printf("%d at top\n",st.arr[st.top]);
	}
}

//Display Stack
void display()
{
    if((st.top)>=0)
    {
        printf("Elements in the Stack : \n");
        for(int i=0;i<=st.top;i++)
        {
            printf("%d\t",st.arr[i]);
        }
		printf("\n");
    }
    else
    {
        printf("No elements to Display\n");
    }
}

int main()
{
    int choice,size;
	st.top=-1;
    printf("Enter a Stack size less than 100 : ");
    scanf("%d",&size);
    do{
        printf("Stack Operations.....\n");
		printf("1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n5.EXIT\n");
		printf("Enter Your Choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            {
                push(size);
				break;
            }
        case 2:
            {
                pop();
				break;
            }
        case 3:
            {
                peek();
				break;
            }
        case 4:
            {
                display();
				break;
            }
        case 5:
            {
                printf("EXIT Point\n");
				break;
            }
        default:
            printf("Enter a correct choice (1,2,3,4,5)\n");
        }
    }while(choice!=5);
    return 0;
}
