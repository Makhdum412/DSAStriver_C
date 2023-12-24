#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node{
    int data;
    struct node *next;
}*head=NULL;

void createNode(){
    int n,k;
    struct node *temp, *ptr;
    printf("Enter the data to be inserted: ");
    scanf("%d", &k);
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=k;
    temp->next=NULL;
    if(head==NULL)
    head=temp;
    else{
        ptr=head;
        while(ptr->next!=NULL){
          ptr=ptr->next;  
        }
        ptr->next=temp;
    }
}
bool isPresent(struct node *head){
    int k;
    struct node *s;
    s=head;
    printf("Enter the element to be searched: ");
    scanf("%d", &k);
    while(s!=NULL){
        if(s->data==k){
        return true;
    }
    s=s->next;
    }
    return false;
}
void display(){
    struct node *s;
    s=head;
    while(s!=NULL){
        printf("\t%d", s->data);
        s=s->next;
    }
    printf("\n");
}
int main(){
    int ch;
    while(1){
        printf("1. Create Node \n");
        printf("2. Display \n");
        printf("3. If data is present \n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch(ch){
            case 1: createNode();
            break;
            case 2: display();
            break;
            case 3:printf("%d", isPresent(head));
            printf("\n");
        }
    }
}
