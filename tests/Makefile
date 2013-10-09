test:
	@$(CXX)	-std=c++0x \
		-Wall \
		-Wextra \
		-pedantic \
		-I ../ test.cc \
		-o test.out
	@./test.out
ctest:
	@$(CXX)	-std=c++0x \
		-Wall \
		-Wextra \
		-pedantic \
		-DUSE_ANSI_COLORS \
		-I ../ test.cc \
		-o test.out
	@./test.out
clean:
	@rm -rf *.out

