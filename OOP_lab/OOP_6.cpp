#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

// declaring all the packages that are going to be required

class User
{

    // attributes of each class user : 
    public :
    std::string name;
    std::string  DOB;
    std::string add;

    
    
    public :

    // parameterized constructor in case the members want to be made private , in which a get_parameter needs to be defined for each variable

    User(std::string name,std::string DOB , std::string add)
    {
        this->name = name;
        this->DOB = DOB;
        this->add = add;
    }
    
    // public function to print whatever output is going to be required
    void print_output()
    {
        std::cout << "The name of the user is : "  << name;
        std::cout << "\n The date of birth  : "  << DOB;
        std::cout << "\n The address : "  << add;
    }

};




int main()
{
    //initializing local variables

    std::string name;
    std::string  DOB;
    std::string add;
    int choice;
    int n;

   //prompting for number of users 

    std::cout << "Enter the number of users :";
    std::cin >> n;
    std::vector<User> user;
    user.reserve(n);

    // creating a vector of objects of user class and passing all the information to each object

    for( int i = 0 ; i < n ; i++)
    {
        //prompting the user to get essential details

        std::cout << "Enter the name of the user : ";
        std::cin >> name;

        std::cout << "Enter the date of birth of the user : ";
        std::cin >> DOB;
   
        std::cout << "Enter the address of the user : ";
        std::cin >> add;

        //creating an object of type user and passing it each time
        
        user.push_back(User(name, DOB, add));
    }


    std::cout << "\n Enter 1. to sort the user records in ascending order based on names";
    std::cout << "\n Enter 2. to sort the user records in descending  order based on names";
    std::cout << "\n Enter 3. to find the information of a paticular user : \n";
    std::cin>> choice;
    switch(choice)

    {
        case 1:
        {
            // sorting through in ascending order using a lambda function

             std::sort(user.begin(), user.end() ,[](const User& lhs, const User& rhs)
            {
                return lhs.name < rhs.name;
            });
    

        for (auto it = user.begin(); it != user.end(); it++)
            std::cout << it->name << " ";
  
   
        break;
        }

        case 2:
        {
            //sorting throught the given list and using a lambda function arranging it in descending order 

             std::sort(user.begin(), user.end() ,[](const User& lhs, const User& rhs)
            {
                return lhs.name > rhs.name;
            });

            for (auto it = user.begin(); it != user.end(); it++)
                std::cout << it->name << " ";
        break;
    }

        case 3:
        {

        std::cout << "Enter the name of the user who's records you want to find : ";
        std:: string n =   "";
        std:: cin >> n;
        // using find function to find whether the name entered is present or not
        auto it = std::find_if(user.begin(), user.end(), [&n](const User& obj) {return obj.name == n;});

        if (it != user.end())
        {
          // found element. it is an iterator to the first matching element.
          // if you really need the index, you can also get it:
          auto index = std::distance(user.begin(), it);
          std :: cout << "The details are : ";
          user[index].print_output();
        }
    

        break;
    }

    default:

        std::cout << "Incorrect choice entered. Program terminated";


}
    //printing the output if the choice was one or two : the whole list

    if(choice == 1 || choice == 2)
    {

    //passing the entered_input into the object variables
    for( int i = 0; i < n ; i++)
    {
      user[i].print_output();
    }
    }

  


    


}