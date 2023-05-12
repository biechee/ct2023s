#include<stdio.h>
int main(){
    Point A;
    Point *p = &A;
    p->x = 6;
    p->y = 6;
    printf("(%d, %d)",p->x, p->y);
    return 0;
}