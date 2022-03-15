#include <cstdio>
#include <cstring>
#include <cstdlib>

struct node{
    int data;
    struct node *next;
};

//top
struct node *top = NULL;

//Push function
int push(int data1){
    //if stack is empty
    if(top == NULL){
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->data = data1;
        n->next = NULL;
        top = n;
    }else{
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->data = data1;
        n->next = top;
        top = n;
    }
    return 0;
}
//display function
int display(){
    //if stack is empty
    if(top==NULL){printf("stack is empty");return 0;}
    struct node *index = top;
    while(index != NULL){
        printf("%d \n",index->data);
        index = index->next;
    }
    return 0;
}

//pop function
int pop(){
    //if stack is empty
    if(top==NULL){printf("stack is empty");return 0;}
    struct node *temp = top;
    top = top->next;
    free(temp);
}

int main(){
    push(6);
    push(7);
    push(8);
    display();
    pop();
    display();
    return 0;
}