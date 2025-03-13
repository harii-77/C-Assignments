#include<stdio.h>
void calc(int salary, int isMetroCity);

int main(){
    int salary, isMetroCity;
    scanf("%d %d", &salary, &isMetroCity);
    calc(salary, isMetroCity);
    return 0;
}

void calc(int salary, int isMetroCity) {
    int DA, HRA, PF = 900, MA = 580, grossSalary;
    
    if(isMetroCity == 1)
        DA = 0.40 * salary;
    else if(isMetroCity == 0) 
        DA = 0.30 * salary;
    else
        printf("Invalid");

    HRA = 0.15 * salary;

    grossSalary = salary + DA + HRA - PF - MA;

    printf("DA: %d\nHRA: %d\nGross Salary: %d", DA, HRA, grossSalary);

}