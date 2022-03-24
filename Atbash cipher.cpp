/* FCAI – Programming 1 – 2022 - Assignment 2 
 Program Name: Atbash Cipher.cpp
 Program Description:convert A to z and B to Y
 Last Modification Date:24/3/2022
 Author and ID and Group: Nermen Hosny Zaki_ 20210592_ Group A*/
#include <iostream>
#include<string>
#include <map>
using namespace std;
int main()
{
 //declarting map for the letters and its abtash ciphers    
 map<char,char>
 cipher{
     { 'a','z' },{'b','y'  },{'c','x'  },{'d', 'w' },{'e', 'v' },{'f', 'u' }, {'g','t'  }, {'h','s'  },{'i', 'r' },{'j', 'q' },{'k', 'p' },{'l',  'o'},{'m', 'n' },{'n', 'm' },{'o', 'l' },{'p', 'k' },
    {'q', 'j' },{'r', 'i' },{'s', 'h' },{'t', 'g' },{'u', 'f' },{'v',  'e'},{'w', 'd' },{'x',  'c'},{'y',  'b'},{'z', 'a' }};   
string letters ,letters2;
char letters1;
int choice;
//ask user to choise encreption or decreption
cout<<"enter choice from 1 for encryption ,2 for decryption and 3 end:";
cin>>choice;
 if (choice == 1)
{
//ask user to enter word to encrept
cout<<"enter word to code:";
//storing word
cin.clear();
cin.ignore();
getline (cin,letters);
//check if input word capital and convert to small
for(int i=0; i<letters.length();i++)//looping about each letter in word
{
         if(letters[i]>=65 && letters[i]<=96)
             {
                   letters[i]=letters[i]+32;//convert to small
                   letters1=cipher[letters[i]] ; //replace each letter to its cipher in atbash cipher
                    letters1=toupper(letters1);
                   letters2+=letters1;                              //conver cipher to capital
                   


              }
          else
//if letters is small we will convert to its cipher only
letters2+=cipher[letters[i]];

}
cout<<letters2;//print out encrypted word
}
//when user enter option is decreption
else if (choice==2)
 {  
   //ask user to enter encrypted  word;
cout<<"enter word to decode:";
 //storin word
cin.clear();
cin.ignore();
getline(cin,letters);
//check if word capital and convert to small
for(int i=0; i<letters.length();i++)//looping about each letter in word
{
      if(letters[i]>=65 && letters[i]<=96)
        {
            letters[i]=letters[i]+32;//convert to small
           letters1=cipher[letters[i]] ;//replace each letter to its cipher in atbash cipher
           letters1=toupper(letters1); //conver cipher to capital
            letters2+=letters1;


        }
//if letters is small we will convert to its cipher only       
    else{

        letters2+=cipher[letters[i]];
}
}
        cout<<letters2;//print out encrypted word
}
return 0;
}