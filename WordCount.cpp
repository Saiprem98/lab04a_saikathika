// WordCount.cpp
// Written by Richert Wang for CS 32, F18.

#include "WordCount.h"

using namespace std;

// Default constructor
WordCount::WordCount() {}

// Simple hash function. Do not modify.
size_t WordCount::hash(std::string word) const {
	size_t accumulator = 0;
	for (size_t i = 0; i < word.size(); i++) {
		accumulator += word.at(i);
	}
	return accumulator % CAPACITY;
}

int WordCount::getTotalWords() const {
	// STUB.
  int total;
  std::string word;
  for ( std::vector<std::pair<string,size_t>>:: iterator i = table.begin(); i!=table.end();i++){
    total += i->second;
  }
	return total;
}

int WordCount::getNumUniqueWords() const {
  int total; 
  for ( std::vector<std::pair<string,size_t>>:: iterator i = table.begin(); i!=table.end();i++){
    if(i->first != NULL)
      total++;
  }
	return total;
}

int WordCount::getWordCount(std::string word) const {
  int wordC; 
  if(table.find(word) == table.end()){
      return 0;
    }
   for ( std::vector<std::pair<string,size_t>>:: iterator i = table.begin(); i!=table.end();i++){
     if(i->first == word){
       wordC = i->second;
  }
   }
	return wordC;
}
	

int WordCount::incrWordCount(std::string word) {
	  int wordC;
	  if(table.find(word) != table.end()){
         for ( std::vector<std::pair<string,size_t>>:: iterator i = table.begin(); i!=table.end();i++){
     if(i->first == word){
       wordC = i->second;
       wordC++;
  }
 }
    }
  
	return wordC;
}


bool WordCount::isWordChar(char c) {
	// STUB
	return false;
}


std::string WordCount::stripWord(std::string word) {
	// STUB
	return "";
}
