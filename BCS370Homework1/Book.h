//****************************************************
// File: Book.h
//
// Purpose: Contains the class definition for Book
//
// Written By: Samantha Smith
//
// Compiler: Visual Studio C++ 2017
// 
// Update Information
// ------------------
//
//****************************************************
#ifndef BOOK_H
#define BOOK_H
#include <string>
using namespace std;

class Book {
	//Member Variables
	private:
		string isbn;
		string title;
		double price;

	//Member Functions
	public:
		Book();

		string GetIsbn();
		string GetTitle();
		double GetPrice();

		void SetIsbn(string newisbn);
		void SetTitle(string newtitle);
		void SetPrice(double newprice);

		Book(string newisbn, string newtitle, double newprice);
		Book(const Book& oldBook);

		Book& operator=(const Book& rhs);
		friend ostream& operator<<(ostream& os, Book& rhs);



};
#endif
