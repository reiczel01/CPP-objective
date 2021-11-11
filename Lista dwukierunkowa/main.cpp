// C++ program to illustrate creation
// & traversal of Doubly Circular LL
#include <bits/stdc++.h>
#include <iostream>
#include <list>
using namespace std;
 class Node {
   private:
   int id;
   int data;
    Node* prev;

   public:
   Node* next;


   public:
   Node(int id, int data)
   {
     this->id = id;
     this->data = data;
     next = nullptr;
     prev = nullptr;
   }
   void setNext(Node* next)
   {
     this->next = next;
   }

   void setPrev(Node* prev)
   {
     this->prev = prev;
   }

   void setId(int id)
   {
     this->id = id;
   }

  void setData(int data)
  {
    this->data = data;
  }
   Node* getNext()
   {
     return next;
   }

   Node* getPrev()
   {
     return prev;
   }

   int getId()
   {
     return id;
   }

   int getData()
   {
     return data;
   }
 };
  class MyList
  {
    private:
    Node* start;
    Node* stop;

    public:
    MyList(Node* start, Node* stop)
    {
      this->start = start;
      this->stop = stop;
    }

    void addElement(int id, Node* newElement)
    {
      if(stop->getId() == id)
      {
        Node* oldNext = stop->getNext();
        stop->setNext(newElement);
        oldNext->setPrev(newElement);
        newElement->setNext(oldNext);
        newElement->setPrev(stop);
        stop = newElement;
        return;
      }
      Node* temp = start;
      while(temp != stop)
      {
        if(temp->getId() == id)
        {
          Node* oldNext = temp->getNext();
          temp->setNext(newElement);
          oldNext->setPrev(newElement);
          newElement->setNext(oldNext);
          newElement->setPrev(temp);
          break;
        }
        temp = temp->getNext();
      }
    }

    void delElement(int id)
    {
      if(stop->getId() == id)
      {
        Node* oldNext = stop->getNext();
          stop->getPrev()->setNext(oldNext);
          oldNext->setPrev(stop->getPrev());
          stop = stop->getPrev();
        return;
      }
      Node* temp = start;
      while(temp != stop)
      {
        if(temp->getId() == id)
        {
          Node* oldNext = temp->getNext();
          temp->getPrev()->setNext(oldNext);
          oldNext->setPrev(temp->getPrev());
          break;
        }
        temp = temp->getNext();
      }
    }

    void display()
    {
      if(start == nullptr || stop == nullptr)
      {
        return;
      }
       Node* temp = start;
      while(temp->getNext() != start)
      {
        cout << temp->getId() << ":" << temp->getData() <<endl;
        temp = temp->getNext();
      }
      cout << stop->getId() << ":" << stop->getData() <<endl;
      cout<<endl;
    }

    Node* swap(Node* lhs, Node* rhs)
    {
        Node* oldRhsNext = rhs->getNext();
        Node* oldLhsPrev = lhs->getPrev();

        rhs->setNext(lhs);
        rhs->setPrev(lhs->getPrev());

        lhs->setNext(oldRhsNext);
        lhs->setPrev(rhs);

        oldRhsNext->setPrev(lhs);
        oldLhsPrev->setNext(rhs);

        return rhs;
    }

    void sort()
    {
        if(start == nullptr || stop == nullptr)
        {
        return;
        }
        int size = 0;
        Node* temp = start;
        while(temp != stop)
        {
            temp = temp->getNext();
            size++;
        }
        size++;
        Node** it;
        int i, j;
        bool swapped;
        for (i = 0; i <= size; i++)
        {
            it = &start;
            swapped = false;
            bool swapped_stop = false;
            for (j = 0; j < size - i - 1; j++)
            {
                Node* p1 = *it;
                Node* p2 = p1->getNext();
                if (p1->getId() > p2->getId())
                {
                    *it = swap(p1, p2);
                    swapped = true;
                    if(stop == p2)
                    {
                        swapped_stop = true;
                    }
                }
                if(swapped_stop)
                {
                    stop = p1;
                }
                it = &(*it)->next;

            }
            if (swapped == false)
                break;
        }
    }
  };

void test(){
      Node* tempPtr =new Node(3, 243);
      Node* tempPtr2 =new Node(3, 243);
    }

int main()
{
    Node obj1(2, 111);
    Node obj2(1,212);
    Node obj3(3,567);
    Node obj4(4,456);


    obj1.setNext(&obj2);
    obj1.setPrev(&obj4);

    obj2.setNext(&obj3);
    obj2.setPrev(&obj1);

    obj3.setNext(&obj4);
    obj3.setPrev(&obj2);

    obj4.setNext(&obj1);
    obj4.setPrev(&obj3);

    MyList mylist(&obj1,&obj4);
    Node obj5(5,324);
    mylist.addElement(1, &obj5);
    mylist.display();
    mylist.sort();
    mylist.display();
    mylist.delElement(3);
    mylist.addElement(5, new Node(3, 243));
    mylist.delElement(3);
    mylist.display();
    
    
    
    
    return 0;
}
