#include "BookList.h"

// Constructor
BookList::BookList(int size){
    cout << "size: " << size << endl;
    books.reserve(size);
}

// Destructor frees the vector books
BookList::~BookList(){
    books.clear();
}

bool BookList::addBook(Book *b){
    if (search(b->getID()) == NULL){
        cout << "b->getID in addbook: " << b->getID() << endl;
        cout << "b->getYear: " << b->getYear() << endl;
        cout << "b->getrate: " << b->getRating() << endl;
        cout << "b->getTitle: " << b->getTitle() << endl << endl;
        
        books.push_back(b);
        return true;
    }
    else return false;
}

Book* BookList::search(int bookID){
    for (unsigned int i = 0; i < books.size(); i++){
        if (books[i]->getID() == bookID){
            return books[i];
        }
    }
    return nullptr;
    
}

 bool BookList::updateBook(int ID, int y, double r){
    for (unsigned int i = 0; i < books.size(); i++){
        if (books[i]->getID() == ID){
            return true;
        }
    }
    return false;
}
     
     // if a book needs to be updated return true
     // else return false

// double BookList::calculateAverageRating(){
// }

void BookList::print(){
    //sort(books.begin(), books.end(), ComparatorByID());
    cout << "books size: " << books.size() << endl;

    //cout << books[0]->getID() << " " << books[0]->getTitle() << " " << books[0]->getYear() << " " << books[0]->getRating();
    
}

//vector<Book*>BookList::getBooks() const{
//    return books;
//}
