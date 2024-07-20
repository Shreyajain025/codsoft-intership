
#include <iostream>
using namespace std;
int main()
{

int range;
cout<<"enter a range of random number: " ;
cin>>range;
int random =rand()% range;
    cout<<"guess a number!!"<<endl;
    int userGuess;

    do
    {
        cout << " your guess: ";
        cin >> userGuess;
         if(userGuess > range){
            cout <<"the number you guessed is out of range!!"<<endl;

         }
        else if (userGuess >random)
        {
            cout << "Too high!" << endl;
        }
        else if (userGuess <random)
        {
            cout << "Too low!" << endl;
        }

    } while (userGuess != random);

    cout << "Congratulations! You guessed the right number." << endl;

    return 0;
}
