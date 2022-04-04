COMPILER = g++ -w
OBJECTS= main.o EfficientTruckloads.o Reverse.o TruckLoads.o
TARGET=main

$(TARGET): $(OBJECTS)
	$(COMPILER) -o $@ $^ 
$(OBJECTS):%.o:%.cpp
	$(COMPILER) -o $@ -c $<

.PHONY: all clean

all: main

clean: 
	rm $(wildcard *.o) main