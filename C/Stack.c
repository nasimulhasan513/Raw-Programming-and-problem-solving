#include<stdio.h>
#define CAPACITY 3
int stack[CAPACITY];
int top = -1;
void push(int x){
    if(top<CAPACITY-1){
        top++;
        stack[top]=x;
        printf("Successfuly item added %d\n",x);
    }else{
        printf("Exception! no space.\n");
    }
    

}

int pop(){
    top--;
    return -1;
}

int peek(){
    if(top>=0){
        
        
        printf("implementing peek");
        return stack[top];
    }
    printf("Exception from Peek! empty stack!");
    return -1;
}

int main(){
    peek();
    push(10);
    
    push(29);
    push(5);
    push(43);
    push(6);
    peek();
    return 0;
}