/* 
  name: Random Number example 1
  author: Jennifer Reed
  date: 10/26/2021

  description: Generate 10 random numbers between 1 and 100
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // Seed the randomizer - time(0) is the number of seconds since  Jan 1, 1970 00:00:00 UTC (also known as epoch time)
    srand((int)time(0));

    for(int i=0; i<=10; i++) {
        // Generate a random number between 0 and 99 and add 1 to it
        int r = (rand() % 100) + 1;

        // Output number
        cout << r << " "<< endl;
	}
    return(0);
}