#include<stdio.h>
#include<stdlib.h>
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
int length(struct node *head){
    int cnt=0;
    struct node *ptr=head;
    while(ptr!=NULL){
        cnt++;
        ptr=ptr->next;
    }
    return cnt;
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
        printf("3. Length of LL \n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch(ch){
            case 1: createNode();
            break;
            case 2: display();
            break;
            case 3: printf("Length of LL: %d\n", length(head));
        }
    }
}
