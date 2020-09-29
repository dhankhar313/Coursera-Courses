## Quiz

### Question 1

What is the name of the library which contains the printf() function?

### Answer

stdio.h

### Question 2

What does the '\n' character mean?

### Answer

newline

### Question 3

What type of data is surrounded by double quotes in a program?

### Answer

A string

### Question 4

What C type is one byte long?

### Answer

char

### Question 5

Does the following statement evaluate to True or False?

`(10 || (5-2)) && ((6 / 2) - (1 + 2))`

### Answer

False

### Question 6

What does the following program print to the screen?

```
int main (){
   int x = 0, y = 1;
   if (x || !y)
  	printf("1");
   else if (y && x)
  	printf("2");
   else
  	printf("3");
}
```

### Answer

3

### Question 7

What does the following program print to the screen?

```
int main (){
   int x = 0, z = 2;
   while (x < 3) {
  	printf ("%i ", x);
      x = x + z;
    }
}
```

### Answer

0 2

### Question 8

What does the following program print to the screen?

```
int foo (int q) {
    int x = 1;
    return (q + x);
}
int main (){
   int x = 0;
   while (x < 3) {
  	printf ("%i ", x);
      x = x + foo(x);
    }
}
```

### Answer

0 1
