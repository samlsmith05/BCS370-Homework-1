//****************************************************
// File: Book.cpp
//
// Purpose: Contains all of the function definitions 
//			for the Book class
//
// Written By: Samantha Smith
//
// Compiler: Visual Studio C++ 2017
// 
// Update Information
// ------------------
//
//*****************************************************
#include "Book.h"

//****************************************************
// Function: Book()
//
// Purpose: The default constructor for Book
//
// Update Information
// ------------------
//
//****************************************************
Book::Book() {
	//sets the default values
	isbn = "NO ISBN";
	title = "NO TITLE";
	price = 0.0;
}

//****************************************************
// Function: GetIsbn()
//
// Purpose: gets the isbn number of the book and returns it
//
// Update Information
// ------------------
//
//****************************************************
string Book::GetIsbn() {
	return isbn;
}

//****************************************************
// Function: GetTitle()
//
// Purpose: gets the title of the book and returns it
//
// Update Information
// ------------------
//
//****************************************************
string Book::GetTitle() {
	return title;
}

//****************************************************
// Function: GetPrice()
//
// Purpose: gets the price of the book and returns it
//
// Update Information
// ------------------
//
//****************************************************
double Book::GetPrice() {
	return price;
}

//****************************************************
// Function: SetIsbn(string i)
//
// Purpose: sets the isbn of the book
//
// Update Information
// ------------------
//
//****************************************************
void Book::SetIsbn(string i) {
	isbn = i;
}

//****************************************************
// Function: SetTitle(string t)
//
// Purpose: sets the title of the book
//
// Update Information
// ------------------
//
//****************************************************
void Book::SetTitle(string t) {
	title = t;
}

//****************************************************
// Function: SetPrice(double p)
//
// Purpose: sets the price of the book
//
// Update Information
// ------------------
//
//****************************************************
void Book::SetPrice(double p) {
	price = p;
}

//****************************************************
// Function: Book(string isbn, string title, double price)
//
// Purpose: A constructor with all member variables for Book
//
// Update Information
// ------------------
//
//****************************************************
Book::Book(string i, string t, double p) {
	//sets the values of Book with the ones sent in as parameters
	isbn = i;
	title = t;
	price = p;
}

//****************************************************
// Function: Book(const Book& oldBook)
//
// Purpose: does a deep copy of the member variables 
//			as a copy constuctor
//
// Update Information
// ------------------
//
//****************************************************
Book::Book(const Book& oldBook) {
	//copies the information of oldBook into a new Book
	isbn = oldBook.isbn;
	title = oldBook.title;
	price = oldBook.price;
}

//***************************************************
// Function: operator=(const Book& rhs)
//
// Purpose: overloads the assignment operator = and 
//			creates an object like a copy constructor
//
// Update Information
// ------------------
//
//****************************************************
Book& Book::operator=(const Book& rhs) {
	//sets the current instance of Book's values to the same value as rhs Book instance
	isbn = rhs.isbn;
	title = rhs.title;
	price = rhs.price;
	return *this;		//returns the current instance of Book
}

//****************************************************
// Function: operator<<(ostream& os, Book& rhs)
//
// Purpose: prints the values of all member variables 
//			on the given ostream
//
// Update Information
// ------------------
//
//****************************************************
ostream& operator<<(ostream& os, Book& rhs) {
	os << "Title: " << rhs.title << "\nISBN: " << rhs.isbn << "\nPrice: $" << rhs.price << endl;
	return os;		//returns the os so it will print the entire line above
}