#simple make for helloworld
#https://urban-institute.medium.com/fortran-and-docker-how-to-combine-legacy-code-with-cutting-edge-components-35e934b15023
HelloWorld: HelloWorld.o
	gfortran -o HelloWorld HelloWorld.o
HelloWorld.o: HelloWorld.f90
	gfortran -c -g -ffree-line-length-none HelloWorld.f90
clean:
	rm -f HelloWorld.o HelloWorld.exe
#end of makefile