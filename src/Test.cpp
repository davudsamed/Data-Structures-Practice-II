/**        
 * @file  Test.cpp  
 * @description Bu programda çift yönlü bağlı listeler kullanılarak birbirini tekrar eden verilere özel işlemler uygulanıyor ve veri tasarrufu sağlanıyor.
 * @course  Örgün Eğitim 2.Sınıf   
 * @assignment  2  
 * @date  18/11/2019   
 * @author  Furkan Ergün(furkan.ergun@ogr.sakarya.edu.tr) & Davud Samed Tombul(b171210007@sakarya.edu.tr)
 **/
#include <iostream>
#include <fstream>
#include "DoublyLinkedList.h"
#include "Node.h"
using namespace std;

int main()
{
    DoublyLinkedList *list = new DoublyLinkedList(); // Heap bellek bölgesinde çift yönlü bağıl liste oluşturuluyor.
    ifstream readFile("icerik.txt");
    string word;
    while (readFile >> word)
    {
        list->addEnd(word); // icerik.txt dosyasının içerisindeki veriler okunup çift  yönlü bağıl listenin sonuna parametreli addEnd fonksiyonu ile ekleniyor.
    }
    list->printList();         // Listenin içeriği printList fonksiyonu ile ekrana yazdırılıyor.
    cout << list->getIncome(); // Oluşturulan liste sayesinde elde edilen kazanç ekrana yazdırılıyor. Kazanç private değer olduğu için getIncome fonksiyonu kullanarak private olan değere ulaşılıyor.
    delete list;               //Heap bellek bölgesinde çöp birikmemesi için oluşturulan nesne siliniyor.
}