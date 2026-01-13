#include <stdio.h>

int main() {
    char vote;
    int A = 0, B = 0, C = 0;
    do {
        printf("Vote for candidate (A, B, C) or 0 to finish: ");
        scanf(" %c", &vote);

        if (vote == 'A' || vote == 'a')
            A++;
        else if (vote == 'B' || vote == 'b')
            B++;
        else if (vote == 'C' || vote == 'c')
            C++;
        else if (vote != '0')
            printf("Invalid vote! Try again.\n");

    } while (vote != '0');

    printf("\n--- Voting Results ---\n");
    printf("A: %d votes\n", A);
    printf("B: %d votes\n", B);
    printf("C: %d votes\n", C);

    printf("\n--- Winner ---\n");
    if (A > B && A > C)
        printf("Winner: A\n");
    else if (B > A && B > C)
        printf("Winner: B\n");
    else if (C > A && C > B)
        printf("Winner: C\n");
    else
        printf("Result: Tie\n");

    return 0;
}