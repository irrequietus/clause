
CXXFLAGS+= -Wall -Wextra -Werror -pedantic -std=c++11 -I ..
CPPFLAGS+= -DUSE_ANSI_COLORS

test:
	$(CXX) $(CXXFLAGS) ample/vldt1.cc -o ample/vldt1.test
	$(CXX) $(CXXFLAGS) ample/vldt2.cc -o ample/vldt2.test
	$(CXX) $(CXXFLAGS) ample/charseq.cc -o ample/charseq.test
	$(CXX) $(CXXFLAGS) ample/vector.cc -o ample/vector.test
	$(CXX) $(CXXFLAGS) ample/natural.cc -o ample/natural.test
	$(CXX) $(CXXFLAGS) ppmpf/vcat.cc -o ppmpf/vcat.test
	$(CXX) $(CXXFLAGS) ppmpf/nargs.cc -o ppmpf/nargs.test
	$(CXX) $(CXXFLAGS) ppmpf/range.cc -o ppmpf/range.test
	$(CXX) $(CXXFLAGS) ppmpf/tuple.cc -o ppmpf/tuple.test
	@for x in `find . -name *.test | sort`; do $$x; done
ctest:
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) ample/vldt1.cc -o ample/vldt1.test
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) ample/vldt2.cc -o ample/vldt2.test
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) ample/charseq.cc -o ample/charseq.test
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) ample/vector.cc -o ample/vector.test
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) ample/natural.cc -o ample/natural.test
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) ppmpf/vcat.cc -o ppmpf/vcat.test
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) ppmpf/nargs.cc -o ppmpf/nargs.test
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) ppmpf/range.cc -o ppmpf/range.test
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) ppmpf/tuple.cc -o ppmpf/tuple.test
	@for x in `find . -name *.test | sort`; do $$x; done
clean:
	@rm -rf ample/*.test
	@rm -rf ppmpf/*.test

