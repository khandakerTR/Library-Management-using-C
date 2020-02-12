#include<stdio.h>
#include<string.h>

struct library
{
    char book_name[1000];
    char wri_name[1000];
    char edition[100];
    float price;
    int isbn;
    int lcode;

};

void input (struct library book[],int n)
{
    int i ;
    for(i=0; i<n; i++)
    {
        printf("Book NO. %d :\n",i+1);
        printf("Enter book's name : ");
        getchar();
       gets(book[i].book_name);
        printf("Enter writer's name : ");
        gets(book[i].wri_name);
        printf("Enter edtion : ");
        gets(book[i].edition);
        printf("Enter price : ");
        scanf("%f",&book[i].price);
        printf("Enter ISBN : ");
        scanf("%d",&book[i].isbn);
        printf("Enter Librarycode : ");
        scanf("%d",&book[i].lcode);
        printf("\n");


    }
}
/*void output(struct library book[],int n)
{
    int i ;
    printf("book's all information\n\n");
    printf("Name__Writer name__edtion___price___isbn___lcode\n");
    for(i=0; i<n; i++)
    {
        printf("%s -%s - %s - %.2f - %d - %d\n",book[i].book_name,book[i].wri_name,book[i].edition,book[i].price,book[i].isbn,book[i].lcode);
    }
}*/

void book_namesort(struct library book[], int n)
{
    int i,j;
    struct library temp;
    for(i=0; i<n-1; i++)
        for(j=0; j<n-1; j++)
        if (strcmp(book[j].book_name,book[j+1].book_name)>0)
        {
            strcpy(temp.book_name,book[j].book_name);
            strcpy(temp.wri_name,book[j].wri_name);
            strcpy(temp.edition,book[j].edition);
            temp.price=book[j].price;
            temp.isbn=book[j].isbn;
            temp.lcode=book[j].lcode;

            strcpy(book[j].book_name,book[j+1].book_name);
            strcpy(book[j].wri_name,book[j+1].wri_name);
            strcpy(book[j].edition,book[j+1].edition);
            book[j].price=book[j+1].price;
            book[j].isbn=book[j+1].isbn;
            book[j].lcode=book[j+1].lcode;

            strcpy(book[j+1].book_name,temp.book_name);
            strcpy(book[j+1].wri_name,temp.wri_name);
            strcpy(book[j+1].edition,temp.edition);
            book[j+1].price=temp.price;
            book[j+1].isbn=temp.isbn;
            book[j+1].lcode=temp.lcode;

        }
        printf("\n\n :: According to BOOK's NAME ::\n\n");
     printf("Book's Name__Writer's name__Edtion___Price___ISBN___lcode\n");
    for(i=0; i<n; i++)
    {
        printf("%s---%s---%s---%.2f---%d---%d\n",book[i].book_name,book[i].wri_name,book[i].edition,book[i].price,book[i].isbn,book[i].lcode);
    }


}

