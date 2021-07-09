#ifndef INORDLIST_H_
#define INORDLIST_H_
#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <sstream>
#include <vector>
#include <map>
#include <algorithm>
#include <set>
#include <cassert>


using namespace std;
typedef int ListElemType;
struct Node;
typedef Node* link;
struct Node
{
	ListElemType elem;
	link next;
	link pred;
	int num;
};

class inord_list {
public:
	inord_list();
	~inord_list();
	void wordCount();
	void reversedLinkedList();
	void distWords();
	void charCount(char** argv);
	void frequentWord();
	void countWord(const ListElemType);
	void starting(const ListElemType);
	void containing(const ListElemType);
	void search(const ListElemType);
	void insert(const ListElemType);
	int count(const ListElemType);
	void add_node(const ListElemType);
	void add_node2(const int n);
	void removeDuplicates();
	void shiftleft();
	void shiftright();
	int removeOdd();
	int DeleteItem(const ListElemType);
	void print();
	void insertafter(const ListElemType&, link);
	void insertbefore(const ListElemType&, link);
	bool searchandmove(const ListElemType&);
private:

	link head;
	link tail;
	link current;
	link pred;
	link next;

};

#endif
