//RAMISH MASOOD, 209512, MTS-39-A
//NUST CEME, PAKISTAN

//Linked List Header File

#include "Operator.h"

class linkedlist
{
private:
	CN *head;

public:

	//Constructor
	linkedlist();

	void IAS(double val, double val2);				 // IAS = Insert at start
	void IAE(double val, double val2); 				 // IAE = Insert at end
	void DAP(int position);							 // DAP = Delete at position
	void VAP(int position);							 // VAP = Value at position 
	void IAP(double val, double val2, int position); //IAP = Insert at position
	void print();
};
