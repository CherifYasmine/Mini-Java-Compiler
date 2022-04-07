# Mini Java Compiler
### Run the syntax generator
flex minijava.lex <br/>
bison -d minijava.y <br/>
gcc -o miniJava minijava.tab.c lex.yy.x <br/>
miniJava.exe < ../example.exe <br/>
### Run the application
python main.py

![Mini Java Compiler](minijava.png)
