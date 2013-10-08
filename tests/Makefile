test:
	$(CXX)	-std=c++0x \
		-Wall \
		-pedantic \
		-I ../ test.cc \
		-o test.out
ctest:
	$(CXX)	-std=c++0x \
		-Wall \
		-pedantic \
		-DUSE_ANSI_COLORS \
		-I ../ test.cc \
		-o test.out
clean:
	rm -rf *.out

