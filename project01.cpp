
 #include <iostream>
 #include <cstdlib>
 #include <ctime>
 
 using namespace std;
 
 int main() {
 	srand(time(0));
 	int number = rand() % 100 + 1; // 1-100 arası rastgele sayı
 	int guess;
 	int attempts = 0;
 	
 	cout << "Guess the number (1-100): ";
 	
 	do {
 		cin >> guess;
 		attempts++;
 		
 		if (guess > number)
 		    cout << "Too high! try again: ";
 		else if (guess < number)
 		    cout << "Too low! Try again: ";
 		else
 		    cout << "Correct! You found the number in " << attempts << " attempts." << endl;
	 } while (guess != number);
	 
	 return 0;
 }
