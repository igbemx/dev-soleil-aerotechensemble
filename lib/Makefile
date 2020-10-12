  #
  # Makefile to generate a Tango server
  #
 
  CC = c++
  BIN_DIR = .
  TANGO_HOME = /usr/include/tango
  LINLIB_HOME = /usr/include
  YAT_HOME = /usr/include/yat
  YAT4TANGO_HOME = /usr/include/yat4tango
  DS_HOME = .
 
  INCLUDE_DIRS = -I $(TANGO_HOME) -I $(DS_HOME)	-I $(LINLIB_HOME) -I $(YAT_HOME) -I $(YAT4TANGO_HOME) #/include/$(BIN_DIR) -I .
 
 
  LIB_DIRS = -L /usr/lib64
 
 
  CXXFLAGS = -D_REENTRANT -std=c++0x -fPIC $(INCLUDE_DIRS)
  LFLAGS = $(LIB_DIRS) -ltango \
                       -llog4tango \
                       -lomniORB4 \
                       -lomniDynamic4 \
                       -lCOS4 \
                       -lomnithread \
                       -lzmq \
                       -llog4tango \
                       -lpthread \
                       -lyat \
                       -lyat4tango
 
 
  SVC_OBJS = cEnsemble.o \
             SocketPool.o \
             AbstractAerotech.o \
             cA3200.o
 
 
  .SUFFIXES: .o .cpp
  .cpp.o:
	$(CC) $(CXXFLAGS) -c $<
 
  all: libensemble.so
 
  libensemble.so: $(SVC_OBJS)
	$(LINK.cpp) -shared $^ -o $@

  libensemble.a: $(SVC_OBJS)
	ar rcs libensemble.a $(SVC_OBJS)
 
  clean:
	rm -f *.o *.a *.so core
