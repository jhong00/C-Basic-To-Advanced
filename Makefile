#target : dependencies
	#actions

#EXAMPLE 

# example.o relies on example.h and example.cpp
	# we're trying to create example.o so we need to 
	# run a certain command
		# g++ -std=c++17 is what i usually run 

# so... 

#example.o: example.h example.cpp // what relies on 
	#g++ -c example.cpp // what we're compiling

#example2.o: example2.h example2.cpp // what relies on 
	#g++ -std=c++17 example2.cpp // what we're compiling 


	

clean: 
	-rm a.out my.output