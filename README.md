# Rock-Paper-Scissors Game

This is a simple command-line Rock-Paper-Scissors game written in C++. Players compete against the computer in a best-of-N match, with an automatic tiebreaker system if the final score is tied.

## Features
- Play against a computer opponent.
- Best-of-N match system (e.g., Bo3, Bo5, Bo7, etc.).
- Automatic tiebreaker round if necessary.
- Tracks and displays the score after each round.

## How to Play
1. Run the program.
2. Input the match format (e.g., `3` for Best-of-5, `4` for Best-of-7, etc.).
3. Choose `r` (Rock), `p` (Paper), or `s` (Scissors) for each round.
4. The computer will randomly select its move.
5. The winner of each round is displayed, along with the current score.
6. If the final round results in a tie, a tiebreaker round is automatically triggered.
7. The first player to exceed half of `N` wins the game.

## Compilation & Execution
### **Using g++ (GCC Compiler)**
```sh
 g++ -o rps_game rps_game.cpp
 ./rps_game
```

### **Using Clang**
```sh
 clang++ -o rps_game rps_game.cpp
 ./rps_game
```

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

