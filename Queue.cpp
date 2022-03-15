#include <cstdio>
#include <cstring>
#include <cstdlib>

//queue node
struct node{
    int data;
    struct node *next;
};

//front and rear
struct node *front = NULL;
struct node *rear = NULL;

//enqueue
int enqueue(int data){
    //if queue is empty
    if(front==NULL){
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp->data = data;
        temp->next = NULL;
        front = rear = temp;
    }else{
        //if queue is not empty
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp->data = data;
        temp->next = NULL;
        rear->next = temp;
        rear = temp;
    }

    return 0;
}

//display queue
int display(){
    if(front==NULL){printf("queue is empty!");return 0;}
    struct node *index = front;
    printf("queue: \n");
    while(index != NULL){
        printf("-%d \n",index->data);
        index = index->next;
    }
    return 0;
}

//delete
int dequeue(){
    //if queue is empty
    if(front == NULL){printf("queue is empty!");return 0;}
    struct node *temp = front;
    front = front->next;
    free(temp);
    return 0;
}

int main(){
    while(true){
        int opt;
        printf("Options:\n1)Add data on queue\n2)Show queue\n3)Delete data on queue\n4)quit\n---------------------------------------\n");
        printf("please enter an option: ");
        scanf("%d",&opt);
        if(opt == 1){
            int data;
            printf("Please enter an integer: ");
            scanf("%d",&data);
            enqueue(data);
        }else if(opt == 2){
            display();
        }else if(opt == 3){
            dequeue();
        }else if(opt==4){
            break;
        }else{printf("please enter one of the options");}}
    return 0;
}

