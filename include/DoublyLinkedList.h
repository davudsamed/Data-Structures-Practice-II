/**        
 * @file  DoublyLinkedList.h  
 * @description Bu programda çift yönlü bağlı listeler kullanılarak birbirini tekrar eden verilere özel işlemler uygulanıyor ve veri tasarrufu sağlanıyor.
 * @course  Örgün Eğitim 2.Sınıf   
 * @assignment 2 
 * @date  18/11/2019  
 * @author  Furkan Ergün(furkan.ergun@ogr.sakarya.edu.tr) & Davud Samed Tombul(b171210007@sakarya.edu.tr)
 **/
#ifndef List_H
#define List_H
#include <iostream>
#include "Node.h"
using namespace std;

class DoublyLinkedList // Çift yönlü bağlı liste'nin ilgili sınıfı oluşturuluyor ve header dosyası olduğu için gövdeler yazılmıyor.
{
public:
    void addEnd(string);
    void removeDuplicate();
    void printList();
    int getIncome();
    ~DoublyLinkedList();

private:
    Node *root;
    int income;
};
#endif