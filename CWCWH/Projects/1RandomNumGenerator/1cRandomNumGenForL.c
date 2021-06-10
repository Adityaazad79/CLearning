/* Problem: This is going to be fun!! We will write a program that generates a random number and asks the player to
guess it. If the player’s guess is higher than the actual number, the program displays “Lower number please.” Similarly, if
the user’s guess is too low, the program prints “Higher number please.”
When the user guesses the correct number, the program displays the number of guesses the player used to arrive at the number.

Hints:
* Use loops
* Use a random number generator. */

// Here I'm generating number from 1 to 100.
// Using 'for' loop.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, d; //n = Random Number ; d = User Entered Number ; t = No of chance(s) taken to to guess the number.
    srand(time(0));
    n = rand() % 100;
    // printf("%d\n", n);

    printf("Emter the number\n");
    for (int t = 1; n != d; t++)
    {
        scanf("%d", &d);
        if (n < d)
        {
            printf("Lower number please\n");
        }
        else if (n > d)
        {
            printf("Higher number please\n");
        }
        else if (t == 1)
            printf("You gussed the right number in 1 attempt.\n");
        else
            printf("You gussed the right number in %d attempts.\n", t);
    }

    return 0;
}