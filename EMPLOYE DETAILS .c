#include <stdio.h>

struct employe {
    int employeID;
    char employename[50];
    float salary;
    char department[30];
};

   int main()
 {
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    struct employe em[n];

    for (i = 0; i < n; i++) {
        printf("Enter employee %d ID: ", i + 1);
        scanf("%d", &em[i].employeID);
        printf("Enter employee %d name: ", i + 1);
  scanf("%s", em[i].employename);
        printf("Enter employee %d salary: ", i + 1);
        scanf("%f", &em[i].salary);
        printf("Enter employee %d department: ", i + 1);
        scanf("%s", em[i].department);
}
struct employe highestsalary = em[0];
for (i = 1; i < n; i++) {
        if (em[i].salary > highestsalary.salary) {
            highestsalary = em[i];
        }
    }

    printf("The highest salary employee:\n");
    printf("Employee ID: %d\n", highestsalary.employeID);
    printf("Employee name: %s\n", highestsalary.employename);
    printf("Salary: %.2f\n", highestsalary.salary);
  printf("Department: %s\n", highestsalary.department);

    return 0;
}
