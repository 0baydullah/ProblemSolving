///........................................Header files starts here

#include "bits/stdc++.h"
#include "iostream"
#include "string"
#include "string.h"
using namespace std;

///.......................................Header files ends here

///.......................................Defination starts here

#define SP               <<" "
#define TB               <<"\t"
#define NL               <<"\n"

///.......................................Defination ends here



struct items
{
    char name[50];
    float rating;
    float price;
    int food_Id_No;
    struct items* next;
    struct items* prev;
};

struct order_hist
{
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

struct items* getnewNode(char a[], float p, int fin)
{
    struct items* temp = (struct items*)malloc(sizeof(struct items));
    temp->food_Id_No = fin;
    strcpy(temp->name, a);
    temp->rating = 4.0;
    temp->price = p;
    temp->next = NULL;
    temp->prev = NULL;
    return temp;
}

void insert(char n[], float p, int fin)
{
    struct items* temp1 = getnewNode(n, p, fin);
    if (head == NULL)
    {
        head = temp1;
        last = temp1;
    }
    else
    {
        temp1->prev = last;
        last->next = temp1;
        last = temp1;
    }
}

struct order_hist* getnewNode_hist()
{
    struct order_hist* temp = (struct order_hist*)malloc(sizeof(struct order_hist));
    temp->next = NULL;
    temp->prev = NULL;
    return temp;
}

void display()
{
    cout << endl << "***** MENU *****" << endl;
    cout << "INDEX  Items NAME        PRICE         RATING " << endl;
    struct items* temp = head;
    if (head == NULL)
    {
        cout << "Empty" << endl;
    }
    while (temp != NULL)
    {
      //  printf("%d\t %s\t %f\t %f\n", temp->food_Id_No, temp->name, temp->price, temp->rating);
      //  cout << temp->food_Id_No TB temp->name TB temp->price TB temp->rating << endl;
        cout << temp->food_Id_No << "\t\t" << temp->name << "\t\t" << temp->price << "\t\t" << temp->rating << std::endl;

        temp = temp->next;
    }
    cout << endl <<"-------------------------------------------------------------------------------------------------" << endl;
}

void option(){
    cout << "hi, i  was missing " << endl;
}

int login()
{
    char username[20];
    char userpwd[10];
    int i;
    cout << "Enter your username: ";
    //scanf("%s", username);
    cin >> username;
    //printf("\n");
    cout << endl;

    for (i = 0; i < 8; i++)
    {
        char false_char;
        cin >> false_char;
        userpwd[i] = false_char;
        cout << "*";
    }
    userpwd[i] = '\0';

    if (!strcmp(username, "Admin") && !strcmp(userpwd, "12345678"))
    {
       // printf("\n \n Logged in Successfully\n");
        cout << endl NL <<"Logged in Successfully" NL;
        return 1;
    }
    else
    {
        cout << endl NL "Incorrect username or password" NL;
        return 0;
    }
}


void order()
{
    // printf("\n");
    // printf("1. Burger            70.00\n");
    // printf("2. Pizza            280.00\n");
    // printf("3. Hot Cake          750.00\n");
    // printf("4. Coffee            100.00\n");
    // printf("5. Ice-Cream         50.00\n");
    // printf("6. Sandwich          60.00\n");
    // printf("7. Grill             100.00\n");
    // printf("8. Nun               30.00\n");
    // printf("9. Cold Drink        20.00\n\n");

    cout << endl;
    cout << "1. Burger            70.00" NL;
    cout << "2. Pizza            280.00" NL;
    cout << "3. Hot Cake          750.00" NL;
    cout << "4. Coffee            100.00" NL;
    cout << "5. Ice-Cream         50.00" NL;
    cout << "6. Sandwich          60.00" NL;
    cout << "7. Grill             100.00" NL;
    cout << "8. Nun               30.00" NL;
    cout << "9. Cold Drink        20.00" NL NL;

    int a[10][2];
    int n, j = 0, i = 0;

    do {
        cout << "Please enter the FOOD IF NUMBER OF items AND ITS QUANTITY: ";
        for (i = 0; i < 2; i++)
        {
            cin >> a[j][i];
        }
        j++;
        cout << "Do you want to add more items?\n 1. Yes\n 2. No" NL;
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


    // printf("\n-----------------------------------------------------------------------------------------------\n");
    // printf("\n                                   MOMO IN Restuarant                                     \n");
    // printf("\n                                       BILL -> %s                                          \n", name);
    // printf("\n-----------------------------------------------------------------------------------------------\n");
    // printf("Name: %s\n", name);
    // printf("Date: %s\n", Date);

    cout NL << "-----------------------------------------------------------------------------------------------" NL;
    cout NL << "                                   MOMO IN Restuarant                                     " NL;
    cout NL << "                                       BILL -> " << name << "                                          " NL;
    cout NL << "-----------------------------------------------------------------------------------------------" NL;
    cout NL << "Name: " << name NL;
    cout NL << "Date: " << Date NL;

    for (k = 0; k < j; k++)
    {
        struct items* temp = head;
        while (temp->food_Id_No != a[k][0])
        {
            temp = temp->next;
        }
        cout NL << "----------------------------------------------------------------------------------------------" NL;
        // printf("%d\t%s\t%d\t\t %f", temp->food_Id_No, temp->name, a[k][1], (a[k][1] * (temp->price)));
        cout << temp->food_Id_No TB << temp->name TB << a[k][1] TB TB << (a[k][1] * (temp->price));
        total_amount = total_amount + (a[k][1] * (temp->price));
    }

    cout NL << "----------------------------------------------------------------------------------------------" NL;
    cout NL << "Total Payable amount is: " << total_amount NL;
    cout NL << "------------------------------------------------------------------------------------------------" NL;

    struct order_hist* temp2 = getnewNode_hist();
    temp2->amount = total_amount;
    temp2->customer_ID = cust_id++;

    int p, s;
    for (p = 0; p < j; p++)
    {
        for (s = 0; s < 2; s++)
        {
            temp2->items[p][s] = a[p][s]; 
        }
    }

    if (head1 == NULL)
    {
        head1 = last1 = temp2;
    }
    else
    {
        last1->next = temp2;
        temp2->prev = last1;
        last1 = temp2;
    }

    strcpy(temp2->date, Date);
    Today_customer++;
    total_income += total_amount;
}

void display_rd_hist()
{
    cout << "                                    -------------                                              " NL;
    cout << "                                    ORDER HISTORY                                              " NL;
    cout << "                                    -------------                                              " NL;
    cout << "SR_NO     DATE     TOTAL AMOUNT" NL;
    struct order_hist* temp = head1;
    if (head1 == NULL)
    {
        cout << "No history available";
    }
    else
    {
        while (temp->next != NULL)
        {
           // printf("%d\t%s\t%f\t\n", temp->customer_ID, temp->date, temp->amount);
            cout << temp->customer_ID TB << temp->date TB << temp->amount TB NL;
            temp = temp->next;
        }
    }
}

void Log()
{
    cout NL;
    int k = login();

    if (k == 1)
    {
        do {
            cout NL << "---------------------------------------------------------------------------------" NL;
            cout << "1.          ADD NEW DISH" NL;
            cout << "2.          TODAY'S TOTAL INCOME" NL;
            cout << "3.          TODAY'S TOTAL NO OF CUSTOMER" NL;
            cout << "4.          ORDER HISTORY" NL;
            cout << "5.          LIST OF items" NL;
            cout << "6.          MAIN MENU" NL;
            cout NL << "---------------------------------------------------------------------------------" NL;
            int ch;
            cin >> ch;
            switch (ch)
            {
            case 1:
                cout SP;
                float p;
                int fin;
                char n[50];

                cout << "Enter the name of items: ";
                cin >> n;
                cout << "Enter the price of items: ";
                scanf("%f", &p);
                cout <<"Enter the food_Id_No of items: ";
                scanf("%d", &fin);
                insert(n, p, fin);

                cout << ("\n--------------------------------------------------------------------------------\n");
                cout << ("                         NEW DISH IS ADDED SUCCESSFULLY........\n");
                cout << ("\n--------------------------------------------------------------------------------\n");
                break;
            case 2:
                cout <<("\n--------------------------------------------------------------------------------\n");
                cout << "                         TODAY'S TOTAL INCOME IS: " <<  total_income NL;
                cout << ("\n--------------------------------------------------------------------------------\n");
                break;
            case 3:
                cout << ("\n--------------------------------------------------------------------------------\n");
                cout << "                         TODAY TOTAL NO OF CUSTOMERS VISITED ID: " <<  Today_customer NL;
                cout << ("\n--------------------------------------------------------------------------------\n");
                break;
            case 4:
                cout << ("\n--------------------------------------------------------------------------------\n");
                cout << ("                         ORDER SUMMARY........\n");
                cout << ("\n--------------------------------------------------------------------------------\n");
                display_rd_hist();
                cout NL;
                break;
            case 5:
                display();
                break;
            case 6:
                option();
                break;
            default:
                cout NL << "Wrong choice" NL;
                break;
            }
        } while (1);
    }
}

int main() {
    head = NULL;
    last = NULL;
    head1 = NULL;
    last1 = NULL;
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
        cout << ("********** Welcome to MOMO IN **********\n");
        cout << ("\n1.          MENU\n");
        cout << ("2.          LOGIN\n");
        cout << ("3.          EXIT\n");
        cout << ("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
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
            cout NL <<"Wrong choice" NL;
            break;
        }
    } while (1);

    return 0;
}


