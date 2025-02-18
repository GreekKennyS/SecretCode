//Γιώργος Καγκασίδης
#include <iostream>
#include <fstream>
#include <string>
#include <limits> 
#include <cstdlib>
#include <ctime>
#include <vector>
#include <cctype>
//CODE HeartK1tt3n10
/*
//////////////////////////////////////////////////////////////
/////////////////////////ASCII ART////////////////////////////
//////////////////////////////////////////////////////////////
*//*//////////////*/void ASCIIART();/*////////////////////////
//////////////////////////////////////////////////////////////
*/
bool won1 = false;
bool won2 = false;
std::string code[4] = {"He","art","K1tt3n","10"};

void hangMan();
void guessingGame(char);
void mainMenuGuessGame();
void mainMenuHangMan();
void displayHangMan();
void displayWord(const std::string& word, const std::vector<bool>& guessed);
bool isWordGuessed(const std::vector<bool>& guessed);

void displayWord(const std::string& word, const std::vector<bool>& guessed) {
    for (size_t i = 0; i < word.length(); ++i) {
        if (guessed[i]) {
            std::cout << word[i] << " ";
        } else {
            std::cout << "_ ";
        }
    }
    std::cout << std::endl;
}

bool isWordGuessed(const std::vector<bool>& guessed) {
    for (bool letterGuessed : guessed) {
        if (!letterGuessed) {
            return false;
        }
    }
    return true;
}

void displayHangMan(int wrong){

switch(wrong){

case 0:
std::cout
<<
"\t  +---+\n"
"\t      |\n"
"\t      |\n"
"\t      |\n"
"\t      |\n"
"\t      |\n";
break;

case 1: 
std::cout
<<
"\t  +---+\n"
"\t  |   |\n"
"\t      |\n"
"\t      |\n"
"\t      |\n"
"\t      |\n";
//=========
break;

case 2:
std::cout
<<
"\t  +---+\n"
"\t  |   |\n"
"\t  O   |\n"
"\t      |\n"
"\t      |\n"
"\t      |\n";
//=========''', '''
break;

case 3:
std::cout
<<
"\t  +---+\n"
"\t  |   |\n"
"\t  O   |\n"
"\t  |   |\n"
"\t      |\n"
"\t      |\n";
//=========''', '''
break;

case 4:
std::cout
<<
"\t  +---+\n"
"\t  |   |\n"
"\t  O   |\n"
"\t /|   |\n"
"\t      |\n"
"\t      |\n";
//=========''', '''
break;

case 5:
std::cout
<<  
"\t  +---+\n"
"\t  |   |\n"
"\t  O   |\n"
"\t /|\\  |\n"
"\t      |\n"
"\t      |\n";
//=========''', '''
break;

case 6:
std::cout
<<  
"\t  +---+\n"
"\t  |   |\n"
"\t  O   |\n"
"\t /|\\  |\n"
"\t /    |\n"
"\t      |\n";
//=========''', '''
break;

case 7:
std::cout
<<
"\t  +---+\n"
"\t  |   |\n"
"\t  O   |\n"
"\t /|\\  |\n"
"\t / \\  |\n"
"\t      |\n";
//========='''
break;

default:
    std::cout<<"Something went wrong report to developer! error displayHangMan"<<std::endl;
    break;
  }

}



