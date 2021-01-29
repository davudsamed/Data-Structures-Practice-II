/**        
 * @file  DoublyLinkedList.cpp
 * @description  Bu programda çift yönlü bağlı listeler kullanılarak birbirini tekrar eden verilere özel işlemler uygulanıyor ve veri tasarrufu sağlanıyor.
 * @course  Örgün Eğitim 2.Sınıf   
 * @assignment  2
 * @date  18/11/2019   
 * @author  Furkan Ergün(furkan.ergun@ogr.sakarya.edu.tr) & Davud Samed Tombul(b171210007@sakarya.edu.tr)
 **/

#ifndef List
#include "Node.h"
#include "DoublyLinkedList.h"
#endif

void DoublyLinkedList::addEnd(string kelime) // Çift yönlü bağlı listenin sonuna eleman eklemek için bu parametreli fonksiyon kullanılıyor.
{
    if (root == NULL) // Düğüme eklenecek ilk eleman için özel işlem yapılıyor.
    {
        root = new Node();
        root->kelime = kelime;
        root->prevNumber = 0;
        root->next = NULL;
        return;
    }

    Node *iter = root;
    while (iter->next != NULL) //iter değişkeni listenin son elemanına ulaşana kadar while döngüsü ile ilerliyor.
    {
        iter = iter->next;
    }
    iter->next = new Node();
    iter->next->prev = iter; // Yeni oluşturulan düğümün previ itere bağlanıyor
    iter->next->kelime = kelime;
    iter->next->prevNumber = 0;
    iter->next->next = NULL; // Listenin son elemanının nextinin NULL u göstermesi sağlanıyor.
    removeDuplicate();       //Veri tekrar ediliyorsa, veriyi tasaruflu hale getiriyor.
}

void DoublyLinkedList::removeDuplicate() // Birbirini tekrar eden veriler bu fonksiyonda bulunup gerekli işlemler yapılıyor.
{
    int count = 0, scale = 0, temp;
    Node *ptr1 = root;
    Node *ptr2;
    while (ptr1->next != NULL)
    {
        ptr2 = ptr1->next;
        while (ptr2 != NULL)
        {
            count++;
            if (ptr1->kelime == ptr2->kelime && ptr1->kelime != "" && ptr2->kelime != "") //
            {
                temp = count;
                while (temp > 0)
                {
                    temp = temp / 10;
                    scale++;
                }
                income += (ptr2->kelime.size() - scale);
                ptr2->kelime = "";
                ptr2->prevNumber = count;
            }
            ptr2 = ptr2->next;
            scale = 0;
        }
        count = 0;
        ptr1 = ptr1->next;
    }
}

void DoublyLinkedList::printList() // Listenin içeriği ekrana yazdırılıyor.
{
    Node *temp = root;
    while (temp != NULL)
    {
        cout << temp->kelime << " - " << temp->prevNumber << "   :<->:   ";
        temp = temp->next;
    }
}
int DoublyLinkedList::getIncome() // Private olan income yani kazanç değerine bu fonksiyon ile ulaşılıyor.
{
    return income;
}

DoublyLinkedList::~DoublyLinkedList() // İşlemler sonunda root nesnesi silinerek heap bellek bölgesinde çöp oluşumu engelleniyor.
{
    delete root;
}
