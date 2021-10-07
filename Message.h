/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Message.h
 * Author: etudiant
 *
 * Created on 7 octobre 2021, 19:07
 */

#ifndef MESSAGE_H
#define MESSAGE_H

#include <string>

class Message
{
  static int nombre ; 
  
public:
  Message (int = 0, std::string = "Message vide");
  Message (const Message& orig);
  virtual ~Message ();
private:
  
  int numero ; 
  std::string texte ;

};

#endif /* MESSAGE_H */

