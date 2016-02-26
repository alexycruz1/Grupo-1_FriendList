FriendList.exe:grupo#1_laboratorio5.o amigo.o
	g++ grupo#1_laboratorio5.o amigo.o -lncurses

grupo#1_laboratorio5.o:	grupo#1_laboratorio5.cpp person.h
	g++ -c grupo#1_laboratorio5.cpp -lncurses

amigo.o:	amigo.h amigo.cpp
	g++ -c amigo.cpp		
