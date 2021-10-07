/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: etudiant
 *
 * Created on 7 octobre 2021, 19:06
 */



#include <cstdlib>
#include "Message.h"
#include <iostream>
#include <vector>

#define MAX_MESSAGES 5 ; 

using namespace std;



/*
 * 
 */
int
main (int argc, char** argv)
{
  vector<Message> mesMessages ; 
  
  cout << "Utilisation de push_back: " << endl ; 
  
  for (size_t i = 0; i < 5; i++) mesMessages.push_back (Message(i, "Coucou")) ; 
  
  mesMessages.clear () ; 
  
  cout << "Utilisation de emplace_back avec des paramètres: " << endl ; 
  
  for (size_t i = 0; i < 5; i++) mesMessages.emplace_back (i, "Coucou") ; 
  
  mesMessages.clear () ; 
  
  cout << "Utilisation de emplace_back avec constructeur par défaut: " << endl ; 
  
  for (size_t i = 0; i < 5; i++) mesMessages.emplace_back () ; 

  return 0;
}

