#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
using namespace std;

struct items {
    char name[50];
    float rating;
    float price;
    int food_Id_No;
    struct items* next;
    struct items* prev;
};

struct order_hist {
    int customer_ID;
    int items[10][2];
    float amount;
    char date[11];
    struct order_hist* next;
    struct order_hist* prev;
};

struct items* head;
struct items* last;
struct order_hist* head1;
struct order_hist* last1;
int cust_id = 1, Today_customer = 0;
float total_income = 0;

struct items* getnewNode(char a[], float p, int fin) {
    struct items* temp = new struct items;
    temp->food_Id_No = fin;
    strcpy(temp->name, a);
    temp->rating = 4.0;
    temp->price = p;
    temp->next = nullptr;
    temp->prev = nullptr;
    return temp;
}

void insert(char n[], float p, int fin) {
    struct items* temp1 = getnewNode(n, p, fin);
    if (head == nullptr) {
        head = temp1;
        last = temp1;
    }
    else {
        temp1->prev = last;
        last->next = temp1;
        last = temp1;
    }
}

struct order_hist* getnewNode_hist() {
    struct order_hist* temp = new struct order_hist;
    temp->next = nullptr;
    temp->prev = nullptr;
    return temp;
}

void display() {
    cout << "\n***** MENU *****\n";
    cout << "INDEX items NAME PRICE RATING \n";
    struct items* temp = head;
    if (head == nullptr) {
        cout << "Empty\n";
    }
    while (temp != nullptr) {
        cout << temp->food_Id_No << "\t" << temp->name << "\t" << temp->price << "\t" << temp->rating << endl;
        temp = temp->next;
    }
    cout << "\n-------------------------------------------------------------------------------------------------\n";
}

void option() {
    cout << "hi, I was missing" << endl;
}

int login() {
    char username[20];
    char userpwd[10];
    int i;
    cout << "Enter your username: ";
    cin >> username;
    cout << endl;
    for (i = 0; i < 8; i++) {
        userpwd[i] = _getch();
        cout << "*";
    }
    userpwd[i] = '\0';

    if (!strcmp(username, "Admin") && !strcmp(userpwd, "12345678")) {
        cout << "\n \n Logged in Successfully\n";
        return 1;
    }
    else {
        cout << "\n \n Incorrect username or password\n";
        return 0;
    }
}

void order() {
    cout << "\n";
    cout << "1. Burger            70.00\n";
    cout << "2. Pizza            280.00\n";
    cout << "3. Hot Cake          750.00\n";
    cout << "4. Coffee            100.00\n";
    cout << "5. Ice-Cream         50.00\n";
    cout << "6. Sandwich          60.00\n";
    cout << "7. Grill             100.00\n";
    cout << "8. Nun               30.00\n";
    cout << "9. Cold Drink        20.00\n\n";
    int a[10][2];
    int n, j = 0, i = 0;

    do {
        cout << "Please enter the FOOD IF NUMBER OF items AND ITS QUANTITY: ";
        for (i = 0; i < 2; i++) {
            cin >> a[j][i];
        }
        j++;
        cout << "Do you want to add more items?\n 1. Yes\n 2. No\n";
        cin >> n;
    } while (n == 1);

    float total_amount = 0.0;
    char name[25];
    char Date[10];
    cout << "Enter your Name: ";
    cin >> name;
    cout << "Enter Today's Date: ";
    cin >> Date;

    int k = 0;
    cout << "\n-----------------------------------------------------------------------------------------------\n";
    cout << "\n                                   MOMO IN Restuarant                                     \n";
    cout << "\n                                       BILL -> " << name << "                                          \n";
    cout << "\n-----------------------------------------------------------------------------------------------\n";
    cout << "Name: " << name << endl;
    cout << "Date: " << Date << endl;

    for (k = 0; k < j; k++) {
        struct items* temp = head;
        while (temp->food_Id_No != a[k][0]) {
            temp = temp->next;
        }
        cout << "\n----------------------------------------------------------------------------------------------\n";
        cout << temp->food_Id_No << "\t" << temp->name << "\t" << a[k][1] << "\t\t" << (a[k][1] * (temp->price));
        total_amount = total_amount + (a[k][1] * (temp->price));
    }

    cout << "\n----------------------------------------------------------------------------------------------\n";
    cout << "\nTotal Payable amount is: " << total_amount << endl;
    cout << "------------------------------------------------------------------------------------------------\n";

    struct order_hist* temp2 = getnewNode_hist();
    temp2->amount = total_amount;
    temp2->customer_ID = cust_id++;

    int p, s;
    for (p = 0; p < j; p++) {
        for (s = 0; s < 2; s++) {
            temp2->items[p][s] = a[p][s];
        }
    }

    if (head1 == nullptr) {
        head1 = last1 = temp2;
    }
    else {
        last1->next = temp2;
        temp2->prev = last1;
        last1 = temp2;
    }

    strcpy(temp2->date, Date);
    Today_customer++;
    total_income += total_amount;
}

