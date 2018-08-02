#include <string>
#include <iostream>

struct Sales_data {
  //Constructors
  Sales_data() = default;
  Sales_data(const std::string &s) bookNo(s) {} 
  Sales_data(const std::string &s, unsigned n, double p):
             bookNo(s), units_sold(n), revenue(p*n) {}
  Sales_data(std::istream &);

  //Member Functions
  std::string isbn() const { return bookNo; }
  Sales_data &combine(const Sales_data &);
  double avg_price() const;

  //Data Members
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

//Member function defined outside struct:
Sales_data &Sales_data::combine(const Sales_data &rhs) {
  units_sold += rhs.units_sold;
  revenue += rhs.revenue;
  return *this;
}

double Sales_data::avg_price() const{
  if(units_sold)
    return revenue/units_sold;
  else
      return 0;
}

//Non-member functions (interface functions):
Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
  Sales_data sum = lhs;  // Use default copy constructor
  sum.combine(rhs);
  return sum;
}

std::istream &read(std::istream &is, Sales_data &item) {
  double price;
  is >> item.bookNo >> item.units_sold >> price;
  item.revenue = item.units_sold * price;
  return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item) {
  os << item.isbn() << " " << item.units_sold << " " << item.revenue;
  return os;
}

/////////////////////////////////////////////////////////////////////
//Main Function: Transaction Processing Program
/////////////////////////////////////////////////////////////////////

int main() {
  Sales_data total;
  if (read(std::cin, total)) {
  double price;
  if (std::cin >> total.bookNo >> total.units_sold >> price) {
    total.revenue = total.units_sold * price;
    Sales_data trans;
    while (read(std::cin, trans)) {
    while (std::cin >> trans.bookNo >> trans.units_sold >> price) {
      trans.revenue = trans.units_sold * price;
      if (total.isbn() == trans.isbn()) {
        total.combine(trans);
      } else {
        print(std::cout, total) << std::endl;
        std::cout << total.bookNo << " "
                  << total.units_sold << " "
                  << total.revenue << std::endl;
        total = trans;  // Use default copy constructor
      }
    }
    print(std::cout, total) << std::endl;
    std::cout << total.bookNo << " "
              << total.units_sold << " "
              << total.revenue << std::endl;
  } else {
    std::cerr << "No data!" << std::endl;
    return -1;
  }

  return 0;
}