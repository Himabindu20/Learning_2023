#include <stdio.h>

int findLargestNumber(int num);

int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largestNum = findLargestNumber(num);
    printf("Largest number by deleting a single digit: %d\n", largestNum);

    return 0;
}

int findLargestNumber(int num) {
    int largestNum = 0;
    int divisor = 1;

    while (divisor <= 1000) {
        int currNum = (num / (divisor * 10)) * divisor + (num % divisor);
        if (currNum > largestNum) {
            largestNum = currNum;
        }
        divisor *= 10;
    }

    return largestNum;
}