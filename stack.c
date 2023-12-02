#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int arr[MAX];
int top = -1;
void push(int n){
    if(top == MAX -1){
        printf("Stack overflow\n");
        return ;
    }
    top++;
    arr[top]=n;
}
int pop(){
    if(top == -1){
        printf("Stack Underflow\n");
        exit(1);
    }
    int data =arr[top];
    top--;
    return data; 
}
int peek(){
    return printf("%d\n",arr[top]);
}
int IsEmpty(){
    if(top ==-1)
        return 0;
    else
        return 1;
}
int IsFull(){
    if(top == MAX-1)
        return 0;
    else
        return 1;
}
void print(){
    for(int i=top;i>=0;i--){
        printf("%d  ",arr[i]);
    }
}
int main(){
    int x,a;
    while (1)
    {
        printf("Welcome to my program\n");
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.peek\n");
        printf("4.IsEmpty\n");
        printf("5.IsFull\n");
        printf("6.print all elements in a stack\n");
        printf("7.Quit\n");
        printf("Enter your choice\n");
        scanf("%d",&x);
        switch (x)
        {
        case 1 :
            printf("Enter number to add : ");
            scanf("%d",&a);
            push(a);
            break;
        case 2 :
            printf("Deleted element is : %d\n",pop());
            break;
        case 3 :
            peek();
            break;
        case 4 :
            if(IsEmpty())
                printf("NO");
            else
                printf("YES");
            break;
        case 5 :
            if(IsFull())
                printf("NO");
            else
                printf("YES");
            break;
        case 6 :
            print();
            break;
        case 7 :
            exit(1);
            break;
        default:
           printf("Invalid Character\n");
            break;
        }
        printf("\n");
    }
    return 0;
}
