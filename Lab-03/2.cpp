#include <iostream>
#include<cstring>
using namespace std;
class Book{
    string title;
    string author;
    const int publicationYear;
    float &price;
    int pageCount;
    char **contents;
    public:
        Book(string t,string a,int year,float &p,int pages):publicationYear(year),price(p)
        {
            title=t;
            author=a;
            pageCount=pages;

            contents=new char*[pageCount];

            for(int i=0;i<pageCount;i++){
                contents[i]=nullptr;
            }
        }
        ~Book(){
            if(contents != nullptr){
                for(int i=0;i<pageCount;i++){
                    if(contents[i] !=nullptr){
                        delete[] contents[i];
                        contents[i]=nullptr;
                    }
                }
                delete[] contents;
                contents =nullptr;
            }
        }
        string getTitle() const;
        string getAuthor() const;
        int getPublicationYear() const;
        float getPrice() const;
        int getPageCount() const;

        void setPageContent(int, const string& );
        void displayPageContent(int) const;
        void displayBook() const;
}; 

string Book::getTitle() const
{
    return title;
}
string Book::getAuthor() const
{
    return author;
}
int Book::getPublicationYear() const
{
    return publicationYear;
}
float Book::getPrice() const
{
    return price;
}
int Book::getPageCount() const
{
    return pageCount;
}

void Book::setPageContent(int page, const string& content){
    if(page<1 || page >pageCount){
        cout << "Invalid Page Number. \n";
        return;
    }
    int idx=page-1;

    if(contents[idx] != nullptr){
        delete[] contents[idx];
        contents[idx]=nullptr;
    }
    contents[idx]=new char[content.length() + 1];
    strcpy(contents[idx], content.c_str());
}

void Book:: displayPageContent(int page) const{
    if(page<1 || page>pageCount){
        cout << "Invalid Page .\n";
        return;
    }

     int index = page - 1;

        cout << "\nPage " << page << " Content:\n";

        if (contents[index] != nullptr){
            cout << contents[index] << endl;
        }
        else{
            cout << "No Content Available.\n";
        }
}

void Book:: displayBook() const{
    cout << "\n------Book Information---------\n";
    cout << "---------------------------------\n";
    cout << "Title            : " << title << "\n";
    cout << "Author           : " << author << "\n";
    cout << "Publication Year : " << publicationYear << "\n";
    cout << "Price            : " << price << "\n";
    cout << "Page Count       : " << pageCount << "\n";

}
int main()
{
    float price = 1500.50;

    Book b1("Object Oriented Programming",
            "Bjarne Stroustrup",
            2023,
            price,
            5);

    // Set contents of pages
    b1.setPageContent(1, "Introduction to OOP");
    b1.setPageContent(2, "Classes and Objects");
    b1.setPageContent(3, "Constructors and Destructors");
    b1.setPageContent(4, "Inheritance");
    b1.setPageContent(5, "Polymorphism");

    // Display book information
    b1.displayBook();

    // Display a specific page
    b1.displayPageContent(3);
   return 0;
}