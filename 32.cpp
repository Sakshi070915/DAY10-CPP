//C++ Code to demonstrate various functions available in
//String class
#include <iostream>
#include <string>

using namespace std;

int main()
{
    //Creating and initializing strings
    string greeting = "Hello World!";
    cout<<greeting<<endl;
    string name;

    //Input from the user
    cout<<"Enter your name:";
    cin>> name;
    cout<<name<<endl;

    //String length
    int length = greeting.length();
    cout<<length<<endl;

    //Appending and concatenating strings
    string firstName = "Hi Sakshi";
    string lastName = "How are you";
    string fullName = firstName + " " + lastName;
    cout<<fullName<<endl;
    string base = "Hello";
    cout<<base<<endl;
    base.append("World!");
    cout<<base<<endl;

    //String comparison
    string str1 = "apple";
    string str2 = "banana";
    if (str1 == str2){
        cout<<"Strings are equal"<<endl;
    }
    else{
        cout<<"Strings are not equal"<<endl;
    }

    int result = str1.compare(str2);
    if (result==0){
        cout<<"Strings are equal"<<endl;
    }
    else if(result<0){
        cout<<"str1 comes before str2"<<endl;
    }
    else{
        cout<<"str1 come after str2"<<endl;
    }

    //Subscriptions 
    string text = "Hello World!";
    cout<<text<<endl;
    string sub = text.substr(0,5);
    cout<<sub<<endl;
}