// Problem Link: https://www.hackerrank.com/challenges/reverse-array-c/problem
// Langugae: C
// User: mahmoud_gamal_a3

#include<stdio.h>

int main()
{

        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i = 0; i < n ; i++)
        {
            scanf("%d", &arr[i]);
        }
        // the loop start from n - 1 (the last element) to 0 (the first element)
        for(int i = n - 1; i >= 0 ; i--)
        {
            printf("%d ", arr[i]);
        }

        




       return 0;
}
