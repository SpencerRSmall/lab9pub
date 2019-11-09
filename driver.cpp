#include "Book.h"
#include "BookList.h"
#include <fstream>

int howMany(ifstream& inFile);
int main(int argc, char *argv[]){

    int b = 0;
    int y = 0;
    int size = 0;
    double r;
    //char* t;
    //t = new char[25];
    string t;

    //input and output files
    ifstream inFile;
    inFile.open (argv[1]);

    ofstream outFile;
    outFile.open(argv[2]);

    // how mnay function to read the file and counts the book entries
    size = howMany(inFile);

    inFile.clear();
    inFile.seekg(0, ios::beg);

    BookList list(size);

    // reads in the file and sends book objects into the list
    while(inFile){
        inFile >> b >> y >> r;
        getline(inFile, t);
        list.addBook(new Book(b, t, y, r));
    }

    list.print();




    inFile.close();
    outFile.close();

    return 0;
}

int howMany(ifstream& inFile){
    int count = 0;
    int x, y;
    double z;
    char* t;    
    t = new char[50];
        
    while (inFile){
        inFile >> x >> y >> z;
        inFile.getline(t, 50);
        count++;
    }

    return (count - 1);
    }