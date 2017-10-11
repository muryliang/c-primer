#include "sales_data.h"

Sales_data & Sales_data::combine(const Sales_data& a) {
    units_sold += a.units_sold;
    revenue += a.revenue;
    return *this;
}

istream &read(istream &is, Sales_data &item){
    double price = 0;
    cout << "read in bookNo, units_sold, price" << endl;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

ostream &print(ostream &os, const Sales_data &item) {
    os << item.isbn() << " " << item.units_sold << " "
        << item.revenue << " " << item.avg_price();
    return os;
}

double Sales_data::avg_price() const {
    return revenue / units_sold;
}

Sales_data add(const Sales_data& a, const Sales_data& b) {
    Sales_data sum = a;
    sum.combine(b);
    return sum;
}

int main() {
    Sales_data aa;
    /*
    Sales_data aa, bb("string"), cc("stringcc", 12,23);
    print(cout, aa);
    cout << endl;
    print(cout, bb);
    cout << endl;
    print(cout, cc);
    cout << endl;
    Sales_data dd(cin);
    print (cout, dd);
    cout << endl;
    */
    return 0;
}
