#include <stdio.h>

int stack[100], top, n, x;

void push()
{
    if (top >= n - 1)
    {
        printf("\nStack is overflow\n");
    }
    else
    {
        printf("Enter the value to add in stack: \n");
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
}

void pop()
{
    if (top <= -1)
    {
        printf("\nStack is Underflow\n");
    }
    else
    {
        printf("\nThe poped element is %d\n", stack[top]);
        top--;
    }
}

void print()
{
    if (top >= 0)
    {
        printf("\nThe element in stack\n");
        for (int i = top; i >= 0; i--)
        {
            printf("\n%d", stack[i]);
        }
        printf("\nPress next choise:-\n");
    }
    else
    {
        printf("\nThe Stack is empty.\n");
    }
}

int main()
{
    int choise;
    top = -1;
    printf("Enter the size of Stack (Max size 100) :-\n");
    scanf("%d", &n);
    printf("Enter which stack operation you have to perform :-\n");
    printf("1.Push  2.Pop  3.Print  4.Exit\n");
    do
    {
        printf("Enter the choise :-\n");
        scanf("%d", &choise);

        switch (choise)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            print();
            break;

        case 4:
            printf("You exit succesfully\n");
            break;

        default:
            printf("Please enter a valid number!!\n");
            break;
        }
    } while (choise != 4);

    return 0;
}
