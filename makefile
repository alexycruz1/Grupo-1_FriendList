FriendList.exe:	main.o amigo.o
	g++ main.o amigo.o -lncurses

main.o:	main.cpp amigo.cpp
	g++ -c main.cpp -lncurses

amigo.o:	amigo.h amigo.cpp
	g++ -c amigo.cpp		
