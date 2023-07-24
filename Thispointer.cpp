#include<iostream>
using namespace std;

class student
{
    public:
    

    string name;
    int attendence;
    float total_marks;

    void calculate_percentage()
    {
        cout<<total_marks<<"%";
    }
};

// you are making a software for a bank//

class Bank_client
{
    private:

    int credit_number;
    int cvv;
    string password;
    string user_name;

    public:

    string name;

     // we use public functions to set private data .
     //private members are accessable inside class and only inside the class.
     // ****** To access stuff of an object you definetly need a public element, as private element of an object are always inaccessible.

     void set_credit_card_number(int credit_number)
     {
        this->credit_number = credit_number;
        //The pointer to the object is inheritly passed by a pointer callled "this".
        cout<<"the address of the object calling this function is "<<this<<endl;
     }

     int get_creditcardnumber()
     {
        cout<<"The credit card number is "<<credit_number;
        return credit_number;
     }

     void set_allthestuffatonce(int credit_number, int name, int password)
     {
        this->credit_number = credit_number;
        this->name = name;
        this->password = password;
     }

     // every object when we define a function, inheritedly passes the pointer of the object and the pointer is called "this".

     //we use get function to get the data.
     //we use set functions to set the data.
};

int main()
{
   Bank_client a,b,c;

   a.name = "shivam";

   a.set_credit_card_number(942474);
   //In this function, otheer than the parameters of the function, we also pass the pointer of the object of this class, ans the pointer is refferd by "this".
   
   cout<<"the address of this object is "<<&a<<endl;

 
   
  return 0;
}