#include "Book.h"

Book::Book(int ID, string t, int y, double r){
        bookID = ID;
        title = t;
        year = y;
        rating = r;
}

int Book::getID() const{
        return bookID;
}

string Book::getTitle() const{
        return title;
}

int Book::getYear() const{
        return year;
}

double Book::getRating() const{
       return rating;
}

void Book::updateBook(int y, double r){
    year = y;
    rating = r;
}

string Book::print() const{
    stringstream ss;

    ss << bookID;
    ss << title;
    ss << year;
    ss << rating;

    return ss.str();
}