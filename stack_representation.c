
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int stack_arr[MAX];
int top=-1;         /*Will always represent the top most
                      element of the stack. Literally!!*/

void push(int d)
{
    if(top==MAX-1){
        printf("\nStack overflow error\n");
        return;
    }
    top++;
    stack_arr[top]=d;
}

void pop()
{
    if(top==-1){
        printf("\nStack underflow error\n");
        return;
    }
    stack_arr[top]=='\0';
    top--;
}

void print(int *A)
{
    if(top==-1)
        printf("No elements to print");
    int i=top;
    while(i>=0)
    {
        printf("  |%2d  |",*(A+i));
        printf("\n  ------\n");
        i--;
    }
}

void prompt(void)
{
    int data,c;
    printf("\noperation: ");
    scanf("%d",&c);

        if(c==1){
            printf("\nEnter data to be pushed: ");
            scanf("%d",&data);
            push(data);
            }
        if(c==2)
            pop();
        if(c==3){
            if(top==-1)
            printf("No elements to print");
            else
                printf("%d",stack_arr[top]);
        }
        if(c==4)
            print(stack_arr);
        if(c==5)
            exit(1);
}


int main(void)
{
    printf("Enter any of the given choices: \n1:Push\n2:Pop\n3:Print the top element\n4:Print all stack elements\n5:Quit\n");
    while(1)
        prompt();
    return(0);
}
