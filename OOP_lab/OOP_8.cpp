#include <iostream>
#include <string>
#include <map>

// defining a simple function to find the current map key

std::map<std::string , int> :: iterator find_population(std :: string &state ,  std::map<std::string , int> &populationMap)
{
    std::map<std::string , int> :: iterator iter;
    iter = populationMap.find(state);
    return iter;
}


// printing the function

void print_population( const std::map<std::string , int> :: iterator &pop , std::string state)
{
    std::cout << "The population of "<< state << " is : " << pop->second  ;
}
int main()
{
    std::map<std::string , int> populationMap;
    
    // Defining a map with all the states in India and their population

    populationMap.insert({"Mahrashtra" , 124945748 });

    populationMap.insert({"Uttar Pradesh" , 223897418});

    populationMap.insert({"Bihar" , 121741741});

    populationMap.insert({"Madhya Pradesh" , 72626809});

    populationMap.insert({"Tamil Nadu" , 72147030});

    populationMap.insert({"Rajasthan" , 68548437});

    populationMap.insert({"Karnataka" , 61095297 }); 

    populationMap.insert({"Gujarat" , 91276115});

    populationMap.insert({"Andhra Pradesh" , 49577103}); 
        
    populationMap.insert({"Odisha" , 41974219}); 

    populationMap.insert({"Telangana" , 35003674});

    populationMap.insert({"Kerala" , 33406061});
      
    populationMap.insert({"Jharkhand" , 32988134});
      
    populationMap.insert({"Assam" , 31205576});
      
    populationMap.insert({"Punjab" , 2743389});
      
    populationMap.insert({"Chhattisgarh" , 25545198});
      
    populationMap.insert({"Haryana" , 25351462});
      
    populationMap.insert({"Uttarakhand" , 10086292});
      
    populationMap.insert({"Himachal Pradesh" , 6864602});
      
    populationMap.insert({"Tripura" , 3673917}); 

    populationMap.insert({"Meghalaya" , 2966889});

    populationMap.insert({"Manipur" , 2570390}); 

    populationMap.insert({"Nagaland" , 1978502});

    populationMap.insert({"Goa" , 1458545});

    populationMap.insert({"Arunachal Pradesh" , 1383727});

    populationMap.insert({"Mizoram" , 1097206});

    populationMap.insert({"Sikkim" , 610577});
         
    std::string state;
    
    //prompting the user to enter the population

    std::cout << "Enter an Indian state to find its population : \n";
    std::cin >> state;
    

    // calling the function to find the population
    std::map<std::string , int> :: iterator pop;

    pop = find_population(state ,  populationMap);

    //calling function to print the population

    print_population(pop , state );
    
}