void ASCIIART(int choice){

////////////////////////////////////////////////////////////////////////////////
switch (choice)
{
case 1:
system("CLS");    
std::cout << 
        "⠀⠀⠀⠀⠀⠀⠀⢠⣿⣿⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⣦⡀\n" <<
        "⠀⠀⠀⠀⠀⠀⢠⣿⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀⣾⣿⣿⣿⣷⠀⠀⠀⠀⠀⠀⠀\n" <<
        "⠀⠀⠀⠀⠀⢀⣾⣿⣿⣿⣿⣿⡆⠀⠀⠀⠀⠀⠀⣸⣿⣿⣿⣿⣿⡆⠀⠀⠀⠀⠀⠀\n" <<
        "⠀⠀⠀⠀⠀⣾⣿⣿⣿⣿⣿⣿⣿⡀⠀⠀⠀⠀⢀⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀\n" <<
        "⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣧⠀⠀⠀⠀⣼⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀\n" <<
        "⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣠⣤⣤⣼⣿⣿⣿⣿⣿⣿⣿⣿⣷⠀⠀⠀⠀⠀\n" <<
        "⠀⠀⠀⢀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀\n" <<
        "⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀\n" <<
        "⠀⠀⠀⠘⣿⣿⣿⣿⠟⠁⠀⠀⠀⠹⣿⣿⣿⣿⣿⠟⠁⠀⠀⠹⣿⣿⡿⠀⠀⠀⠀⠀\n" <<
        "⠀⠀⠀⠀⣿⣿⣿⡇⠀⠀⠀⢼⣿⠀⢿⣿⣿⣿⣿⠀⣾⣷⠀⠀⢿⣿⣷⠀⠀⠀⠀⠀\n" <<
        "⠀⠀⠀⢠⣿⣿⣿⣷⡀⠀⠀⠈⠋⢀⣿⣿⣿⣿⣿⡀⠙⠋⠀⢀⣾⣿⣿⠀⠀⠀⠀⠀\n" <<
        "⢀⣀⣀⣀⣿⣿⣿⣿⣿⣶⣶⣶⣶⣿⣿⣿⣿⣾⣿⣷⣦⣤⣴⣿⣿⣿⣿⣤⠤⢤⣤⡄\n" <<
        "⠈⠉⠉⢉⣙⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣇⣀⣀⣀⡀⠀\n" <<
        "⠐⠚⠋⠉⢀⣬⡿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣥⣀⡀⠈⠀⠈⠛\n" <<
        "⠴⠚⠉⠀ ⠀⠀⠉⠛⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠛⠋⠁⠀⠀⠀⠉⠛⠢⠀⠀\n" <<
        "         ⣸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n" <<
        "        ⣰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀\n" <<
        "       ⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n" <<
        "      ⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n" <<
        "     ⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n" <<
        "    ⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀\n" <<
        "    ⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡄⠀⠀⠀⠀⠀⠀⠀⠀\n" <<
        "   ⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀\n";
        
        
    break;

default:
    std::cout<<"Problem with asciiart function\n";
    break;
}

}

void mainMenuHangMan(){

char menu {},difficulty{};

while ((menu != 'S') && (menu != 'Q'))
{
std::cin.clear();
std::cout.flush();

std::cout<<
"///////////////////////////////\n"
"////////////Hang-Man\\\\\\\\\\\\\\\\\\\\\\\n"
"///////////////////////////////\n";

std::cout<<"(S)tart game\n";
std::cout<<"(H)elp\n";
std::cout<<"(N)ext Game\n";
std::cout<<"(Q)uit\n";
std::cin>>menu;
menu = (char)toupper(menu);

if (menu == 'H')
{
    std::cout<<"A random Word gets chosen and you have to guess it before the hang of the man gets to him"; 
}
if (menu == 'N')
{
    system("CLS");
    mainMenuGuessGame();
//    mainMenuTicTacToe();
    return;
}

}
if (menu == 'S')
{
    hangMan();
    }

return;

}

