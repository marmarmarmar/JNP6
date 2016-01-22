All: main

main: gsb_example.o planetinterface.o planet.o citizenname.o citizen.o human.o binar.o earth.o qonos.o bynaus.o 
	g++ -Wall gsb_example.o planetinterface.o planet.o citizen.o citizenname.o human.o binar.o earth.o qonos.o bynaus.o -std=c++11

gsb_example.o: gsb_example.cpp
	g++ -Wall -c gsb_example.cpp -std=c++11

planetinterface.o: planetinterface.cc
	g++ -Wall -c planetinterface.cc -std=c++11

citizenname.o: citizenname.cc
	g++ -Wall -c citizenname.cc -std=c++11

citizen.o: citizen.cc  
	g++ -Wall -c citizen.cc -std=c++11

planet.o: planet.cc 
	g++ -Wall -c planet.cc -std=c++11

human.o: human.cc 
	g++ -Wall -c human.cc -std=c++11

binar.o: binar.cc 
	g++ -Wall -c binar.cc -std=c++11

qonos.o: qonos.cc 
	g++ -Wall -c qonos.cc -std=c++11

earth.o: earth.cc 
	g++ -Wall -c earth.cc -std=c++11

bynaus.o: bynaus.cc
	g++ -Wall -c bynaus.cc -std=c++11
