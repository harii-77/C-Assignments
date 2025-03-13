#include <stdio.h>
#include <stdlib.h>
struct Customer {
    char name[50];
    int accountNumber;
    float bankBalance;
};

void initializeCustomer(struct Customer *customer, char* name, int accNum, float bBalance);
void displayCustomerDetails(struct Customer *customer);
void strCopy(char* dest, char* src);
void searchCustomer(struct Customer customers[], int numCustomers, int accNum);
void addCustomer(struct Customer customers[], int *numCustomers);
void deleteCustomer(struct Customer customers[], int *numCustomers, int accNum);
void deposit(struct Customer customers[], int numCustomers, int accNum, float amount);
void withdraw(struct Customer customers[], int numCustomers, int accNum, float amount);

int main() {
    struct Customer customers[100]; 
    int numCustomers = 0; 
    int choice;

    while (1) {
        printf("---------------------------\n");
        printf("1. Add Customer\n");
        printf("2. Delete Customer\n");
        printf("3. Search Customer\n");
        printf("4. Deposit\n");
        printf("5. Withdraw\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addCustomer(customers, &numCustomers);
                break;
            case 2:
                int accNum;
                printf("Account Num: ");
                scanf("%d", &accNum);
                deleteCustomer(customers, &numCustomers, accNum);
                break;
            case 3:
                printf("Account Num: ");
                scanf("%d", &accNum);
                searchCustomer(customers, numCustomers, accNum);
                break;
            case 4:
                printf("Account Num: ");
                scanf("%d", &accNum);
                float amount;
                printf("Amount Num: ");
                scanf("%f", &amount);
                deposit(customers, numCustomers, accNum, amount);
                break;
            case 5:
                printf("Account num: ");
                scanf("%d", &accNum);
                printf("Amount: ");
                scanf("%f", &amount);
                withdraw(customers, numCustomers, accNum, amount);
                break;
            case 6:
                exit(0);
                break;
            default:
                printf("Invalid choice U_U\n");
        }
    }
    return 0;
}
void initializeCustomer(struct Customer *customer,char* name,int accNum,float bBalance) {
    strCopy(customer->name, name);
    customer->accountNumber =accNum;
    customer->bankBalance=bBalance;
}

void displayCustomerDetails(struct Customer *customer) {
    printf("NAme: %s\n", customer->name);
    printf("Accnt Num: %d\n", customer->accountNumber);
    printf("Bankbalance: %.2f\n", customer->bankBalance);
}

void strCopy(char* dest, char* src) {
    while (*src) {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

void searchCustomer(struct Customer customers[], int numCustomers, int accNum) {
    for (int i = 0; i < numCustomers; i++) {
        if (customers[i].accountNumber == accNum) {
            displayCustomerDetails(&customers[i]);
            return;
        }
    }
    printf("Customer not found :-(\n");
}

void addCustomer(struct Customer customers[], int *numCustomers) {
    char name[50];
    int accNum;
    float bBalance;

    printf("name: ");
    scanf("%s", name);
    printf("account number: ");
    scanf("%d", &accNum);
    printf("bank balance: ");
    scanf("%f", &bBalance);
    initializeCustomer(&customers[*numCustomers], name, accNum, bBalance);
    (*numCustomers)++;
    printf("new customer added!\n");
}

void deleteCustomer(struct Customer customers[],int *numCustomers,int accNum) {
    for (int i = 0; i < *numCustomers;i++) {
        if (customers[i].accountNumber ==accNum) {
            for (int j = i; j < *numCustomers - 1; j++) customers[j] = customers[j + 1];
            (*numCustomers)--;
            printf("customer deleted ):\n");
            return;
        }
    }
    printf("Customer not found ^_+\n");
}

void deposit(struct Customer customers[],int numCustomers,int accNum,float amount) {
    for (int i = 0; i < numCustomers; i++) {
        if (customers[i].accountNumber == accNum) {
            customers[i].bankBalance += amount;
            printf("deposit successful. new balance: %.2f\n",customers[i].bankBalance);
            return;
        }
    }
    printf("Customer not found :-O\n");
}

void withdraw(struct Customer customers[], int numCustomers,int accNum,float amount) {
    for (int i = 0; i < numCustomers; i++) {
        if (customers[i].accountNumber == accNum) {
            if (customers[i].bankBalance >= amount) {
                customers[i].bankBalance-= amount;
                printf("withdrawal successful.new balance: %.2f\n",customers[i].bankBalance);
            } else printf("Insufficient balance ):\n");
            return;
        }
    }
    printf("Customer not found :-O\n");
}