void mainMenuGuessGame()
{

char menu {},difficulty{};

while ((menu != 'S') && (menu != 'Q'))
{
std::cin.clear();
std::cout.flush();

std::cout<<
"///////////////////////////////\n"
"/////////Guessing-Game\\\\\\\\\\\\\\\\\\\n"
"///////////////////////////////\n";

std::cout<<"(S)tart game\n";
std::cout<<"(H)elp\n";
std::cout<<"(N)ext Game\n";
std::cout<<"(Q)uit\n";
std::cin>>menu;
menu = (char)toupper(menu);

if (menu == 'H')
{
    std::cout<<"A random number will be generated."
    " The difficulty is set by you.\n"
    "Easy gives you 5 tries to guess from 1 to 10\n"
    "Medium gives you 10 tries to guess from 1 to 100\n"
    "Hard gives you 15 tries to guess from 1 to 1000"; 
}
if (menu == 'N')
{
    system("CLS");
//    mainMenuTicTacToe();
    mainMenuHangMan();
    return;
}

}
if (menu == 'S')
{
    while(!std::cin.fail()){
    std::cout<<"Choose Difficulty\n"
       <<"(E)asy 5 tries\n"         //x = rand() % 10 + 1; EASY (1-10)
       <<"(M)edium 10 tries\n"      //x = rand() % 100 + 1; MEDIUM (1-100)
       <<"(H)ard 15 tries\n";        //x = rand() % 1000 + 1; HARD (1-1000)

    std::cin>>difficulty;
    difficulty = (char)toupper(difficulty);
    

    if (!std::cin.fail() && (difficulty == 'E' || difficulty == 'M' || difficulty == 'H') )
    {
        guessingGame(difficulty);
        return;
    } 
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    }

return;

}

void guessingGame(char difficulty)
{

srand((unsigned int)time(0));

int x{},approximate{},max{},guess{},tries{},min{1},max_Condition{};
bool win = false;
        //x = rand() % 10 + 1; EASY
        //x = rand() % 100 + 1; MEDIUM
        //x = rand() % 1000 + 1; HARD


switch(difficulty){
case 'E': 
    x = rand() % 10 + 1;
    max = 10;
    max_Condition = 10;
    tries = 5;
    break;
case 'M':
    x = rand() % 100 + 1;
    max = 100;
    max_Condition = 100;
    tries = 10;
    break;
case 'H':
    x = rand() % 1000 + 1;
    max = 1000;
    max_Condition = 1000;
    tries = 15;
    break;
default:
    std::cout<<
    "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n"
    "Something went wrong with difficulty variable report it!\n"
    "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
    break;
}

do 
{
    for(;;){
    std::cout<<"Guess a number from " << min << " to "<<max<<std::endl;
    if(std::cin>>guess && guess>0 && guess <=max_Condition){
        break;
    }
    else{
        std::cerr<<"Wrong Input!\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    
 }
    // 1 2 3 4 ? 6 7 8 9 10
    // 1 (2) 3 ? 5 6 7 8 9 10
    if (guess == x)
    {
        win = true;
        break;
    }
    else if (guess<x){min = guess + 1;}
    else{max = guess - 1;}

        approximate = (max + min)/2;
std::cout<<"Approximate: "<<approximate<<std::endl;
std::cout<<"Tries left: "<<tries<<std::endl;
--tries;

} while (!win && tries>=0);


system("CLS");
if (win)
{
std::cout<<"\n"<<
"██    ██  ██████  ██    ██     ██     ██  ██████  ███    ██\n"<< 
" ██  ██  ██    ██ ██    ██     ██     ██ ██    ██ ████   ██ \n"<<
"  ████   ██    ██ ██    ██     ██  █  ██ ██    ██ ██ ██  ██ \n"<<
"   ██    ██    ██ ██    ██     ██ ███ ██ ██    ██ ██  ██ ██ \n"<<
"   ██     ██████   ██████       ███ ███   ██████  ██   ████ \n";
won2 = true;
std::cout<<"TΗε sεcond part of the code is "<< code[1] <<"______\n";
}
else{
 std::cout<<"\n"<<
"██████   █████  ███    ██      ██████  ██    ██ ████████      ██████  ███████     ████████ ██████  ██ ███████ ███████\n"<< 
"██   ██ ██   ██ ████   ██     ██    ██ ██    ██    ██        ██    ██ ██             ██    ██   ██ ██ ██      ██      \n"<<
"██████  ███████ ██ ██  ██     ██    ██ ██    ██    ██        ██    ██ █████          ██    ██████  ██ █████   ███████ \n"<<
"██   ██ ██   ██ ██  ██ ██     ██    ██ ██    ██    ██        ██    ██ ██             ██    ██   ██ ██ ██           ██ \n"<<
"██   ██ ██   ██ ██   ████      ██████   ██████     ██         ██████  ██             ██    ██   ██ ██ ███████ ███████ \n";
                                                                                                                        
}

char answer = 'a';
while (answer != 'Y' && answer != 'N')
{
std::cout<<"\n\n\nDo you want to go back to the main menu? Y for yes N for no and Quit\n";
std::cin>>answer;
answer = (char)toupper(answer);
}
if (answer == 'Y')
{
    system("CLS");
    mainMenuGuessGame();
}

}

void hangMan(){
    
    

    int random_number_0_to_3 = std::rand() % 3;

    std::string words[] = {"MRBUBBLES","I Love You","Mimon","You are my Yuno"};

    std::string selected_word = words[random_number_0_to_3];

    std::vector<bool> guessed(selected_word.length(), false);

    int max_incorrect_guesses = 7;
    int incorrect_guesses = 0;

    for (size_t i = 0; i < selected_word.length(); ++i) {
        if (selected_word[i] == ' ') {
            guessed[i] = true;
        }
    }
    
    
    while (incorrect_guesses < max_incorrect_guesses && !isWordGuessed(guessed)) {
    
        //Display the current state of the HangMan ASCII art
        displayHangMan(incorrect_guesses);
    
        // Display the current state of the word
        displayWord(selected_word, guessed);

        // Get the player's guess
        char guess;
        std::cout << "Enter your guess: ";
        std::cin >> guess;

    guess = std::tolower(guess);
        // Check if the guess is correct
        bool correct_guess = false;
        for (size_t i = 0; i < selected_word.length(); ++i) {
            if (std::tolower(selected_word[i]) == guess) {
                guessed[i] = true;
                correct_guess = true;
            }
        }

        // If the guess is incorrect, increment the incorrect guess count
        if (!correct_guess) {
            ++incorrect_guesses;
            std::cout << "Incorrect guess! You have " << (max_incorrect_guesses - incorrect_guesses) << " guesses left." << std::endl;
        }
    }

    displayHangMan(incorrect_guesses);

     if (isWordGuessed(guessed)) {
        std::cout << "Congratulations! You guessed the word: " << selected_word << std::endl;
        std::cout<<"The first part of the code is "<<code[0]<<"___"<<std::endl;
        won1 = true;
    } else {
        std::cout << "Game over! The word was: " << selected_word << std::endl;
    }

    char answer = 'a';
    while (answer != 'Y' && answer != 'N')
    {
    std::cout<<"\n\n\nDo you want to go back to the main menu? Y for yes N for no and Quit\n";
    std::cin>>answer;
    answer = (char)toupper(answer);
    }
    if (answer == 'Y')
    {
        mainMenuHangMan();
    }
   
}
void fileWriting()
{

//Creates file and writes into it CODE

std::ofstream myfile("i1sFIN_boo1sC0DE.txt");
for (int i = 0; i < 8; i++)
{
    myfile<<"???\\??\\??231??UnLoCK??23?????51\\????U?S?\\123??\\???????321??\\???41?????\n";
}
myfile<<"T40e F1nal Part 0f Thε C0de 1s "<< code[3] <<". ??\\??????321??\\??56?????????\n";
for (int i = 0; i < 48; i++)
{
    myfile<<"???\\??\\??13uN1OCk2???Us?32?????15\\??????\\321??\\???????123??\\???14?????\n";
}


myfile.close();

}

void endScreen()
{
    system("CLS");

    std::cout<<
"███████╗███╗   ██╗██████╗      ██████╗ ███████╗    ████████╗██╗  ██╗███████╗     ██████╗  █████╗ ███╗   ███╗███████╗   \n"
"██╔════╝████╗  ██║██╔══██╗    ██╔═══██╗██╔════╝    ╚══██╔══╝██║  ██║██╔════╝    ██╔════╝ ██╔══██╗████╗ ████║██╔════╝   \n"
"█████╗  ██╔██╗ ██║██║  ██║    ██║   ██║█████╗         ██║   ███████║█████╗      ██║  ███╗███████║██╔████╔██║█████╗     \n"
"██╔══╝  ██║╚██╗██║██║  ██║    ██║   ██║██╔══╝         ██║   ██╔══██║██╔══╝      ██║   ██║██╔══██║██║╚██╔╝██║██╔══╝     \n"
"███████╗██║ ╚████║██████╔╝    ╚██████╔╝██║            ██║   ██║  ██║███████╗    ╚██████╔╝██║  ██║██║ ╚═╝ ██║███████╗   \n"
"╚══════╝╚═╝  ╚═══╝╚═════╝      ╚═════╝ ╚═╝            ╚═╝   ╚═╝  ╚═╝╚══════╝     ╚═════╝ ╚═╝  ╚═╝╚═╝     ╚═╝╚══════╝   \n";
}

int main(){
    
    std::srand(time(0));

    mainMenuGuessGame();

if (won1 && won2)
{
    ASCIIART(1);
    char answer = 'a';
    while (answer != 'Y' && answer != 'N')
    {
        
        std::cout<<"\nDo you love me?"<<std::endl;
        std::cin>> answer;
        answer = toupper(answer);
    }
    if (answer == 'Y')
    {
        std::cout<<"Woah really ?!?!? :O\nPart 3 Code \n___"<< code[2] <<"__\n";        
    }else{
        std::cout<<"...oh ..ok :( heres your code :(((  \nPart 3 Code \n___"<<code[2]<<"__\n";
    }
    fileWriting();
}
    system("PAUSE");
    endScreen();

    system("PAUSE");
    return 0;
}
