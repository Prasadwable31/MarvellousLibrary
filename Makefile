CC = gcc

# Sources
Source = "./src/Main.c" "./src/Helper.c"
Test = "./Test/Testing_Calculator.c" "./Test/unity.c" "./src/Helper.c"

# Outputs
Output = "./Myexe"
TestExe = "./Test.exe"

# Declare phony targets to avoid conflicts with files of the same name
.PHONY: Compile run Testing clean

Compile:
	$(CC) $(Source) -o $(Output) -w -lm

run: Compile
	$(Output)

Testing:
	$(CC) $(Test) -o $(TestExe) -w -lm
	$(TestExe)

clean:
	rm -f $(Output)
	rm -f $(TestExe)
