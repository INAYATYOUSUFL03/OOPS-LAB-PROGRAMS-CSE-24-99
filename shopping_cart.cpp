#include <iostream>
using namespace std;

class Item {
    double* price;
    int* quantity;
public:
    
    Item(double p, int q) {
        price = new double;
        quantity = new int;
        *price = p;
        *quantity = q;
    }
    
    Item(const Item& other) {
        price = new double;
        quantity = new int;
        *price = *(other.price);
        *quantity = *(other.quantity);
    }
    double totalCost() const {
        return (*price) * (*quantity);
    }
    void display() const {
        cout << "Price: " << *price << ", Quantity: " << *quantity << ", Total: " << totalCost() << '\n';
    }

    ~Item() {
        delete price;
        delete quantity;
    }
};

int main() {
    int n;
    cout << "How many items? ";
    cin >> n;
    double p; int q;
    double grandTotal = 0;
    for (int i = 1; i <= n; ++i) {
        cout << "Enter price and quantity for item " << i << ": ";
        cin >> p >> q;
        Item it(p, q);
        it.display();
        grandTotal += it.totalCost();
    }
    cout << "Grand Total = " << grandTotal << '\n';
    return 0;
}
