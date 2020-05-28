dog* pd= new yellowdog();
yellowdog py=dynamic_cast<yellowdog*>(pd);
//a It converts pointers/reference from one type to a related type
//b run time type check  if succeed related type , py=pd;if fail py=0;

//c It reqiures the 2 types to be polymorphism (have virtual function)
