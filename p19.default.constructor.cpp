#include <iostream>
using namespace std;

class book
{
public:
    string title;
    string author;
    float price;

    book()
    {
        title = "Unknown";
        author = "Unknown";
        price = 0;
    }

    void display (){
        cout << "title:" << title << "author:" << author << "price:" << price << endl;
    }
};

int main() {
    book b;
    b.display();
    return 0;
}