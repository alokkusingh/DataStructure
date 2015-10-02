include ../Make.rule

LCFLAG = -fPIC -c -Wall

objects = LinkList.o InsertionSort.o MergeSort.o QuickSort.o HeapSort.o BubbleSort.o MyStack.o

#the below dll lib is only when wew are using cygwin
sharedL : $(objects) 
	$(CXX) -shared -Wl,-soname,libds.so.1 -o libds.so.1.0.1 $(objects) 
	mv libds.so.1.0.1 $(LIB_DIR)/
	ln -f -s $(LIB_DIR)/libds.so.1.0.1 $(LIB_DIR)/libds.so.1 
	ln -f -s $(LIB_DIR)/libds.so.1.0.1 $(LIB_DIR)/libds.so 
	ln -f -s $(LIB_DIR)/libds.so.1.0.1 $(LIB_DIR)/libds.dll 


LinkList.o : LinkList.c LinkList.h
	$(CC) $(LCFLAG) LinkList.c 

InsertionSort.o : InsertionSort.c InsertionSort.h
	$(CC) $(LCFLAG) InsertionSort.c

MergeSort.o : MergeSort.c MergeSort.h
	$(CC) $(LCFLAG) MergeSort.c

QuickSort.o : QuickSort.c QuickSort.h
	$(CC) $(LCFLAG) QuickSort.c

HeapSort.o : HeapSort.c HeapSort.h
	$(CC) $(LCFLAG) HeapSort.c

BubbleSort.o : BubbleSort.c BubbleSort.h
	$(CC) $(LCFLAG) BubbleSort.c

MyStack.o : MyStack.cpp MyStack.hpp
	$(CXX) $(LCFLAG) MyStack.cpp

MyQueue.o : MyQueue.hpp
	$(CXX) $(LCFLAG) -ftemplate-depth-25 MyQueue.hpp


clean :
	$(RM) $(objects) $(LIB_DIR)/libds*
