//Example 18: Pointers to Functions
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

void die(const char *message) {
    if(errno) {
        perror(message);
    } else {
        printf("ERROR: %s\n", message);
    }
    exit(1);
}

//Typedef to create a fake type (in this case, for a function pointer)
typedef int(*compare_cb)(int a, int b);

//Classic bubble sort function
int *bubble_sort(int *numbers, int count, compare_cb cmp) {
    int temp = 0;
    int i = 0;
    int j = 0;
    int *target = malloc( count * sizeof(int));

    if(!target) die("Memory error.");

    memcpy(target, numbers, count * sizeof(int));

    for(i = 0; i < count; i++) {
        for(j = 0; j < count - 1; j++) {
            if(cmp(target[j], target[j+1]) > 0) {
                temp = target[j + 1];
                target[j + 1] = target[j];
                target[j] = temp;
            }
        }
    }
    return target;
}

int sorted_order(int a, int b) {
    return a - b;
}

int reverse_order(int a, int b) {
    return b - a;
}

//Test function: ensure that sorting is correct.
void test_sorting(int *numbers, int count, compare_cb cmp) {
    int i = 0;
    int *sorted = bubble_sort(numbers, count, cmp);
    if(!sorted) die("Failed to sort as requested.");
    for(i = 0; i < count; i++) {
        printf("%d ", sorted[i]);
    }
    printf("\n");
    free(sorted);
}

//Main function
int main(int argc, char *argv[]) {
    if(argc < 2) die("USAGE: ex18 4 3 1 5 6");
    int count = argc - 1;
    int i = 0;
    char **inputs = argv + 1;

    int *numbers = malloc(count * sizeof(int));
    if(!numbers) die("Memory error.");

    for(i = 0; i < count; i++) {
        numbers[i] = atoi(inputs[i]);
    }

    test_sorting(numbers, count, sorted_order);
    test_sorting(numbers, count, reverse_order);
    test_sorting(numbers, count, strange_order);

    free(numbers);

    return 0;
}


/* Functions in C are actually just pointers to a spot in the program where
some code exists. Just like you've been creating pointers to structs,
strings, and arrays, you can point a pointer at a function too. The main
use for this is to pass "callbacks" to other functions, or to simulate
classes and objects. In this exercise we'll do some callbacks, and in the
next one we'll make a simple object system.

The format of a function pointer goes like this:
int (*POINTER_NAME)(int a, int b)

A way to remember how to write one is to do this:
Write a normal function declaration: int callme(int a, int b)
Wrap function name with pointer syntax: int (*callme)(int a,
int b)
Change the name to the pointer name: int (*compare_cb)(int
a, int b)

The key thing to remember is, when you're done with this, the variable
name for the pointer is called compare_cb and then you use it just like it's
a function. This is similar to how pointers to arrays can be used just like
the arrays they point to. Pointers to functions can be used like the
functions they point to but with a different name.

int (*tester)(int a, int b) = sorted_order;
printf("TEST: %d is same as %d\n", tester(2, 3),
sorted_order(2, 3));

This will work even if the function pointer returns a pointer to something:
Write it: char *make_coolness(int awesome_levels)
Wrap it: char *(*make_coolness)(int awesome_levels)
Rename it: char *(*coolness_cb)(int awesome_levels)
*/