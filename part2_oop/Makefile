CC := g++

PATH_SRC   := src
PATH_BUILD := build
PATH_BIN   := $(PATH_BUILD)/bin
PATH_OBJ   := $(PATH_BUILD)/obj

include common_vars.mk

OUTPUT = main.out

vpath %.hpp $(PATH_SRC)
vpath %.cpp $(PATH_SRC)

OBJECTS := BaseAdvertising.o Ad.o Advertiser.o main.o

#--------------------------------------

all: $(PATH_BUILD) $(PATH_BIN) $(PATH_OBJ) $(PATH_BIN)/$(OUTPUT)

$(PATH_BIN)/$(OUTPUT): $(addprefix $(PATH_OBJ)/, $(OBJECTS))
	$(CC) $(CPPFLAGS) $^ -o $@

$(PATH_OBJ)/BaseAdvertising.o: BaseAdvertising.cpp BaseAdvertising.hpp
	$(CC) $(CPPFLAGS) -c $< -o $@

$(PATH_OBJ)/Advertiser.o: Advertiser.cpp Advertiser.hpp BaseAdvertising.hpp
	$(CC) $(CPPFLAGS) -c $< -o $@

$(PATH_OBJ)/Ad.o: Ad.cpp Ad.hpp Advertiser.hpp BaseAdvertising.hpp
	$(CC) $(CPPFLAGS) -c $< -o $@

$(PATH_OBJ)/main.o: main.cpp Ad.hpp Advertiser.hpp BaseAdvertising.hpp
	$(CC) $(CPPFLAGS) -c $< -o $@

#--------------------------------------

$(PATH_BUILD): ; $(MKDIR) $@
$(PATH_BIN): ; $(MKDIR) $@
$(PATH_OBJ): ; $(MKDIR) $@

.PHONY: all clean run

clean:
	$(RMDIR) $(PATH_BUILD) > $(NULL_DEVICE)
	$(RM) $(OUTPUT) > $(NULL_DEVICE)

run:
	./$(OUTPUT)
