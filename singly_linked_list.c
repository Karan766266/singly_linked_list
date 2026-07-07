struct node{

 int data;
 struct node *next;

};
struct node *start=0;
struct node*createnode()
{
    struct node *g1;
    g1=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter a data:");
    scanf("%d",&g1->data);
    g1->next=0;
    return g1;
}
void insertstart()
{
    struct node *k1;
    k1=createnode();

    if(start==0)
    {
    start=k1;
    }
    else
    {
        k1->next=start;
        start=k1;
    }

}
insertmiddle()
{


}
insertend()
{


}
deletestart()
{
    struct node *b1;
    if(start==0)
    {
        printf("There is no node found to delete")
    }
    else{
        b1=start;
        start=b1->next;
        b1->next=0;
        free(b1);
    }


}
deletemiddle()
{


}
deleteend()
{


}
 void displaynode()
{
    struct node *d1;
    d1=start;

    while(d1!=0){
        printf("%d",d1->data);
        d1=d1->next;
    }

}

void main()
{
    int ch;

    printf("\n 1. Insert from start");
    printf("\n 2. Insert from middle");
    printf("\n 3. Insert from end");
    printf("\n 4. Delete from start");
    printf("\n 5. Delete from middle");
    printf("\n 6. Delete from end");
    printf("\n 7. Display node");
    printf("\n 8. Exit");

    while(1)
    {

    printf("\nEnter your choice:");
    scanf("%d",&ch);

    switch(ch)
    {
    case 1:
        {
            insertstart();
            break;
        }
    case 2:
        {
            insertmiddle();
            break;

    case 3:
        {
            insertend();
            break;
        }
    case 4:
        {
            deletestart();
            break;

        }
    case 5:
        {
            deletemiddle();
            break;
        }
    case 6:
        {
            deleteend();
            break;
        }
    case 7:
        {
            displaynode();
            break;
        }
    case 8:
        {

        exit(0);
        }
    default:
        {
            printf("\nWrong choice entered!!!");
        }
    }
}
getch();
    }
}
