#include <stdio.h>

#define MAX 100

int main()
{
    int height[MAX];
    int n;

    printf("Enter number of people: ");
    scanf("%d", &n);

    printf("Enter heights:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &height[i]);
    }

    int maxPeople = 0;

    for (int i = 0; i < n; i++)
    {
        int count = 0;

        // Check people on the right
        for (int j = i + 1; j < n; j++)
        {
            if (height[j] >= height[i])
                break;

            count++;
        }

        // Check people on the left
        for (int j = i - 1; j >= 0; j--)
        {
            if (height[j] >= height[i])
                break;

            count++;
        }
        if (count > maxPeople)
            maxPeople = count;
    }
    printf("Maximum number of people a person can see = %d\n", maxPeople);
    return 0;
}