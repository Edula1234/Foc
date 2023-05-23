#include <stdio.h>

// Define the union for employee details
union Employee {
    int empId;
    float empSalary;
    char empName[20];
};

int main() {
    union Employee employee;

    // Getting employee details from the user
    printf("Enter employee ID: ");
    scanf("%d", &employee.empId);

    printf("Enter employee salary: ");
    scanf("%f", &employee.empSalary);

    printf("Enter employee name: ");
    scanf("%s", employee.empName);

    // Printing employee details
    printf("\nEmployee Details:\n");
    printf("ID: %d\n", employee.empId);
    printf("Salary: %.2f\n", employee.empSalary);
    printf("Name: %s\n", employee.empName);

    return 0;
}
//output 
Enter employee ID: 101
Enter employee salary: 5000.50
Enter employee name: John Doe

Employee Details:
ID: 101
Salary: 5000.50
Name: John
