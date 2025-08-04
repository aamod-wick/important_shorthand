

# OVERVIEW
These are the topics discussed in this github repo : - 
	1. JAVA Theory BASICS
	2. Java inheritance( do this from pdf shred on grp , will upload link soon)
	3. Java abstraction( do this from pdf shred on grp , will upload link soon)
	4. Java interview codes (based on my experience) : Exception handling ,Multithreading, Singleton class ,Design a system in java 
	5. Some good interview questions i found on gfg 

## Best resource to read if you have more than an hour to completely revise java ##
https://github.com/disha2sinha/Object-Oriented-Programming-in-Java?tab=readme-ov-file

1. java highly portable as its bytecodes can be run on any machine by an interpreter called **Java Virtual Machine(VM)**
2.  
	1. ****JVM****: JVM also known as Java Virtual Machine is a part of JRE. JVM is a type of interpreter responsible for converting bytecode into machine-readable code.
	2. ****JRE****: JRE stands for Java Runtime Environment, it is an installation package that provides an environment to run the Java program or application on any machine.
	3. ****JDK****: JDK stands for Java Development Kit which provides the environment to develop and execute Java programs.

3. ****JVM is platform dependent****, the bytecode can be created on any System and can be executed in any other system despite hardware or software being used which makes Java platform independent.

4. JIT stands for (Just-in-Time) compiler is a part of JRE(Java Runtime Environment), it is used for better performance of the Java applications during run-time
5. src code ->javac->bytecode->jit(part of jvm,)->compiled bytecode into native machine code at run time.)
7. ### Memory storages available with JVM
	1. Class(Method) Area
	2. Heap: Objects are created or objects are stored
	3. Stack: stores data and partial results
	4. Program Counter Register: stores the address of the Java virtual machine instruction
	5. Native Method Stack: stores all the native methods used in the application.
8. A Java String Pool is a place in heap memory where all the strings defined in the program are stored.
 Basic question checkpoints : -
	q.What will happen if we don't declare the main as static? 
		a.: We can declare the main method without using static and without getting any errors. But, the main method will not be treated as the entry point to the application or the program.
		**Remember 2 strings str1 ="aamod" and str2 = "aamod" point to same memory location in java**
	q. is java complete oop ?
		a. no due to static methods also some data structures such as arrays in java do not inherit completely from object class in java 
	q. What is string args[] in java?
		a.**String args[]****: It stores Java command-line arguments and is an array of type java.lang.String class.
	q. ###  What is the default value of float and double and byte datatype in Java
		a. default vals : 0.0f, 0.0d and  0 respectively.
9.  **static****: static is a keyword used so that we can use the element without initiating the class so to avoid the unnecessary allocation of the memory.
10. ***main****: main represents that the function declared is the main function. It helps JVM to identify that the declared function is the main function.
11. 
some basic codes : - 
```java class GFG {
    public static int ctr = 0;
    public GFG() { ctr++; }
    public static void main(String[] args)
    {
        GFG obj1 = new GFG();
        GFG obj2 = new GFG();
        GFG obj3 = new GFG();
        System.out.println("Number of objects created are "
                           + GFG.ctr);
    }
}```
```output 
Number of objects created are 3
```
11. ****Instance Variable:**** A class variable without the static modifier is called an instance variable. It is unique to each object (instance) of the class and is not shared between instances.
12. ****Class Variable:****  Class Variable variable can be declared anywhere at the class level using the keyword static. These variables can only have one value when applied to various objects. These variables can be shared by all class members since they are not connected to any specific object of the class.
13. All the stream classes can be divided into two types of classes that are ByteStream classes and CharacterStream Classes. The ByteStream classes are further divided into InputStream classes and OutputStream classes.
14. Operators like >> and >>> seem to be the same but act a bit differently. >> operator shifts the sign bits and the >>> operator is used in shifting out the zero-filled bits.
```java
import java.io.*;

// Driver
class GFG {
    public static void main(String[] args) {
        int a = -16, b = 1;
        // Use of >>
        System.out.println(a >> b);
        a = -17;
        b = 1;
        // Use of >>>
        System.out.println(a >>> b);
    }
}
```

``` txt
-8
2147483639
```
15. Explain Pillars of oops 
	1. Polymorphism : 
	2. Encapsulation:
	3. Inheritance :
	4. Abstraction : 
16. Method overriding, also known as run time polymorphism is one where the child class contains the same method as the parent class .Method overriding is a method to achieve Run-time polymorphism in Java.
17.  Method Overloading allows different methods to have the same name, but different signatures where the signature can differ by the number of input parameters or type of input parameters, or a mixture of both.This is compile time polymorphism in java 
18. static methods are part of the class rather than the object so we can't override them
19. Java we can overload the main method .
20. It is not possible to override the private methods in Java.
21. A class declared as abstract, cannot be instantiated i.e., the object cannot be created. It may or may not contain abstract methods but if a class has at least one abstract method, it must be declared abstract.
# Java codes 
1. Try catch finally 
```java  // Java Program to implement finally
import java.io.*;
// Driver class
class GFG {
    // Main function
    public static void main(String[] args)
    {
        int x = 10;
        // try block
        try {
            System.out.println("Try block");
        }
        // finally block
        finally {
            System.out.println(
                "Always runs even without exceptions");
        }
    }
}
```
2. Multithreading in java 
	1. Using threads class
```java import java.io.*;
public class MyThread extends Thread {
    public void run()
    {
        // Code to be executed in this thread
        for (int i = 0; i < 10; i++) {
            System.out.println(
                "Thread " + Thread.currentThread().getId()
                + ": " + i);
        }
    }
}
public class GFG {
    public static void main(String[] args)
    {
        MyThread thread1 = new MyThread();
        MyThread thread2 = new MyThread();
        // Start the threads
        thread1.start();
        thread2.start();
    }
}
```
3. Multithreading Using runnable interface
	 ```java class Multithreading implements Runnable {
    public void run()
    {
        try {
            // Displaying the thread that is running
            System.out.println(
                "Thread " + Thread.currentThread().getId()
                + " is running");
        }
        catch (Exception e) {
            
            // Throwing an exception
            System.out.println("Exception is caught");
        }
    }
}

// Main Class
class Geeks {
    public static void main(String[] args)
    {
        int n = 8; // Number of threads
        for (int i = 0; i < n; i++) {
            Thread object
                = new Thread(new Multithreading());
            object.start();
        }
    }
}
```
4. Singleton design pattern in java
```java public class Singleton {  
private static volatile Singleton instance;  
  
private Singleton() {  
// Initialization code, if needed  
}  
  
// Static method to get the instance  
public static Singleton getInstance() {  
if (instance == null) {  
synchronized (Singleton.class) {  
if (instance == null) {  
instance = new Singleton();  
}  
}  
}  
return instance;  
}  
}
```
	1. a ****Java singleton class**** is a class that can have only one object (an instance of the class) at a time.
	2. After the first time, if we try to instantiate the Java Singleton classes, the new variable also points to the first instance created.
	3. try to chatgpt singleton class thread safety as i was asked this in an interview 
4. Design a system in java : https://www.mygreatlearning.com/blog/oops-concepts-in-java/  use chatgpt for specific examples to get the hang of it .