void display_rd_hist() {
    cout << "                                    -------------                                              \n";
    cout << "                                    ORDER HISTORY                                              \n";
    cout << "                                    -------------                                              \n";
    cout << "SR_NO     DATE     TOTAL AMOUNT\n";
    struct order_hist* temp = head1;
    if (head1 == nullptr) {
        cout << "No history available";
    }
    else {
        while (temp->next != nullptr) {
            cout << temp->customer_ID << "\t" << temp->date << "\t" << temp->amount << "\t" << endl;
            temp = temp->next;
        }
    }
}

void Log() {
    cout << "\n";
    int k = login();

    if (k == 1) {
        do {
            cout << "\n---------------------------------------------------------------------------------\n";
            cout << "1.          ADD NEW DISH\n";
            cout << "2.          TODAY'S TOTAL INCOME\n";
            cout << "3.          TODAY'S TOTAL NO OF CUSTOMER\n";
            cout << "4.          ORDER HISTORY\n";
            cout << "5.          LIST OF items\n";
            cout << "6.          MAIN MENU\n";
            cout << "\n---------------------------------------------------------------------------------\n";
            int ch;
            cin >> ch;
            switch (ch) {
            case 1:
                cout << " ";
                float p;
                int fin;
                char n[50];

                cout << "Enter the name of items: ";
                cin >> n;
                cout << "Enter the price of items: ";
                cin >> p;
                cout << "Enter the food_Id_No of items: ";
                cin >> fin;
                insert(n, p, fin);
                cout << "\n--------------------------------------------------------------------------------\n";
                cout << "                         NEW DISH IS ADDED SUCCESSFULLY........\n";
                cout << "\n--------------------------------------------------------------------------------\n";
                break;
            case 2:
                cout << "\n--------------------------------------------------------------------------------\n";
                cout << "                         TODAY'S TOTAL INCOME IS: " << total_income << endl;
                cout << "\n--------------------------------------------------------------------------------\n";
                break;
            case 3:
                cout << "\n--------------------------------------------------------------------------------\n";
                cout << "                         TODAY TOTAL NO OF CUSTOMERS VISITED ID: " << Today_customer << endl;
                cout << "\n--------------------------------------------------------------------------------\n";
                break;
            case 4:
                cout << "\n--------------------------------------------------------------------------------\n";
                cout << "                         ORDER SUMMARY........\n";
                cout << "\n--------------------------------------------------------------------------------\n";
                display_rd_hist();
                cout << "\n";
                break;
            case 5:
                display();
                break;
            case 6:
                option();
                break;
            default:
                cout << "\nWrong choice\n";
                break;
            }
        } while (1);
    }
}

int main() {
    head = nullptr;
    last = nullptr;
    head1 = nullptr;
    last1 = nullptr;
    insert("Burger", 70.0, 1);
    insert("Pizza", 280.0, 2);
    insert("Hot Cake", 750.0, 3);
    insert("Coffee", 100.0, 4);
    insert("Ice-Cream", 50.0, 5);
    insert("Sandwich", 60.0, 6);
    insert("Grill", 100.0, 7);
    insert("Nun", 30.0, 8);
    insert("Cold Drink", 20.0, 9);
    int ch;
    do {
        cout << "********** Welcome to MOMO IN **********\n";
        cout << "\n1.          MENU\n";
        cout << "2.          LOGIN\n";
        cout << "3.          EXIT\n";
        cout << "\nEnter your choice: ";
        cin >> ch;
        switch (ch) {
        case 1:
            display();
            break;
        case 2:
            Log();
            break;
        case 3:
            exit(0);
            break;
        default:
            cout << "\nWrong choice\n";
            break;
        }
    } while (1);

    return 0;
}
