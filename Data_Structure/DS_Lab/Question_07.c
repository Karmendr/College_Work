#include<stdio.h>
#define max 10

static int arr[max];

void insertAtBegin()
{
    int n;
    printf("Enter element : ");
    scanf("%d",&n);

    for(int i = max-1; i > 0; i--)
    {

        arr[i] = arr[i-1];
    }
    arr[0] = n;
    printf("Element inserted!\n");
}

void insertAtEnd()
{
    int n;
    printf("Enter element : ");
    scanf("%d",&n);
    if(arr[max-1]==0)
    {
        arr[max-1] = n;
        printf("Element inserted!\n");
    }
    else
        printf("Overflow!");
}

void insertAtIndex()
{
    int x,pos;
    printf("Enter Element : ");
    scanf("%d",&x);
    printf("Enter POS : ");
    scanf("%d",&pos);

    if(pos>max-1)
        printf("Please enter index 0-%d \n: ",max-1);
    else
    {
        for(int i = max-1; i > pos; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[pos] = x;
        printf("Element inserted!\n");
    }
}

void display()
{
    for(int i = 0; i < max; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void main()
{
    char more;
    do
    {
        printf("\t Array Insertion \n");
        printf("\t Press 1. Insert at begin \n");
        printf("\t Press 2. Insert at end \n");
        printf("\t Press 3. Insert at Index \n");
        printf("\t Press 4. Display \n");
        printf("\t Enter Your choice : ");
        int n;
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                insertAtBegin();
                break;
            case 2:
                insertAtEnd();
                break;
            case 3:
                insertAtIndex();
                break;
            case 4:
                display();
                break;
            default:
                printf("Enter valid input : ");
        }
        printf("Do you want more operation perform or exit (Y/N): ");
        scanf(" %c",&more);
    }while(more == 'Y' || more == 'y');
}