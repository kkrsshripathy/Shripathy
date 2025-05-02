#include<stdio.h>
#include<stdbool.h>
int push(int stack[100],int top,int size){
    int ele;
    if(top==size-1){
        printf("stack is full\n");
        return top;
    }
    else {
        printf("enter the element:\n");
        scanf("%d",&ele);
        top++;
        stack[top]=ele;
        return top;
    }
}
int pop(int stack[100],int top){
    if(top==-1){
        printf("stack is underflow\n");
        return -1;
    }
    else{
        printf("ELEMENT TO BE REMOVED:%d\n",stack[top]);
        top--;
        return top;
    }
}
void display(int stack[],int top){
    printf("Elements are...\n");
    for(int i=top;i>=0;i--)
    printf("%d\n",stack[i]);
}
bool isfull(int top,int size)
     {
return top==size-1;
    }
bool isempty(int top ){
    return top==-1;
}
int Top(int stack[],int top){
    return stack[top];
}
int main(){
int stack[100],top=-1,size,choice;
printf("enter the size:");
scanf("%d",&size);
printf("enter the 1 for push\n");
printf("enter the 2 for pop\n");
printf("enter the 3 for display\n");
printf("enter the 4 for isfull\n");
printf("enter the 5 for isempty\n");
printf("enter the 6 for top \n");
printf("enter the 7 for exit\n");

while(choice!=7){
    printf("enter the choice:\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        top=push( stack, top, size);
        break;
        case 2:
        top=pop( stack, top);
        break;
        case 3:
        display( stack, top);
        break;
        case 4:
        if(isfull( top, size)){printf("stack is full\n"); }
        else{printf("stack is not full\n");}
        break;
        case 5:
         if(isempty( top)){printf("stack is empty\n"); }
        else{printf("stack is not empty\n");}
        break;
        case 6:
        if(top==-1){
            printf("stack is empty");
        }
        else{
            printf("TOP ELEMENT IS:%d\n",Top(stack,top));
        }
    }
}



return 0;}
