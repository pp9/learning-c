#include <stdio.h>
#define LINE "__________"
#define TITLE "This is page title"

#ifdef _WIN32
#define SYSTEM "Windows"
#endif

#ifdef linux
#define SYSTEM "Linux"
#endif


int addInt(int n, int m)
{
  return n + m;
}

struct coord
{
  int x;
  int y;
} point;

// struct coord top;
typedef struct
{
  int x;
  int y;
} Point;

typedef struct
{
  Point a;
  Point b;
} Box;

Box rect = {6, 12, 30, 20};

Point top = {12, 24};
Point btm;

int main(int argc, char *argv[])
{

    enum SNOOKER {RED=1, YELLOW, BLUE};
    enum SNOOKER pair = RED + BLUE;
    typedef unsigned short int USINT;
    float d = 5 % 2;



    int (*funcPtr)(int, int);
    funcPtr = &addInt;

    int sum = (*funcPtr)(2,3);

    int n = 10;
    int* p = &n;

    char *c = "abc";

    // printf("%c\n", *c);

    point.x = 10;
    point.y = 101;

    top.x = 150;

    btm.x = 5;
    btm.y = 10;

    char str[50];
    // puts()

    FILE *fl;
    int i;

    char myStr[50];
    printf("%s\n", "Enter a string");
    gets(myStr);
    puts(myStr);

    // fl = fopen("main.js", "r");
    // while(1)
    // {
    //     char c = fgetc(fl);
    //     if(c == EOF)
    //     {
    //         break;
    //     }
    //     printf("%c\n", c);
    // }
    // fclose(fl);

    // printf("%d\n", rect.a.y);


    // printf("%d\n", sum);

    // pointers
    // int i;
    // int nums[5] = {2, 5, 10, 11, 1};
    //
    // int *ptr0 = &nums[0];
    // int *ptr1 = &nums[1];
    // int *ptr2 = &nums[2];
    // int *ptr3 = &nums[3];
    // int *ptr4 = &nums[4];
    //
    //
    // int *ptrs[5] = {ptr0, ptr1, ptr2, ptr3, ptr4};
    //
    // char str[9] = {'C', ' ', 'i', 's', ' ', 'F', 'u', 'n', '\0'};
    //
    // char *string = str;
    //
    // char *strings[2] = {"Alpha", "Betta"};
    //
    // for(i = 0; i < 5; i++)
    // {
    //   printf("The valie at %p is:  %d\n", ptrs[i], *ptrs[i]);
    // }
    // printf("\n String is %s\n", string);
    //
    // for(i = 0; i< 2; i++)
    // {
    //   printf("%s\n", strings[i]);
    // }

    // twice(ptr);
    // thrice(ptr);

    // printf("%d\n", num);



    // USINT i = 159;

    // int i;

    // int nums[7] = {5, 10, 1, 7, 12, 2, 7};

    // int *ptr = nums;

    // printf("%d\n", *ptr);

    // ptr++;
    // printf("%d\n", *ptr);

    // ptr -= 1;
    // printf("%d\n", *ptr);

    // for(i = 0; i < 7; i++)
    // {
    //   printf("%d\n", *ptr);
    //   ptr++;
    // }

    // int num = 8;
    // char ch = 'B';
    //
    // int *ptr = &num;


    // printf("%d\n", num);
    // printf("0x%p\n", ptr);
    // printf("%d\n", *ptr);
    //
    // *ptr = 12;
    // printf("%d\n", num);
    // printf("0x%p\n", ptr);
    // printf("%d\n", *ptr);


    return 0;
}

void twice(int *number)
{
  *number = (*number * 2);
}

void thrice(int *number)
{
  *number = (*number * 3);
}
