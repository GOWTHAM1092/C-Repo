#include <stdio.h>

void print_pattern(int N) {
    // Validate the input
    if (N < 1 || N > 26) {
        printf("N must be between 1 and 26.\n");
        return;
    }

    // Loop through rows from N to 1
    for (int i = N; i >= 1; i--) {
        // Get the character for the current row
        char ch = 'A' + i - 1;
        // Print the character repeated 'i' times
        for (int j = 0; j < i; j++) {
            printf("%c ", ch);
        }
        printf("\n");
    }
}

int main() {
    int N;
    
    scanf("%d", &N);
    print_pattern(N);
    return 0;
}