# Welcome to My Color Code Challenge (CC-Challenge) Game
CC-Challenge is a game composed of 8 pieces of different colors. A secret code is then created, consisting of 4 distinct pieces. The player has 10 attempts to decipher the secret code. After each input, the game provides feedback to the player, indicating the number of correctly placed pieces and the number of misplaced pieces. It is a prototype of the Mastermind game.

## Task
The player has 10 attempts by default to find the secret code. After each input, the game indicates to the player the number of well-placed pieces and the number of misplaced pieces. Pieces will be labeled '0' through '7'. If the player correctly identifies the code, they win and the game stops. A misplaced piece is one that is present in the secret code but not positioned correctly.

## Description
The player's input was read via standard input. The input would then be filtered to determine whether it is a digit. Additionally, a termination command was implemented to allow the user to end the game. After each input, the secret codes were compared with the user's guessed codes. The game would indicate to the player the number of well-placed pieces and the number of misplaced pieces. Once all the inputs match the secret code, the program will display "Congrats! You did it!" and terminate.


## Installation
This game requires no installation. You can integrate it into your project by adopting the code.


## Usage
To use this project, you can run the following commands:
1. make
2. ./my_mastermind -c "1234" or ./my_mastermind -t "5" or ./my_mastermind -c "1234" -t "7"
Hint: -c is followed by a string representing the secret code
      -t is followed by a string representing the assigned game attempts
