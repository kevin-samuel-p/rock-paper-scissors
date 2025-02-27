#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

enum Choice {   //Valid game choices
    ROCK,
    PAPER,
    SCISSORS
};

string toString(Choice choice) {    //To convert the user's and computer's choice to a string
    switch(choice) {
        case ROCK:      return "Rock";
        case PAPER:     return "Paper";
        case SCISSORS:  return "Scissors";
        default:        return "";          //It'll never come to this
    }
}

int outcome(Choice user, Choice comp) {
    if (user == comp) {
        return 0; //tie
    }
    else if ((user > comp && 
        !(user == SCISSORS && comp == ROCK)) ||
        user == ROCK && comp == SCISSORS) {
        return 1; //win
    }
    else {
        return -1; //loss
    }
}

int round()  {
    srand(time(0));
    int x = rand(); char y;
    Choice computer, user;  

    cout << "(Type r for rock, p for paper, or s for scissors)" << endl;
    while (true) {
        cin >> y;                   //user input
        switch(y) {
            case 'r': case 'R':
                user = ROCK;
                break;
            case 'p': case 'P':
                user = PAPER;
                break;
            case 's': case 'S':
                user = SCISSORS;
                break;
            default:
                continue;           //if user's input isn't valid
        }   break;
    }
    computer = static_cast<Choice>(x % 3);  
    cout << endl << endl;

    cout << "Your Choice:\t\t" << toString(user) << endl
        << "Computer's Choice:\t" << toString(computer) << endl << endl;

    return outcome(user, computer);
}

int main(int argc, char *argv[]) {                                              /*/
                                                                                ///
    Three match formats:                                                        ///
        1. Single round                                                         ///
        2. Best-of-3                                                            ///
        3. Best-of-5                                                            ///
                                                                                ///
    For 2nd and 3rd format, tiebreakers might need to be implemented. No probs. ///
                                                                                /*/

    int matchFormat, n;     //n is to keep track of the number of rounds

    struct Score {
        int playerScore, compScore;
    } score = {0, 0};                   //Scorekeeper

    cout << "ROCK/PAPER/SCISSORS!" << endl << endl << endl
        << "Choose your pick:" << endl << endl
        << "1. Quick Match" << endl
        << "2. Bo3" << endl
        << "3. Bo5" << endl << endl
        << "Input the corresponding number...";

    //Get input for match format
    while (true) {
        cin >> matchFormat;
        switch(matchFormat) {
            case 1:     //We can keep execution simple here. Run a single round, return main().
                cout << endl << endl << "START!" << endl;
                switch(round()) {
                    case -1:
                        cout << "GAME OVER!";
                        break;
                    case 0:
                        cout << "IT'S A TIE!";
                        break;
                    case 1:
                        cout << "CONGRATULATIONS! YOU WIN!";
                        break;
                    default:
                        break;
                } return 0;
            case 2:
                n = 3;
                break;
            case 3:
                n = 5;
                break;
            default:
                cout << endl << "That's not a valid option!";
                continue;   //To obtain valid input
        } break;            //If valid input is obtained
    }

    for (int i = 0; i < n; i++) {
        cout << endl << endl << "ROUND " << (i+1) << endl;
        if (score.playerScore == score.compScore && i == n-1) 
            cout << "TIEBREAKER!!!" << endl;
        
        switch(round()) {
            case -1:
                cout << "YOU LOSE!" << endl;
                score.compScore++;
                break;
            case 0:
                cout << "IT'S A TIE!" << endl;
                break;
            case 1:
                cout << "YOU WIN!" << endl;
                score.playerScore++;
                break;
            default:
                break;
        }

        //Trigger tiebreaker round
        if (score.compScore == score.playerScore && i == n-1) n++; 

        //Display score at the end of the round
        cout << endl << "Score: ";

        int greater = (score.playerScore > score.compScore) ? score.playerScore : score.compScore;
        int lesser = (score.playerScore < score.compScore) ? score.playerScore : score.compScore;
        cout << greater << " - " << lesser << endl;

        //End if win is impossible for lesser player
        if (greater - lesser > n - i - 1) break;
    }

    if (score.playerScore > score.compScore) {
        cout << endl << "CONGRATULATIONS! YOU WIN";
    }
    else {
        cout << endl << "GAME OVER";
    }

    char trashvar;
    cout << endl << endl << "Press any letter to continue..." << endl;
    cin >> trashvar;

    return 0;
}