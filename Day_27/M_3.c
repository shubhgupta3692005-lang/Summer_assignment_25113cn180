#include <stdio.h>
int main() 
{
    int emp_id;
    char emp_name[30];
    float base_salary, allowance, deduction, net_salary;
    printf("Enter Employee ID: ");
    scanf("%d", &emp_id);
    printf("Enter Employee Name: ");
    scanf("%s", emp_name);
    printf("Enter Base Salary: ");
    scanf("%f", &base_salary);
    printf("Enter Allowance: ");
    scanf("%f", &allowance);
    printf("Enter Deduction: ");
    scanf("%f", &deduction);
    net_salary = base_salary + allowance - deduction;
    printf("\n=============================\n");
    printf("         SALARY SLIP         \n");
    printf("=============================\n");
    printf("ID          : %d\n", emp_id);
    printf("Name        : %s\n", emp_name);
    printf("Base Salary : $%.2f\n", base_salary);
    printf("Allowance   : $%.2f\n", allowance);
    printf("Deduction   : $%.2f\n", deduction);
    printf("-----------------------------\n");
    printf("Net Salary  : $%.2f\n", net_salary);
    return 0;
}