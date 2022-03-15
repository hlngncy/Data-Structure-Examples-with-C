#include <cstdio>
#include <cstring>
#include <cstdlib>

typedef struct{
    char name[30];
}type;
typedef struct{
    char name[30];
    char author[30];
    int pageNum;
    type type;
}book;

int main(){
    book book1;
    strcpy(book1.name, "Codex Leicester");
    strcpy(book1.author, "Leonarda da Vinci");
    book1.pageNum = 72;
    strcpy(book1.type.name, "geology,hidrolics,astronomy");
    printf("Book details\nName: %s\nAuthor: %s\nPage Number: %d\nIncludes: %s",book1.name,book1.author,book1.pageNum,book1.type);
    return 0;
}
