// Exercise 2.41
// Date: 2020-01-08

#include <iostream>
#include <string>

struct Sales_data {
    std::string book_no;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main() {
    // Exercise 1.21
    Sales_data book1, book2;
    std::cout << "Please enter book1's book_no and sold units: ";
    std::cin >> book1.book_no >> book1.units_sold;
    std::cout << "Please enter book2's book_no and sold units: ";
    std::cin >> book2.book_no >> book2.units_sold;
    std::cout << book1.book_no << " has sold " << book1.units_sold + book2.units_sold
              << " units." << std::endl;
    
    // // Exercise 1.22
    // Sales_data book3, book4;
    // std::cout << "Please enter book's book_no and sold units: ";
    // if (std::cin >> book3.book_no >> book3.units_sold) {
    //     int cnt = book3.units_sold;
    //     std::cout << "Please enter book's book_no and sold units: ";
    //     while (std::cin >> book4.book_no >> book4.units_sold) {
    //         if (book3.book_no == book4.book_no) {
    //             cnt += book4.units_sold;
    //         }
    //         else {
    //             std::cout << book3.book_no << " total sold " << cnt << " units.\n";
    //             break;
    //         }
    //         std::cout << "Please enter book's book_no and sold units: ";
    //     }
    // }

    // // Exercise 1.23 & 1.24
    // Sales_data cur_book, book;
    // std::cout << "Please enter book's book_no and sold units: ";
    // if (std::cin >> cur_book.book_no >> cur_book.units_sold) {
    //     int cnt = cur_book.units_sold;
    //     std::cout << "Please enter book's book_no and sold units: ";
    //     while (std::cin >> book.book_no >> book.units_sold) {
    //         if (book.book_no == cur_book.book_no) {
    //             cnt += book.units_sold;
    //         }
    //         else {
    //             std::cout << cur_book.book_no << " has sold " << cnt << " units.\n";
    //             cur_book = book;
    //             cnt = book.units_sold;
    //         }
    //         std::cout << "Please enter book's book_no and sold units: ";
    //     }
    //     std::cout << cur_book.book_no << " has sold " << cnt << " units.\n";
    // }

    // // Exercise 1.25
    // Sales_data total;
    // std::cout << "Please enter books' book_no and sold units: ";
    // if (std::cin >> total.book_no >> total.units_sold) {
    //     Sales_data trans;
    //     while (std::cin >> trans.book_no >> trans.units_sold) {
    //         if (total.book_no == trans.book_no) {
    //             total.units_sold += trans.units_sold;
    //         }
    //         else {
    //             std::cout << total.book_no << " has sold " << total.units_sold
    //                       << " units.";
    //             total = trans;
    //         }
    //     }
    //     std::cout << total.book_no << " has sold " << total.units_sold << " units.";
    // }
    // else {
    //     std::cerr << "No data!" << std::endl;
    //     return -1;
    // }

    return 0;
}