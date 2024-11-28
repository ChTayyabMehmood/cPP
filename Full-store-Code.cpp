#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void addProducts(string names[], float prices[], int quantities[], int &size);
void displayInventory(string names[], float prices[], int quantities[], int size);
void searchProduct(string names[], float prices[], int quantities[], int size);
void updateProduct(string names[], float prices[], int quantities[], int size);
float calculateTotalValue(float prices[], int quantities[], int size);
void findExtremes(string names[], float prices[], int quantities[], int size);

int main() {
    int maxProduct = 1000;
    string names[maxProduct];
    float prices[maxProduct];
    int quantities[maxProduct];
    int size = 0;

    int choice;

    cout << "Grocery Store Management" << endl << endl;

    do {
        cout << "1. Add the Product Details" << endl;
        cout << "2. Display Inventory" << endl;
        cout << "3. Search for Product" << endl;
        cout << "4. Update the Quantity OR Price" << endl;
        cout << "5. Calculate the Total Inventory" << endl;
        cout << "6. Find the Product with Highest or Lowest Price" << endl;
        cout << "7. Exit" << endl << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;
        cout << endl;

        switch (choice) {
            case 1:
                addProducts(names, prices, quantities, size);
                break;

            case 2:
                displayInventory(names, prices, quantities, size);
                break;

            case 3:
                searchProduct(names, prices, quantities, size);
                break;

            case 4:
                updateProduct(names, prices, quantities, size);
                break;

            case 5: {
                float total = calculateTotalValue(prices, quantities, size);
                cout << "Total Price of Inventory: $" << fixed << setprecision(2) << total << endl << endl;
                break;
            }

            case 6:
                findExtremes(names, prices, quantities, size);
                break;

            case 7:
                cout << "Thanks For Using:\nMade in Pakistan BY TAYYAB" << endl << endl;
                break;

            default:
                cout << "Invalid option!" << endl << endl;
        }
    } while (choice != 7);

    return 0;
}

void addProducts(string names[], float prices[], int quantities[], int &size) {
    int ProNum = 0;
    do {
        cout << "Enter The Number of Products to Add (Max 10): ";
        cin >> ProNum;
        if (ProNum > 10)
            cout << "Input wrong: Try again." << endl;
    } while (ProNum > 10);

    cin.ignore();

    for (int i = size; i < size + ProNum; i++) {
        cout << "Enter the Product Name: ";
        getline(cin, names[i]);
        cout << "Enter Product Price: ";
        cin >> prices[i];
        cout << "Enter the Product Quantity: ";
        cin >> quantities[i];
        cin.ignore();
        cout << endl;
    }

    size += ProNum;

    cout << endl;
}

void displayInventory(string names[], float prices[], int quantities[], int size) {
    cout << "Product Inventory:" << endl;
    cout << setw(56) << setfill('-') << "-" << endl;
    cout << setfill(' ') << endl;

    cout << left << setw(20) << "Name" 
         << right << setw(15) << "Price" 
         << right << setw(15) << "Quantity" << endl << endl;

    cout << setw(56) << setfill('-') << "-" << endl;
    cout << setfill(' ') << endl;

    for (int i = 0; i < size; i++) {
        cout << left << setw(20) << names[i]
             << right << setw(10) << "$" << fixed << setprecision(2) << prices[i]
             << right << setw(15) << quantities[i] << endl;
    }

    cout << endl << endl;
}

void searchProduct(string names[], float prices[], int quantities[], int size) {
    string ProductName;
    cout << "Enter the Product Name: ";
    cin.ignore();
    getline(cin, ProductName);

    bool found = false;
    for (int i = 0; i < size; i++) {
        if (ProductName == names[i]) {
            cout << "Product Found." << endl;
            cout << "Name: " << names[i] << endl;
            cout << "Price: $" << fixed << setprecision(2) << prices[i] << endl;
            cout << "Quantity: " << quantities[i] << endl << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Product not found." << endl << endl;
    }
}

void updateProduct(string names[], float prices[], int quantities[], int size) {
    string ProductName;
    cout << "Enter the Product Name: ";
    cin.ignore();
    getline(cin, ProductName);

    for (int i = 0; i < size; i++) {
        if (ProductName == names[i]) {
            int choice;
            cout << "Enter the option to update (1 for Price, 2 for Quantity): ";
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "Enter the new price for " << names[i] << ": ";
                    cin >> prices[i];
                    break;

                case 2:
                    cout << "Enter the new quantity for " << names[i] << ": ";
                    cin >> quantities[i];
                    break;

                default:
                    cout << "Invalid choice." << endl;
            }

            cout << endl;
            break;
        }
    }
}

float calculateTotalValue(float prices[], int quantities[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += prices[i] * quantities[i];
    }
    return sum;
}

void findExtremes(string names[], float prices[], int quantities[], int size) {
    float min = prices[0], max = prices[0];
    string MaxPro = names[0], MinPro = names[0];

    for (int i = 1; i < size; i++) {
        if (prices[i] > max) {
            max = prices[i];
            MaxPro = names[i];
        }
        if (prices[i] < min) {
            min = prices[i];
            MinPro = names[i];
        }
    }

    cout << "Product with Highest Value: " << MaxPro << " ($" << fixed << setprecision(2) << max << ")" << endl;
    cout << "Product with Lowest Value: " << MinPro << " ($" << fixed << setprecision(2) << min << ")" << endl << endl;
}

