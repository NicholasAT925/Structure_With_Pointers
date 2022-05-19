#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Function Declerations */

/* Global Variables */

/* Structure decleration */
struct date{
    int day;
    int month;
    int year;
};
struct intPtr{
    int *p1;
    int *p2;
};
int main(){
    /* Initializing Global Variables */

    /* to use pointer to dereference a struct */
    struct date today, secondDay, *ptr_today, *datePtr;

    ptr_today = &today;
    ptr_today->day = 5;
    ptr_today->month = 6;
    ptr_today->year = 22;

    printf("\nTodays date is %d/%d/%.d\n\n", ptr_today->month, ptr_today->day, ptr_today->year);
    printf("\nTodays date is %d/%d/%.d\n\n", ptr_today->month, ptr_today->day, ptr_today->year);
    /* indirect access member of structure */
    datePtr = &secondDay;
    (*datePtr).day = 15;
    (*datePtr).month = 4;
    (*datePtr).year = 22;
    printf("2nd day date is access through indirection and is = %d/%d/%d\n\n", (*datePtr).day, (*datePtr).month, (*datePtr).year);
    /* printing and accessing the member dat using '->' operator */
    printf("printing using the '->' operator\n");
    printf("2nd day date is access through indirection and is = %d/%d/%d\n\n", datePtr->day, datePtr->month, datePtr->year);

    /* pointers in the struct */
    int a = 100, b;

    /* create struct that has pointers as members */
    struct intPtr structPointer;
    structPointer.p1 = &a;
    structPointer.p2 = &b;
    *structPointer.p2 = 20;
    printf("a = %d *structPointer.p1 = %d\n", a, *structPointer.p1);
    printf("b = %d *structPointer.p2 = %d\n", b, *structPointer.p2);
    
    return 0;
}

/* Function Details */