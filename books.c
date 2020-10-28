#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "books.h"

struct book *new_book(char *title, int page) {
    struct book *nu;
    nu = malloc( sizeof(struct book) );
    strncpy(nu->title, title, sizeof(nu->title)-1);
    nu->page = page;

    return nu;  
}

void modify_book(struct book *p){
    p->page++;
}

void print_book(struct book *p){
    printf("Username: %s\n", p->title);
    printf("Username: %d\n", p->page);
}