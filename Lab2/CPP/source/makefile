#simple make for helloworld
HelloWorld: HelloWorld.o
	g++ -o HelloWorld ./build/HelloWorld.o
HelloWorld.o: HelloWorld.cpp
	g++ -c -g HelloWorld.cpp HelloWorld
clean:
	rm -f HelloWorld HelloWorld.o
#end of makefile
