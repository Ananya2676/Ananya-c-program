 #include <stdio.h>
struct Person {
    char name[50];
    int age;
    char ed[50];
    float weg,hig;
};
void printPersonDetails(struct Person *p) {
    printf("Name: %s\n", p->name);
    printf("Age: %d\n", p->age);
    printf("educational qualification: %s\n", p->ed);
    printf("Weight: %.2f kg\n", p->weg);
    printf("Height: %.2f m\n", p->hig);
}

int main() {
    struct Person p; 
    printf("enter the name:\n");
    scanf("%s",p.name);
    printf("enter the age:\n");
    scanf("%d",&p.age);
    printf("enter the educational qualification:\n");
    scanf("%s",p.ed);
    printf("enter the weight:\n");
    scanf("%f",&p.weg);
    printf("enter the height:\n");
    scanf("%f",&p.hig);
    printPersonDetails(&p);

    return 0;
}
