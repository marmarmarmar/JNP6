All: Citizen

CitizenName: citizenname.cc citizenname.hh
	g++ -Wall citizenname.cc -std=c++11 -o citizenname.o

Citizen: citizen.cc citizen.hh
	g++ -Wall citizen.cc -std=c++11 -o citizen.o
