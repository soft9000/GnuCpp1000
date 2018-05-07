#include <stdio.h>
#include <memory.h>
#include "MyDynaStruct.hpp"

void DynaStruct::clone(DynaStruct *result) {
	if(result == NULL) return;
	result->initialize();
	if(this->name != NULL) {
		result->name = new char[80];
		::memcpy(result->name, this->name, 80);
	}
	result->account = this->account; // copy value
	result->balance = this->balance; // copy value
}

void DynaStruct::initialize(void) {
	if(this->name != NULL) {
		delete [] this->name;
		this->name = NULL;
	}
	this->account = NULL_ACCOUNT;
	this->balance = 0.0F;
}

bool DynaStruct::read(void) {
	if(this->name == NULL) {
		this->name = new char[80];
	}
	puts("** DATA ENTRE **");
	printf("Last Name:\t"); scanf("%s", this->name);
	printf("Account:\t"); scanf("%d", &this->account);	
	printf("Balance:\t"); scanf("%f", &this->balance);
	puts("** **");
	return true;
}

bool DynaStruct::display(void) {
	if(this->account == NULL_ACCOUNT) return false;
	if(this->name == NULL) return false;
	puts("\n** DATA REPORTE **");
	printf("NAME: %s\tACCT: %d\tBAL: $%.02f",
		this->name,
		this->account,
		this->balance
	);
	puts("\n** **");
	return true;
}

int main(void) {
	DynaStruct ds1;
	ds1.initialize();
	if(ds1.read() == false) {
		puts("Error: Read Failure.");
		return 1;
	}
	if(ds1.display() == false) {
		puts("Error: Display Failure.");
		return 1;
	}
	DynaStruct clone;
	ds1.clone(&clone);
	ds1.initialize();
	if(ds1.display() == true) {
		puts("Error: Re-Initialization Failure.");
		return 1;
	}
	if(clone.display() == false) {
		puts("Error: Clone Failure.");
		return 1;
	}
	puts("***** TESTING SUCCESS *****");
	return 0;
} // MyDynaStruct.cpp
