# Rock-Paper-Scissors Game

This is a simple command-line Rock-Paper-Scissors game written in C++. Players compete against the computer in a best-of-N match, with an automatic tiebreaker system if the final score is tied.

## Features
- Play against a computer opponent.
- Choose between quick math or best-of-3/best-of-5.
- Automatic tiebreaker round if necessary.
- Tracks and displays the score after each round.

## How to Play
1. Run the program.
2. Input the match format (`1` for Single Match, `2` for Best-of-3, or `3` for Best-of-5, etc.).
3. Choose `r` (Rock), `p` (Paper), or `s` (Scissors) for each round.
4. The computer will randomly select its move.
5. The winner of each round is displayed, along with the current score.
6. If the final round results in a tie, a tiebreaker round is automatically triggered.
7. Given the number of remaining rounds, if a win becomes impossible for the other player, the first player is automatically declared the winner of the game.

## Compilation & Execution
### **Using g++ (GCC Compiler)**
```sh
 g++ -o rock-paper-scissors rock-paper-scissors.cpp
 ./rock-paper-scissors
```

### **Using Clang**
```sh
 clang++ -o rock-paper-scissors rock-paper-scissors.cpp
 ./rock-paper-scissors
```

####Altneratively, you could just download the executable (`.exe`).

## Example Gameplay
```
Enter the match format (e.g., 3 for Bo5): 3

ROUND 1
Your move (r/p/s): r
Computer chose Scissors
YOU WIN! (Score: 1-0)

ROUND 2
Your move (r/p/s): r
Computer chose Scissors
YOU WIN! (Score: 2-0)

ROUND 3
Your move (r/p/s): r
Computer chose Paper
COMPUTER WINS! (Score: 2-1)

ROUND 4
Your move (r/p/s): s
Computer chose Rock
COMPUTER WINS! (Score: 2-2)

TIEBREAKER!!!

ROUND 5
Your move (r/p/s): r
Computer chose Scissors
YOU WIN THE GAME! (Final Score: 3-2)
```

## Notes
- The game automatically detects when one player has an insurmountable lead and ends the match early.
- If a tiebreaker occurs, it continues until a player wins.

## License
This project is open-source and available for modification and distribution.

## Future Enhancements
- Implement a GUI version.
- Add a difficulty setting for computer AI.
- Support for multiplayer mode.

---
Enjoy playing Rock-Paper-Scissors! 🎮

