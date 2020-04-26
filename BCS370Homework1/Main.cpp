//****************************************************
// File: Main.cpp
//
// Purpose: Show and utilize all the functions in the Book and BookCollection classes
//
// Written By: Samantha Smith
//
// Compiler: Visual Studio C++ 2017
// 
// Update Information
// ------------------
//
// 
//****************************************************

#include <iostream>
#include <string>
#include "Book.h"
#include "BookCollection.h"
using namespace std;

//****************************************************
// Function: main()
//
// Purpose: entry point for the program
//
// Update Information
// ------------------
// 
//
//****************************************************

int main() {
	Book book1 = Book();			//calls the default constructor
	Book book2 = Book("ABC123", "The Hunger Games", 19.95);		//calls the constructor that takes all member variables
	Book book3 = Book("XYZ789", "To Kill A Mockingbird", 23.75);//calls the constructor that takes all member variables
	Book book4 = Book("JKL456", "Introduction to C++", 163.98); //calls the constructor that takes all member variables
	Book book5 = Book();			//calls the default constructor
	Book book6 = Book(book4);		//calls the copy constructor
	Book book7 = book2;				//calls operator=

	book1.SetIsbn("321EFG");		//calls SetIsbn
	book1.SetPrice(9.99);			//calls SetPrice
	book1.SetTitle("Easy Poems");	//calls SetTitle

	cout << "Title: " << book1.GetTitle() << endl;	//calls GetTitle
	cout << "ISBN: " << book1.GetIsbn() << endl;	//calls GetIsbn
	cout << "Price: $" << book1.GetPrice() << endl;	//calls GetPrice

	cout << "\n" << book2;			//calls operator<< 
	cout << "\n" << book3;			//calls operator<<
	cout << "\n" << book4;			//calls operator<<
	cout << "\n" << book5;			//calls operator<<
	cout << "\n" << book6;			//calls operator<<
	cout << "\n" << book7;			//calls operator<<

	book5.SetIsbn("QRS987");
	book5.SetTitle("Divergent");
	book5.SetPrice(15.99);

	cout << "------------------------------------------------------------" << endl;

	BookCollection testCollection = BookCollection();		//calls the default constructor from BookCollection


	testCollection.Set(0, book1);												//calls Set from BookCollection
	testCollection.Set(1, book2);												//calls Set from BookCollection
	testCollection.Set(2, book3);												//calls Set from BookCollection
	testCollection.Set(3, book4);												//calls Set from BookCollection
	testCollection.Set(4, book5);												//calls Set from BookCollection

	Book testBook = testCollection.Get(3);										//calls Get from BookCollection
	cout << "Get Test Book: \n" << testBook;									//calls operator<< to see if previous worked

	int priceRangeCount = testCollection.BookPriceCount(10.0, 20.0);			//calls BookPriceCount from BookCollection
	cout << "\nThe number of books in the price range is " << priceRangeCount << endl;

	Book cheapBook = testCollection.CheapestBook();								//calls CheapestBook from BookCollection
	cout << "\nThe cheapest book is " << cheapBook.GetTitle() << endl;

	Book resultBook = Book();
	cout << "\nFind book success: ";
	bool result = testCollection.FindBook("ABC123", resultBook);				//calls FindBook from BookCollection with a isbn that will work
	if (result == true) {
		cout << "\n" << resultBook << endl;										//prints the Book with the matching isbn
	}
	else {
		cout << "\nThat isbn was not found in the Book Collection" << endl;
	}

	cout << "Find book fail: ";
	result = testCollection.FindBook("BYU681", resultBook);						//calls FindBook from BookCollection with a isbn that will NOT work
	if (result == true) {
		cout << "\n" << resultBook << endl;										//prints the Book with the matching isbn
	}
	else {
		cout << "\nThat isbn was not found in the Book Collection" << endl;
	}

	cout << "\nThe total price of all the books is $" << testCollection.TotalPrice() << endl;	//calls TotalPrice from BookCollection
	cout << "\nThe size of the Book Collection is " << testCollection.Size() << endl;			//calls Size from BookCollection
	cout << "\nThe author of this project is " << testCollection.GetAuthor() << endl;			//calls GetAuthor from BookCollection

	testCollection.Initialize();												//calls Initialize from BookCollection

	return 0;
}