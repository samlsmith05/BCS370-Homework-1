//****************************************************
// File: BookCollection.cpp
//
// Purpose: Contains all of the function definitions 
//			for the BookCollection class
//
// Written By: Samantha Smith
//
// Compiler: Visual Studio C++ 2017
// 
// Update Information
// ------------------
//
//*****************************************************
#include "BookCollection.h"
#include <iostream>


//****************************************************
// Function: Set(int index, Book b)
//
// Purpose: Sets array elements with the Books
//
// Update Information
// ------------------
//
//****************************************************
void BookCollection::Set(int index, Book b) {
	//checks if the index given is a valid index
	//if it is, it saves it to the array element
	if (index <= 4 && index >= 0) {
		books[index] = b;
	}

	//otherwise, it prints to the user that the index is not valid
	else
	{
		cout << "That was not a valid index." << endl;
	}
	
}

//****************************************************
// Function: Get(int index)
//
// Purpose: Returns the Book information at the index given
//
// Update Information
// ------------------
//
//****************************************************
Book BookCollection::Get(int index) {
	//checks if the index given is a valid index
	//if it is, it returns the book at the element of the array
	if (index <= 4 && index >= 0) {
		return books[index];
	}

	//otherwise, it prints to the user that the index is not valid
	else
	{
		cout << "That was not a valid index." << endl;
	}
}

//****************************************************
// Function: BookPriceCount(double lowerBound, double upperBound)
//
// Purpose: returns the total number of books within the price bounds
//
// Update Information
// ------------------
//
//****************************************************
int BookCollection::BookPriceCount(double lowerBound, double upperBound) {
	int count = 0;		//the number of books between the bounds

	//loops through the array books 
	for (int i = 0; i < 5; i++) {
		//adds one to count if the price of the book is between the bounds
		if (books[i].GetPrice() >= lowerBound && books[i].GetPrice() <= upperBound) {
			count += 1;
		}
	}
	return count;
}

//****************************************************
// Function: CheapestBook()
//
// Purpose: returns the book with the lowest price
//
// Update Information
// ------------------
//
//****************************************************
Book BookCollection::CheapestBook() {
	Book cheapest;			//the cheapest book in the array
	cheapest = books[0];	//initialize the cheapeast book for comparison
	
	//loops through the array books 
	for (int i = 0; i < 5; i++) {
		//checks to see which book is cheaper
		//if the index book is cheaper, it saves that book to cheapest
		if (books[i].GetPrice() < cheapest.GetPrice() ){
			cheapest = books[i];
		}
	}

	return cheapest;
}

//****************************************************
// Function: FindBook(string isbn, Book &b)
//
// Purpose: finds if the book sent in is in the 
//			array books and returns either true or false
//
// Update Information
// ------------------
//
//****************************************************
bool BookCollection::FindBook(string isbn, Book &b) {
	//loops through all the elements of the array
	for (int i = 0; i < 5; i++) {

		string currentisbn = books[i].GetIsbn();		//sets the current isbn for comparison
		int compareResult = currentisbn.compare(isbn);	//result of the comparison between the isbn's

		
		if (compareResult == 0) {			//if the currentisbn and isbn passed in are equal it sets the current book as the book passed by reference and it returns true
			b = books[i];
			return true;
		}
	}

	return false;					//if the isbn is not in any of the books of BookCollection, it will return false
	
}

//****************************************************
// Function: TotalPrice()
//
// Purpose: totals the price of all the books in the array books
//
// Update Information
// ------------------
//
//****************************************************
double BookCollection::TotalPrice() {
	double total;		//the total price of all the books 
	total = 0.0;		//initialize total

	//loops through all the elements of the array
	for (int i = 0; i < 5; i++) {
		//adds the current index book price to the total
		total = total + books[i].GetPrice();
	} 

	return total;
}

//****************************************************
// Function: Size()
//
// Purpose: returns the size of the array
//
// Update Information
// ------------------
//
//****************************************************
int BookCollection::Size() {
	return 5;
}

//****************************************************
// Function: Initialize()
//
// Purpose: sets all the elements of the array to default values
//
// Update Information
// ------------------
//
//****************************************************
void BookCollection::Initialize() {
	//loops through the array books
	for (int i = 0; i < 5; i++) {
		//sets each element of books with the default constructor Book()
		books[i] = Book();
	}
}

//****************************************************
// Function: GetAuthor()
//
// Purpose: returns my name
//
// Update Information
// ------------------
//
//****************************************************
string BookCollection::GetAuthor() {
	return "Samantha Smith";
}

//****************************************************
// Function: BookCollection()
//
// Purpose: default constructor for BookCollection
//
// Update Information
// ------------------
//
//****************************************************
BookCollection::BookCollection() {
	//sets the default values by calling on the Initialize() function
	Initialize();
}