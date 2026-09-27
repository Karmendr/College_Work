#include<stdio.h>
#define max 10

static int arr[max] = {1,2,3,4,5,6,7,8,9,10};

void deletionAtBegin()
{
    for(int i = 0; i < max - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    arr[max - 1] = 0;

    printf("Element Deleted!\n");
}

void deletionAtEnd()
{
    for(int i = max-1; i >= 0; i--)
    {
        if(arr[i] != 0)
        {
            arr[i] = 0;
            break;
        }
    }
    printf("Element deleted!\n");
}

void deletionAtIndex()
{
    int pos;

    printf("Enter POS : ");
    scanf("%d", &pos);

    for(int i = pos; i < max - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    arr[max - 1] = 0;

    printf("Element deleted!\n");
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
        printf("\t Array Deletion \n");
        printf("\t Press 1. Deletion at begin \n");
        printf("\t Press 2. Deletion at end \n");
        printf("\t Press 3. Deletion at Index \n");
        printf("\t Press 4. Display \n");
        printf("\t Enter Your choice : ");
        int n;
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                deletionAtBegin();
                break;
            case 2:
                deletionAtEnd();
                break;
            case 3:
                deletionAtIndex();
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