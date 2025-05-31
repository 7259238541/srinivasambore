#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

class Hangman
{
private:
    string word;
    string guessedWord;
    vector<char> guessedLetters;
    int wrongGuesses;
    const int maxWrongGuesses = 6;

public:
    Hangman(const string &secretWord) : word(secretWord), wrongGuesses(0)
    {
        guessedWord = string(word.length(), '_');
    }

    void displayStatus() const
    {
        cout << "\nWord: " << guessedWord << "\n";
        cout << "Guessed Letters: ";
        for (char c : guessedLetters)
        {
            cout << c << " ";
        }
        cout << "\nRemaining Attempts: " << maxWrongGuesses - wrongGuesses << endl;
    }

    bool guessLetter(char letter)
    {
        bool correctGuess = false;
        for (size_t i = 0; i < word.length(); ++i)
        {
            if (word[i] == letter && guessedWord[i] == '_')
            {
                guessedWord[i] = letter;
                correctGuess = true;
            }
        }
        if (!correctGuess)
        {
            wrongGuesses++;
        }
        guessedLetters.push_back(letter);
        return correctGuess;
    }

    bool isGameOver() const
    {
        return wrongGuesses >= maxWrongGuesses || guessedWord == word;
    }

    bool isWon() const
    {
        return guessedWord == word;
    }
};

string getRandomWord()
{
    vector<string> words = {"programming", "hangman", "cplusplus", "computer", "keyboard"};
    srand(static_cast<unsigned int>(time(0)));
    return words[rand() % words.size()];
}

int main()
{
    string secretWord = getRandomWord();
    Hangman game(secretWord);

    cout << "Welcome to Hangman!\n";

    while (!game.isGameOver())
    {
        game.displayStatus();

        char guess;
        cout << "Enter a letter: ";
        cin >> guess;
        guess = tolower(guess);

        if (game.guessLetter(guess))
        {
            cout << "Good guess!\n";
        }
        else
        {
            cout << "Incorrect guess.\n";
        }
    }

    game.displayStatus();

    if (game.isWon())
    {
        cout << "Congratulations! You've guessed the word correctly.\n";
    }
    else
    {
        cout << "Game over! The word was: " << secretWord << endl;
    }

    return 0;
}
