#include <iostream>
#include <cstdlib>  // rand(), srand()
#include <ctime>    // time()
#include<limits>
#include"ClearScreenGacess.hpp"//here i clear screen every fail so that i look dynamis 
using namespace std;

//in this game i used ANSI colore code so that game become inserasting 
int main() {
    short next ;//play time 
    do{
        srand(time(0));//every time gausseing is will be unique 
         cout << "-------|*** Welcome to the Guessing Game! ***|---------\n";
    

        int slect;//this for difficulty level 
        int p; //this show color for difficulty level 

        cout<<"\nSlect difficulty level   :"<<endl;
        cout<<"\033[34m Easy[1]\t\033[35m Mideum[2]\t\033[36m Hard[3]  ->";
        cin>>slect;
        int difficulty_level;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');//clear buffer
    
  
        //give a choise to user to select difficulty level 
        //when user select difficulty leve show unique color 
        switch(slect){
          case 1:
          difficulty_level = 50;
          p = 34; //this ANSI code for each color 
          break;
          case 2 : 
          difficulty_level = 100;
          p = 35;
          break;
          case 3: 
          difficulty_level = 500;
          p = 36;
          break;
          default :
          difficulty_level = 20;
          p = 30;
          break;
        }
         // Step 2: we set boundry that gacihing number inside thess bounderes 
    

         int guess;     // variable to store user's guess
         int tries = 0; // count how many tries user took
         int number = rand() % difficulty_level + 1; 
    
         do{
                     cout << "["<<11-tries<<"]\033["<<p<<"m Enter your guess:\033[0m" ;
                     cin >> guess;
                     std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');//clear buffer
                     tries++;//the maximum 10 trialse 

                // Step 4: Give feedback
               
                if (guess < number) cout << "\033[31m Too low! Try again.\033[0m"<<endl;        
                else if (guess > number) cout << "\033[32m Too high! Try again.\033[0m"<<endl; 
                else cout << " Correct! You guessed the number in " << tries << " tries.\n";
                   
                  
                  
                  //i want to show answer in last so i do not clear screen 
               
            }while (guess != number && tries<11);//end of game 

            if(tries==11){//if all trials complit 
              cout<<"-------------------------------------------------| THE END |----------------------------------------"<<endl;
              cout<<"\nohh you take all attempt"<<endl;
              cout<<"Correct  number is -->"<<number<<endl;
            }
    
              cout<<"Try again [1]\tExit [0]";
              cin>>next;
             std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');//clear buffer
             if(next) clearScreen();//if user want to play again  then clear privious activity 
    }while(next);

    return 0;
}
