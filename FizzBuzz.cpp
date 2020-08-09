#include <iostream>

/*
FizzBuzz

Print every number from 1 to 100. 

For numbers that are divisible by 3, output "Fizz". 
For numbers that are divisible by 5, output "Buzz".
For numbers that are divisible by 3 and 5, output "FizzBuzz"
*/

int main(){

    for(int i = 1; i <= 100; i++){
        
        std::string output="";

        if(i % 3 == 0){output += "Fizz";}
        else if(i % 5 == 0){output +="Buzz";}
        else{output = std::to_string(i);}

        std::cout << output << std::endl;
    }
}