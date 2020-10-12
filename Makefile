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
 
 
  LIB_DIRS = -L /usr/lib64 -L ./lib 
 
 
  CXXFLAGS = -D_REENTRANT -std=c++0x $(INCLUDE_DIRS)
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
                       -lyat4tango \
                       -lensemble
 
  SVC_OBJS = main.o \
             ClassFactory.o \
             EnsembleExpert.o \
             EnsembleExpertClass.o \
             EnsembleExpertStateMachine.o \
             AerotechAxisClass.o \
             AerotechAxis.o \
             AerotechAxisStateMachine.o \
             AerotechBoxClass.o \
             AerotechBox.o \
             AerotechBoxStateMachine.o
             #A3200ExpertStateMachine.o \
             #A3200ExpertClass.o \
             #A3200Expert.o
 
  .SUFFIXES: .o .cpp
  .cpp.o:
	$(CC) $(CXXFLAGS) -c $<

  all: EnsembleDS
 
  EnsembleDS: $(SVC_OBJS)
	cd ./lib && $(MAKE) libensemble.a
	$(CC) $(SVC_OBJS) -o $(BIN_DIR)/EnsembleDS $(LFLAGS)
 
  clean:
	rm -f EnsembleDS *.so *.a *.o core
	cd ./lib && $(MAKE) clean
