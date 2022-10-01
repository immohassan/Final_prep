#include <stdio.h>
#include <stdlib.h>

// Function declaration
void at_beginning();
void at_end();
void at_position(int count);
void display();
void delete_beg();
void delete_end();
void delete_pos();
void update();
void asort();
void dsort();
void get();

//struct node 
struct node
{
    int data;
    struct node *next;
};
//initializing node pointers
struct node *head;
struct node *newnode;
struct node *temp;
;

// main()
int main()
{
    int choice = 1;
    head = 0;
    int count;
    int a;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->next = 0;
        printf("Enter the data you want to insert : \n");
        scanf("%d", &newnode->data);

        if (head == 0)  //if there is nothing in the first node
        {
            head = temp = newnode; //newnode value will be assigned to head as well as temp
        }
        else
        {
            temp->next = newnode;
            temp = newnode;//else newnode value will be saved in temp
        }

        printf("Do you want to continue (1/0)? : ");
        scanf("%d", &choice);
    }

    temp = head;
    while (temp != 0)
    {
        temp = temp->next;
        count++; //-----> can be printed as length of the linked list
    }

    printf("Which operation do you want to perform ?\n press 1 ----> insert at the beginning\n press 2 ----> insert at the end\n press 3 ----> insert at specific position\n press 4 ----> To Display the Linked list\n press 5 ----> Delete at the beginning\n press 6 ----> Delete at the end\n press 7 ----> Delete at given index\n press 8 ----> Ascending sort\n press 9 ----> Descending sort\n press 10 ----> Updation\n press 11 ----> Get data from index");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        at_beginning();
        display();
        break;
    case 2:
        at_end();
        display();
        break;
    case 3:
        at_position(count);
        display();
        break;
    case 4:
        display();
        break;
    case 5:
        delete_beg();
        display();
        break;
    case 6:
        delete_end();
        display();
        break;    
    case 7:
        delete_pos();
        display();
        break;
    case 8:
        asort();
        // display();
        break;  
    case 9:
        dsort();
        // display();
        break;  
    case 10:
        update();
        display();
        break;
    case 11:
        get();
        display();
        break;                    
    }
    return 0;
}

void at_beginning()
{
    temp = head; //first point temp to head
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data for insert at the beginning : \n");
    scanf("%d", &newnode->data); //take data
    newnode->next = 0; 

    newnode->next = head; //point that new node to head
    head = newnode; // and point head to new node
    printf("Node added Successfully!\n\n");//success message
}

void at_end()
{
    temp = head; //first point temp to head
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data for insert at the end :\n");
    scanf("%d", &newnode->data); //take data
    newnode->next = 0;
    while (temp->next != 0)
    {
        temp = temp->next; //traverse list
    } //at this stage the temp is at last node
    temp->next = newnode; //link that last node to new node
    printf("Node added Successfully!\n\n");//sucess message
}

void at_position(int count)
{
    int pos, i = 1; //we need a position variable for it
    temp = head;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data for insert at a position : \n");
    scanf("%d", &newnode->data); // take data
    newnode->next = 0;

    printf("Enter the position where you want to insert : \n");
    scanf("%d", &pos); //take position where is to be placed 
    if (pos <=0 || pos > count)// false condition: if position is zero or position is greater than actual list size
    {
        printf("Can't be modified \n");
    }
    else
    {
        while (i < pos-1)//pos -1 as index starts from 0
        {
            temp = temp->next;  //traverse list
            i++; // increase i counter
        }//at this stage we reached at the node before the position
        newnode->next = temp->next; //assign new node next to the next node(node after that given position)
        temp->next = newnode; //assign the previous node before position to the newnode
    }
    printf("Node added Successfully!\n\n");//success message
}

void delete_beg(){
    temp = head; //assign the memory address of head pointer to temp pointer
    head = head->next; //assign the memory address of second node to head
    free(temp); //free node
}

void delete_end(){
    struct node * prevnode = 0;
    temp = head; //assign the memory address of head pointer to temp pointer
    while(temp->next!=0){  //traverse
        prevnode = temp; //assign the memory address of temp pointer to prevnode pointer
        temp = temp->next;
    }
        if(temp ==head){ //if there's only one node
            head = 0; 
            free(temp); //delete it
        }
        else 
        prevnode->next = 0; //else out second last node's next to Null
        free(temp); //free last node
}

void delete_pos(){
    struct node * nextnode;
    int pos,i=1;
    temp = head; //assign the memory address of head pointer to temp pointer
    printf("Enter the index where you want to delete the node: ");
    scanf("%d",&pos);
    while(i< pos-1){ //running loop at an index before the given index
        temp= temp->next;
        i++;
    }
        nextnode = temp->next; //assign the given index node to nextnode pointer
        temp->next = nextnode->next; //link the previous node before given index to the node after the given index
    free(nextnode);
}

void update()
{
	int key,flag=0,index,i=1;
	temp=head;
	printf("Enter the replacement value : \n");
	scanf("%d",&key);
    printf("Enter index: \n");
	scanf("%d",&index);
    while(i < index-1){ //traverse through index -1 node
        temp = temp->next; 
        i++;
    }
    temp = temp->next; //increment node
    temp->data = key; //replace value
	printf("Value have been replaced\n\n");
}

void get(){
    int i=1,pos;
    printf("Enter Index: \n");
    scanf("%d",&pos);
    temp = head;
    while (i < pos-1)
    {
        temp = temp->next;
        i++;
    }
    temp = temp->next;
    printf("The Value at Node %d ---> %d\n\n",pos,temp->data);
    
}

void asort(){
    struct node *ptr;
    int swap;
    temp = head;
    while(temp!= 0){ //traverse 
        ptr = temp->next; //taking the next node
        while(ptr!= 0){ //traverse the next node
            if(temp->data > ptr->data){ //check the values
                swap = temp->data;       // This
                temp->data = ptr->data;  // is
                ptr->data = swap;        //bubble sort
            }
            ptr = ptr->next;
        }
        temp = temp->next;
    }
    temp = head;
    while (temp!=0) //printing 
    {
        printf("%d\t",temp->data);
        temp = temp->next;
    }
}

void dsort(){
    struct node *ptr;
    int swap;
    temp = head;
    while(temp != 0){
        ptr = temp->next;
        while(ptr != 0){
            if(temp->data < ptr->data){
                swap = temp->data;
                temp->data = ptr->data;
                ptr->data = swap;
            }
            ptr = ptr->next;
        }
        temp = temp->next;
    }
    temp = head;
    while (temp!=0)
    {
        printf("%d\t",temp->data);
        temp = temp->next;
    }
}

// Printing the Linked list
void display()
{
    temp = head;
    printf("Your Linked list is : \n");
    while (temp != 0) //traversing list
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}