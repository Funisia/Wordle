#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

// NOTE: This serves as a functional "dictionary" of sorts for WORDLE
// This code takes a word from the user. 
// The user then lists the labels assigned to the characters in the provided word 
// Definitions:
    // Gray Character   (gray char)   : Character not in the word in any spot
    // Green Character  (green char)  : Character is in the word and in the correct spot
    // Yellow Character (yellow char) : Character is in the word but in the wrong spot

// The code will provide the user with a list of possible words or a random word to enter for their next guess

// Implement in the future:
// ordered kind of:
// Ask for "gray chars"
// Ask for "green chars", and "yellow chars" & their positions
// Add all words that DO NOT have the gray chars in them to next vector "v2"
// From the words added to v2, check words in v2 for "green chars" in their specificed positions
// If "green chars" present: 
      // add all words with "green chars" in specified position to v3
      // If "yellow chars" present:
          // add all words with "yellow chars" in them, but IN DIFFERENT positions to v3
      // provide new list of words and/or random word to guess next
// IF NO "green chars" present:
      // If "yellow chars" present:
          // add all words with "yellow chars" in them, but IN DIFFERENT positions to v3
      // provide new list of words and/or random word to guess next
// IF NO "green chars" & NO "yellow chars":
      // provide list of words with "gray chars" and/or random word to guess next

// LOOP

// Features:
// idk but there are posibilities for optimization once the original idea is up & running



int main()
{

  // Opening the file
    ifstream file("wordle-La.txt");
 
    vector<string> v1,v2,v3,v4,v5;
    string str;
 
    // Read the next line from File until it reaches the end
    while (file >> str) {
        // Now keep reading next line and push it in vector function until end of file
        v1.push_back(str);
    }

    // user input
    string input1, input2, input3, input4, inpupt5;


    // User enters first guess
    cout << "Enter first guess: " << endl;
    cin >> input1;    // first guess saved in str
    
    if (input1.length() > 5)
    {
      printf("Invalid input");
      EXIT_FAILURE;
    }
    



    //cout << v[1] << endl;

  return 0;
}