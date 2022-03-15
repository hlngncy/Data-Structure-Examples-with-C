#include <cstdio>
#include <cstdlib>

//linked list
struct node {
    int data;
    struct node *next;
};

//head & tail
struct node *head = NULL;
struct node *tail = NULL;

//add node function
int addNode(int data) {
    //if linked list is empty
    if (head == NULL) {
        struct node *temp = (struct node *) malloc(sizeof(struct node));
        temp->data = data;
        temp->next = NULL;
        head = tail = temp;
    } else {
        //if linked list arent empty
        struct node *temp = (struct node *) malloc(sizeof(struct node));
        temp->data = data;
        temp->next = NULL;
        tail->next = temp;
        tail = temp;
    }
    return 0;
}

//add node on head function
int addNodeHead(int data) {
    if (head == NULL) {
        struct node *temp = (struct node *) malloc(sizeof(struct node));
        temp->data = data;
        temp->next = NULL;
        head = tail = temp;
    } else {
        struct node *temp = (struct node *) malloc(sizeof(struct node));
        temp->data = data;
        temp->next = head;
        head = temp;
    }
    return 0;
}

//print function
int print(){
    struct node *index = head;
    while (index!=NULL){
        printf("%d \n",index->data);
        index = index->next;
    }
}

//delete node
int deleteNod(int data){
    struct node *prev = NULL;
    struct node *index = head;
    //if linked list is empty
    if(head==NULL){printf("linked list is empty!\n"); return 0;}
    if(head->data==data){
        struct node *temp = head;
        head = head->next;
        free(temp);
        return 0;}
    while(index!=NULL && index->data!=data){
        prev = index;
        index = index->next;
    }
    if(index==NULL){printf("There is no such a data!\n"); return 0;}
    prev->next = index->next;
    if(tail->data==data){
        tail = prev;
    }
    free(index);
    return 0;
}
int main(){
    while(true){
        int opt;
        printf("Options:\n1)Add data\n2)Add data as first data\n3)Delete data\n4)Show all data\n5)quit\n---------------------------------------\n");
        printf("please enter an option: ");
        scanf("%d",&opt);
        if(opt == 1){
            int data;
            printf("Please enter an integer: ");
            scanf("%d",&data);
            addNode(data);
        }else if(opt == 2){
            int data;
            printf("Please enter an integer: ");
            scanf("%d",&data);
            addNodeHead(data);
        }else if(opt == 3){
            int data;
            printf("Please enter the integer which you want to delete: ");
            scanf("%d",&data);
            deleteNod(data);
        }else if(opt == 4){
            printf("All Datas:\n ");
            print();
        }else if(opt==5){
            break;
        }else{printf("please enter one of the options");}}
    return 0;
}

