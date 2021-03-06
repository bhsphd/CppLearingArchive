/*
 * =====================================================================================
 *
 *       Filename:  
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Thanks to github you know it
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author: Mahmut Erdem ÖZGEN   m.erdemozgen@gmail.com
 *   
 *
 * =====================================================================================
 */
#include <iostream>

int main(int argc, const char* argv[]) {
    int x = 3;
    int& y = x;

    std::cout << "x = " << x << std::endl << "y = " << y << std::endl;

    y = 7;  // modifies x

    std::cout << "x = " << x << std::endl << "y = " << y << std::endl;

    return 0;
}
