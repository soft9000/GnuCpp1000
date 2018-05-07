#ifndef MyDynaStruct
#define MyDynaStruct

#define NULL_ACCOUNT -1
struct DynaStruct {	
	char *name = NULL;
	long account = NULL_ACCOUNT;
	float balance = 0.0F;
	
	void clone(DynaStruct *destination);
	void initialize(void);
	bool read(void);
	bool display(void);
};

#endif