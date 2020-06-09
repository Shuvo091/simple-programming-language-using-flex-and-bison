# simple-programming-language-using-flex-and-bison
This is a project that I have done in my 3rd year as a CSE student. A simplistic programming language compiler using flex and bison.





Step 1: I think a demo program is able to express the structire of my language. Think of it as an unpolished version of 'C' with different syntax.

Structure of my language:

import std.h
import con.h
func main()
{
  ||this is a single line comment


    int var :         || this is a declartion
    var = 4:
    var = 2*var+6:
    print(var):

    
   int a :
    a = 4:
    s=0:
    float a:
    if(a==1)
    {
        print(a):
    }
    elif(a==2)
    {
        print(a):
    }
    else
    {
        print(a):
    }
    
    int x,inc:
    x = 10+15:
    print(x):
    x = x + x:
    print(x):
    power(56,2):
    int a1,b1,zzz,xxx:
    switch(x)
    {
        case 1 ~
        a1=1 :
        case 2 ~
        b1=2:
        default ~
        xxx=3:
    }

    a1=1000:
    b1=10:
    print(b1):
    for (a1=1: b1=10: inc=1:)
    {
        print(x):
    }
 
}



step 2: How to run:

i) clone this repository on your computer.
ii) unzip the file in your preferred directory.
iii) open cmd on that directory.
iv) type the following on cmd-
    flex id.l
    bison -dy id.y
    gcc lex.yy.c id.tab.c id.exe
v) open out.txt to see the output
vi) open input.txt to edit your input text for further uses.
