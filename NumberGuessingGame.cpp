/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
  
  bool choice = true;
  
  while (choice){                                                               // Start the game
      srand(time(NULL));
    
      int number = (rand() % 100) + 1;                                          // Create random number
      int guess;
      int attempts = 0;
    
      while (guess != number){                                                  // Guess attempts
        cout << "Guess the number 1-100\n";
        cin >> guess;
        if (guess > 100 || guess < 1){
            cout << "*ERROR**ERROR*\nNumber must be between 1-100\n";
            continue;
        }
        if (guess > number){
            cout << "Ah, too high try again.\n\n";
        
        }
        if (guess < number){
            cout << "Dang, too low try again.\n\n";
        }
        attempts++;
      }
      cout << "Congrats you got it in " << attempts << " tries.\n";
      cout << "The correct number was number " << number << ".\n\n";                // Once you win
    cout << "Do you want to play again?\n";
    cout << "(1 for Yes, 0 for No)\n";
    cin >> choice;
    cout << endl;
  }  
    
  cout << "Thanks for playing!";
    
  return 0;
}