void wri_namesort(struct library book[], int n)
{
    int i,j;
    struct library temp;
    for(i=0; i<n-1; i++)
        for(j=0; j<n-1; j++)
        {
            if (strcmp(book[j].wri_name,book[j+1].wri_name)>0)
            {
            strcpy(temp.book_name,book[j].book_name);
            strcpy(temp.wri_name,book[j].wri_name);
            strcpy(temp.edition,book[j].edition);
            temp.price=book[j].price;
            temp.isbn=book[j].isbn;
            temp.lcode=book[j].lcode;

            strcpy(book[j].book_name,book[j+1].book_name);
            strcpy(book[j].wri_name,book[j+1].wri_name);
            strcpy(book[j].edition,book[j+1].edition);
            book[j].price=book[j+1].price;
            book[j].isbn=book[j+1].isbn;
            book[j].lcode=book[j+1].lcode;

            strcpy(book[j+1].book_name,temp.book_name);
            strcpy(book[j+1].wri_name,temp.wri_name);
            strcpy(book[j+1].edition,temp.edition);
            book[j+1].price=temp.price;
            book[j+1].isbn=temp.isbn;
            book[j+1].lcode=temp.lcode;

            }
        }
         printf("\n\n :: According to Writer's NAME ::\n\n");
          printf("Writer's name__Book's Name__Edtion___Price___ISBN___Library's Code\n");
    for(i=0; i<n; i++)
    {
        printf("%s---%s---%s---%.2f---%d---%d\n",book[i].wri_name,book[i].book_name,book[i].edition,book[i].price,book[i].isbn,book[i].lcode);
    }

}
void psort(struct library book[],int n)
{
    int i,j;
    struct library temp;
    for(i=0; i<n-1; i++)
        for(j=0; j<n-1; j++)
    {
        if (book[j].price>book[j+1].price)
        {
            strcpy(temp.book_name,book[j].book_name);
            strcpy(temp.wri_name,book[j].wri_name);
            strcpy(temp.edition,book[j].edition);
            temp.price=book[j].price;
            temp.isbn=book[j].isbn;
            temp.lcode=book[j].lcode;

            strcpy(book[j].book_name,book[j+1].book_name);
            strcpy(book[j].wri_name,book[j+1].wri_name);
            strcpy(book[j].edition,book[j+1].edition);
            book[j].price=book[j+1].price;
            book[j].isbn=book[j+1].isbn;
            book[j].lcode=book[j+1].lcode;

            strcpy(book[j+1].book_name,temp.book_name);
            strcpy(book[j+1].wri_name,temp.wri_name);
            strcpy(book[j+1].edition,temp.edition);
            book[j+1].price=temp.price;
            book[j+1].isbn=temp.isbn;
            book[j+1].lcode=temp.lcode;


        }
    }
    printf("\n\n :: According to Price's Rate ::\n\n");
    printf("Price___Book's Name___Writer's name____edtion___ISBN___Library's Code\n");
     for(i=0; i<n; i++)
    {
        printf("%.2f---%s---%s---%s---%d---%d\n",book[i].price,book[i].book_name,book[i].wri_name,book[i].edition,book[i].isbn,book[i].lcode);
    }
}

void lcodesort(struct library book[],int n)
{
    int i,j;
    struct library temp;
    for(i=0; i<n-1; i++)
        for(j=0; j<n-1; j++)
    {
        if (book[j].lcode>book[j+1].lcode)
        {
            strcpy(temp.book_name,book[j].book_name);
            strcpy(temp.wri_name,book[j].wri_name);
            strcpy(temp.edition,book[j].edition);
            temp.price=book[j].price;
            temp.isbn=book[j].isbn;
            temp.lcode=book[j].lcode;

            strcpy(book[j].book_name,book[j+1].book_name);
            strcpy(book[j].wri_name,book[j+1].wri_name);
            strcpy(book[j].edition,book[j+1].edition);
            book[j].price=book[j+1].price;
            book[j].isbn=book[j+1].isbn;
            book[j].lcode=book[j+1].lcode;

            strcpy(book[j+1].book_name,temp.book_name);
            strcpy(book[j+1].wri_name,temp.wri_name);
            strcpy(book[j+1].edition,temp.edition);
            book[j+1].price=temp.price;
            book[j+1].isbn=temp.isbn;
            book[j+1].lcode=temp.lcode;
        }
    }
    printf("\n\n :: According to Library's Code ::\n\n");
          printf("L.Code___Book's Name__Writer's name__Edtion___Price___ISBN\n");
    for(i=0; i<n; i++)
    {
        printf("%d-----%s-----%s-----%s-----%.2f----%d\n",book[i].lcode,book[i].book_name,book[i].wri_name,book[i].edition,book[i].price,book[i].isbn);
    }

}
int main ()
{
    int n;
    printf("How many books you want to store : ");
    scanf("%d",&n);
    printf("***Enter All book's information***\n\n");

    struct library book[n];

    input(book,n);
  book_namesort(book,n);


    return 0;

}

