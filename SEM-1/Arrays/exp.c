#include <stdio.h>

// Function to generate Fibonacci series
void generateFibonacci(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci series up to %d terms: ", n);

    for (int i = 0; i < n; ++i) {
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
}

int main() {
    // Example usage: Generate Fibonacci series up to 10 terms
    int numberOfTerms;
    printf("Enter the number of terms:");
    scanf("%d",&numberOfTerms);

    // Call the function to generate and display the Fibonacci series
    generateFibonacci(numberOfTerms);

    return 0;
}
