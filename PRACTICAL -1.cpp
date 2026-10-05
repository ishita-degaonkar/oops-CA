/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<string>
using namespace std;
class book
{
private:
string title;
string author;
string isbn;
double price;

public:
void recordBook();
{
cout<<"enter book title: " ;
getline(cin,title);

cout<<"enter author name: " ;
getline(cin,author);

cout<<"enter isbn: " ;
getline(cin,isbn);

cout<<"enter price: " ;
cin>>price;
cin.ignore();
}
void displayBook()
{
cout<<"/n---Book Information---"<<endl;
cout<<"title:"<<title<<endl;
cout<<"author:"<<author<<endl;
cout<<"isbn:"<<isbn<<endl;
cout<<"price:"<<price<<endl;
}
};
int main()
{
Book book;
cout<<"====Digital book Inventory System===="<<endl;
book.recordBook ();
book.displayBook ();
return 0;
}
