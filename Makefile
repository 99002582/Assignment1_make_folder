
SRC = src/bit_oprtn.c\
src/num_oprtn.c\
src/mstr.c\
src/test.c
 
INC = -Iinc\
 

PROJECT_NAME = all.out
 
$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)
 
all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)
 
run:$(PROJECT_NAME)
	./${​​​​​​​PROJECT_NAME}​​​​​​​
 
clean:
	rm -rf $(PROJECT_NAME)

