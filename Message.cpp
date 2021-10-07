/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Message.cpp
 * Author: etudiant
 * 
 * Created on 7 octobre 2021, 19:07
 */

#include "Message.h"
#include <iostream>

int Message::nombre = 0 ; 

Message::Message (int x, std::string m) : numero(x), texte(m) {
  nombre++ ; 
  std::cout << "Message numéro " << numero << " construit! Il y a " << nombre << " instances!" << std::endl ; 
}

Message::Message (const Message& orig) : numero(orig.numero), texte(orig.texte) {
  nombre++ ; 
  std::cout << "Message numéro " << numero << " copié! Il y a " << nombre << " instances!" << std::endl ; 
}

Message::~Message () {
  nombre-- ; 
  std::cout << "Message numéro " << numero << " détruit! Il y a " << nombre << " instances!" << std::endl ; 
}

