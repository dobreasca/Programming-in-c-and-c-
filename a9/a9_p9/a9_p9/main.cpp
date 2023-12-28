/*
  CH-230-A
  a9_p9.cpp
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <iostream>
#include <cstring>
using namespace std;

void replace_vowels(char str[])
{
    char vowels[]="AEIOUaeiou";
    int n, i;
    n=strlen(str);
    for(i=0; i<n; i++)
        if(strchr(vowels, str[i]))
            str[i]='_';
}
//replaces the vowels with _

void my_lower(char str[])
{
    int n, i;
    n=strlen(str);
    for(i=0; i<n; i++)
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+'a'-'A';
}
//transforms the capital letters to lowercase

int main()
{
    char words[17][40]=
        {"computer", "television", "keyboard", "laptop", "mouse"};
    int i, number, number_of_tries;
    char chosen_word[40], copy[40], guess[40], answer[40];
    cout<<"Input 12 words of your choice:"<<'\n';
    for(i=5; i<17; i++)
    {
        cin.get();
        cin.get(words[i], 40);
    }
//the player inputs their 12 words
    cout<<"Let's begin the game!"<<'\n';
    do
    {
        number_of_tries=0;
        srand(static_cast<unsigned int>(time(0)));
        number=(rand()%17);//chooses a random number between 0 and 16
        strcpy(chosen_word, words[number]);
        strcpy(copy, chosen_word);
        replace_vowels(copy);
//since the replace function will change
//the string we have to create a copy
        cout<<"You have to try to guess this word:"<<'\n';
        cout<<copy<<'\n';
        cout<<"You can start guessing!"<<'\n';
        while(1)
        {
            cin.get();
            cin.get(guess, 40);
//the player starts guessing
            if(strcmp(guess, chosen_word)==0)
//we use the strcmp function to see if the answer matches the chosen word
            {
                cout<<"Congratulations!!! You have guessed the word in ";
                if(number_of_tries==0)
                    cout<<"one try :O"<<'\n';
                else
                    cout<<number_of_tries+1<<" tries :)"<<'\n';
                cout<<"Would you like to play again?(yes/no)"<<'\n';
                cin.get();
                cin.get(answer, 40);
                my_lower(answer);
                if(strcmp(answer, "yes")==0)
                    break;
                else
                {
                    cout<<"You've reached the end of the game!"<<'\n';
                    return 0;
                }
            }
            else if(strcmp(guess, "quit")==0)
            {
                cout<<"You've reached the end of the game!"<<'\n';
                return 0;
            }
            else
            {
//if the player didn't guess the word we increase the number of tries
                number_of_tries++;
                cout<<"Please try again :("<<'\n';
            }
        }
    }while(1);
//this loop will go on till the player writes quit or responds with no
    return 0;
}
