/**        
 * @file  Node.h
 * @description Bu programda çift yönlü bağlı listeler kullanılarak birbirini tekrar eden verilere özel işlemler uygulanıyor ve veri tasarrufu sağlanıyor.
 * @course  Örgün Eğitim 2.Sınıf 
 * @assignment  2  
 * @date  18/11/2019  
 * @author  Furkan Ergün(furkan.ergun@ogr.sakarya.edu.tr)  & Davud Samed Tombul(b171210007@sakarya.edu.tr) 
 **/
#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

class Node // Düğüm sınıfı oluşturuluyor.
{
public:
    Node *next;
    Node *prev;
    string kelime;
    int prevNumber;
};
#endif