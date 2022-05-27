#include <iostream>

int main(){
    setlocale(LC_ALL, 'ru');
    
    int number;    

    int devide_number();

    return 0;    
}

int devide_number();
{
        
    std::cout << "Input number: ";

    try
    {
        std::cin >> number;    
    }
    catch ()
    {
        std::cout << "Error, you input not a number!! Repeat.";
    }
    
    std::cout << std::endl << std::endl;
    
}
