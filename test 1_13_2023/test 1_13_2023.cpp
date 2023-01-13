// test 1_13_2023.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
extern "C" bool beepfor(int start, int end );
int root(int a, int b, int c) {
    std::cout << sqrtf(pow(b, 2) - 4 * a * c ) -b/ (2 * a) <<"\n";
    std::cout << -sqrtf(pow(b, 2) - 4 * a * c ) - b / (2 * a) << '\0';



}


int main()
{
    HANDLE HstdOut = GetStdHandle(-11);//stdout 
   

    std::cout << "Hello World!\n";
    
    //int c = (10, 30, 2);
    std::cout << " How much money do you have\n";
    float cash = 1; std::cin >> cash; {
        char temp = '-';
        do {
            std::cout << " b c d e q \n";
            switch (temp = getc(stdin))
            {

            case 'd':
                std::cout << "bruh\n";
                break;
            case 'c':
                std::cout << "cat\n";
                break;
            case 'b':
                std::cout << "birb\n";
                break;
            case 'e':
                std::cout << "eduardo\n";
                break;
            case 'q':
                std::cout << "quitting \n";
                break;
            default:
                std::cout << "I don't know what that is \n";

            }


        } while (temp != 'q');
    }
    std::cout << "give me 3 numbers\n";
    int a = 0; std::cin >> a;
    int b = 0; std::cin >> b;
    int c = 0; std::cin >> c;
    srand(time(NULL));
    int nume = 0;
    while (nume != 75) {
        std::cout << (nume = 51 + rand() % 50) << std::endl;
    }

    beepfor(1, 5);
    return 1;
};
