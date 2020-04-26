//****************************************************
// File: BookCollection.h
//
// Purpose: Contains the class definition for BookCollection
//
// Written By: Samantha Smith
//
// Compiler: Visual Studio C++ 2017
// 
// Update Information
// ------------------
//
//****************************************************
#ifndef BOOKCOLLECTION_H
#define BOOKCOLLECTION_H
#include <string>
#include "Book.h"
using namespace std;

class BookCollection {
	//Member variables
	private:
		Book books[5];
	public:
		void Set(int index, Book b);
		Book Get(int index);
		int BookPriceCount(double lowerBound, double upperBound);
		Book CheapestBook();
		bool FindBook(string isbn, Book &b);
		double TotalPrice();
		int Size();
		void Initialize();
		string GetAuthor();
		BookCollection(); 

};

#endif
