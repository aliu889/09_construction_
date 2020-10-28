#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "books.h"

int main(){
    struct book *Alice_in_Wonderland;

    char *title = "Alice in Wonderland";
    int page;

    srand(time(NULL));
    page = rand();

    Alice_in_Wonderland = new_book(title, page);
    print_book(Alice_in_Wonderland);

    printf("Next page:\n");
    modify_book(Alice_in_Wonderland);

    print_book(Alice_in_Wonderland);

    free(Alice_in_Wonderland);
    return 0;
}