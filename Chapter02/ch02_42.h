// Exercise 2.42
// Date: 2020-01-08

// Sales_data.h
#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
struct Sales_data {
    std::string book_no;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
#endif // SALES_DATA_H