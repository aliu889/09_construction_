#ifndef BOOK_CHAPTER
#define BOOK_CHAPTER

struct book {
    char title[256];
    int page; 
};

struct book *new_book(char *title, int page);
void modify_book(struct book *p);
void print_book(struct book *p);

#endif