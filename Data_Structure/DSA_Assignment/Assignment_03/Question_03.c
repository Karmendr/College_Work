#include <stdio.h>

#define MAX 100

int main()
{
    int arr[MAX];
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int differences[MAX];
    int diffCount = 0;

    // Generate all subarrays
    for (int i = 0; i < n - 1; i++)
    {
        int max1, max2;

        // First element
        max1 = arr[i];

        // Second element
        max2 = arr[i + 1];

        if (max2 > max1)
        {
            int temp = max1;
            max1 = max2;
            max2 = temp;
        }

        // Subarrays starting from i
        for (int j = i + 1; j < n; j++)
        {
            // Update two maximum elements
            if (arr[j] >= max1)
            {
                max2 = max1;
                max1 = arr[j];
            }
            else if (arr[j] > max2)
            {
                max2 = arr[j];
            }

            int difference = max1 - max2;

            // Check whether difference already exists
            int found = 0;

            for (int k = 0; k < diffCount; k++)
            {
                if (differences[k] == difference)
                {
                    found = 1;
                    break;
                }
            }

            // Store only unique difference
            if (found == 0)
            {
                differences[diffCount] = difference;
                diffCount++;
            }
        }
    }

    printf("\nUnique differences are: ");

    for (int i = 0; i < diffCount; i++)
    {
        printf("%d ", differences[i]);
    }

    printf("\nNumber of unique differences = %d\n", diffCount);

    return 0;
}