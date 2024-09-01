 #include <stdio.h>
struct Person {
    int n;
};
void printnumber(struct Person *p) {
    printf("square of n is %d",p->n*p->n);
}

int main() {
    struct Person o; 
    scanf("%d",&o.n);
    printnumber(&o);
    return 0;
}
