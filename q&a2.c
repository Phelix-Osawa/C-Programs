#include <stdio.h>

struct Employee {
        char name[25];
        int id;
        char department[20];
        float salary;
        char email[50];
    };
    
int main() {
    struct Employee employee = {
        "John Doe",
        12345,
        "Human Resources",
        55000.50,
        "john.doe@company.com"
    };
     printf("Employee Details\n");
     printf("Name: %s\n", employee.name);
     printf("ID: %d\n", employee.id);
     printf("Department: %s\n", employee.department);
     printf("Salary: %.2f\n", employee.salary);
     printf("Email: %s\n", employee.email);
     
     return 0;
}