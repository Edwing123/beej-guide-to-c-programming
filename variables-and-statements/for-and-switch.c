/*
    @author Edwing123

    Learning about the `for` and `switch` flow-control
    constructs.
*/

#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>

int main(void) {
    bool should_do_for = false;
    bool should_do_switch = true;

    if (should_do_for)
    {
        // The `for` construct is a looping facility
        // similar to `while`, the difference lays in that
        // this construct is commonly used in situations
        // where the iterations count is finite: that is,
        // there is a guaranteed expected finalization of the loop.

        // For example, show the numbers from 1 to 9 (inclusive).
        for (int i = 1; i <= 9; i++) {
            printf("The value is %d.\n", i);
        }

        // A `for` loop consists of three optional parts separated by semicolons:
        // - The initialization part.
        // - The loop condition part.
        // - The after-iteration code.

        // Yeah, they are optional:
        for(;;) {  // "forever"
            printf("I will print this again and again and again\n" );
            printf("for all eternity until the heat-death of the universe.\n");
            printf("Or until you hit CTRL-C.\n");
        }
    }

    if (should_do_switch)
    {
        // Ask for user input.
        int age;

        printf("Enter your age:\n");
        scanf("%d", &age);

        switch (age) {
            case 0:
                printf("You don't exist.\n");
                break;

            case 22:
                printf("Aha! You are 22 years old.\n");
                break;

            default:
                printf("Okay, you are %d.\n", age);
                break;
        }

        // Switch statements work with integers, and according to the book, it's
        // not recommended to switch on floats and strings.

        // We can switch on chars though.
        char token = '{';

        switch (token) {
            case '{':
                printf("We found a left curly brace.\n");
                break;

            default:
                printf("I don't know this char.\n");
                break;
        }

        // This is a simple example. I'll eventually create more examples
        // that involve more logic, for example, we could iterate over an array
        // of previously lexed tokens and get print each with a custom message.
        char tokens[5];
        tokens[0] = '1';
        tokens[1] = '+';
        tokens[2] = '2';
        tokens[3] = '-';
        tokens[4] = '3';

        size_t tokens_len = 5;

        for (int i = 0; i < tokens_len; i++) {
            char token = tokens[i];

            switch (token) {
                case '0':
                case '1':
                case '2':
                case '3':
                    printf("The token is an integer: %d.\n", (token - '0'));
                    break;
                
                case '+':
                case '-':
                    char *operator = token == '+' ? "+" : "-";
                    printf("The token is an arithmetric operator: %s.\n", operator);
                    break;
                
                default:
                    printf("Unknown token type: %d.\n", token);
                    break;
            }
        }
    }
}
