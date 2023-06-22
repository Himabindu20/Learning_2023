#include <stdio.h>

void findSmallestLargestDigits(int n, int numbers[]);

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int numbers[n];
    int i;
    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    findSmallestLargestDigits(n, numbers);

    return 0;
}

void findSmallestLargestDigits(int n, int numbers[]) {
    int smallestDigit = 9;  
    int largestDigit = 0;   

    int i, j, digit;
    for (i = 0; i < n; i++) {
        int num = numbers[i];

        
        while (num > 0) {
            digit = num % 10;
            if (digit < smallestDigit) {
                smallestDigit = digit;
            }
            if (digit > largestDigit) {
                largestDigit = digit;
            }
            num /= 10;
        }
    }

    
    if (smallestDigit == 9 || largestDigit == 0) {
        printf("Not Valid\n");
    } else {
        printf("Smallest Digit: %d\n", smallestDigit);
        printf("Largest Digit: %d\n", largestDigit);
    }
}