

# Intro 
This guide is based on OA questions from gfg and is meant as a quick revision . For revision of theory do also check python interview guide ,

Highly recommended try to speed solve these to get the hang of python  : - 
https://www.interviewbit.com/python-mcq/ (solve all  after reading this article)
(no need to solve all just solve as many as possible )

https://www.geeksforgeeks.org/quizzes/python-variables-quiz/   15 question is good

https://www.geeksforgeeks.org/quizzes/python-dictionary-quiz/

https://www.geeksforgeeks.org/quizzes/python-list-quiz/
https://www.indiabix.com/python-programming/tricky-questions/ (do easy and medium from here)


# MCQS
1. 
``` python r = lambda q: q * 2
s = lambda q: q * 3
x = 2
x = r(x)
x = s(x)
x = r(x)
print (x)
```
```output 
24
```
In the above program r and s are lambda functions or anonymous functions and q is the argument to both of the functions.

2. Boolean operations are governed by laws similar to bodmas
```python 
a = True
b = False
c = False

if a or b and c:
    print ("GEEKSFORGEEKS")
else:
    print ("geeksforgeeks")
```
```
GEEKSFORGEEKS
```
****In Python the precedence order is first NOT then AND and in last OR****
3.
```python
try:  
//Code that might raise an exception  
except SomeException:  
//Code to handle the exception  
else:  
//Code to run if no exception occurs  
finally:  
//Code to run regardless of whether an exception occurs```
4. dictionary functions  : look through https://www.geeksforgeeks.org/python/python-dictionary-methods/ if unsure 
|Functions Name|Descriptions|
|[clear()](https://www.geeksforgeeks.org/python/python-dictionary-clear/)|Removes all items from the dictionary|
|[copy()](https://www.geeksforgeeks.org/python/python-dictionary-copy/)|Returns a shallow copy of the dictionary|
|[fromkeys()](https://www.geeksforgeeks.org/python/python-dictionary-fromkeys-method/)|Creates a dictionary from the given sequence|
|[get()](https://www.geeksforgeeks.org/python/python-dictionary-get-method/)|Returns the value for the given key|
|[items()](https://www.geeksforgeeks.org/python/python-dictionary-items-method/)|Return the list with all dictionary keys with values|
|[keys()](https://www.geeksforgeeks.org/python/python-dictionary-keys-method/)|Returns a view object that displays a list of all the keys in the dictionary in order of insertion|
|[pop()](https://www.geeksforgeeks.org/python/python-dictionary-pop-method/)|Returns and removes the element with the given key|
|[popitem()](https://www.geeksforgeeks.org/python/python-dictionary-popitem-method/)|Returns and removes the item that was last inserted into the dictionary.|
|[setdefault()](https://www.geeksforgeeks.org/python/python-dictionary-setdefault-method/)|Returns the value of a key if the key is in the dictionary else inserts the key with a value to the dictionary|
|[values()](https://www.geeksforgeeks.org/python/python-dictionary-values/)|Returns a view object containing all dictionary values, which can be accessed and iterated through efficiently|
|[update()](https://www.geeksforgeeks.org/python/python-dictionary-update-method/)|Updates the dictionary with the elements from another dictionary or an iterable of key-value pairs. With this method, you can include new data or merge it with existing dictionary entries|
5. 
	1.  " ** " meas " ^ " in python(power operator ).
```python  print(2**3 + (5 + 6)**(1 + 1)) ```
 ouput  : 129
	 1. " // " operator return decimal division for ex 5//2 =2.5 and 5/2 = 2
 The above code will print 129 by following the BEDMAS rule of operator precedence.
	2. a, b = b, a can be used to swap values of a and b 
	3. Python dyanamically detects datatype based on type of object stored ,object can be a = " abc " and a = 1 both operations are allowed one after other and hold string and int respectively at the respective time ( this can be verified by typeof() function)
	4. multiplication of array by int results in array being concatenated with itself 
 1. Code blocks are decidided by indentation(spaces) in python and functions and loops generally require : after declaration(no need to secify return type during declaration though)
	```python
	def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n-1)
```
2. ```
```python
a = [1, 2, 3]
a = tuple(a)
a[0] = 2
print(a)```
output : Since we convert a to a tuple and then try to change its content, we will get an error since tuples are immutable.
3. You can check if an element is in list by using "in" or "not in" 
```python 
if element in list_name :
	return true
```
4. The filter function returns an object of type “filter”.The filter() method _filters the given sequence_ with the help of a function that tests each element in the sequence to be true or not.
5. Assertions can be disables in Python passing -O when running Python
6. . Python is  written in c.
7.   
```python 
def func(): 
	global value 
	value = "Local"
	
value = "Global" 
func() 
print(value)
```

answer : We set the value of “value” as Global. To change its value from inside the function, we use the global keyword along with “value” to change its value to local, and then print it.
8. 
```python
def solve(a): 
	a = [1, 3, 5]
a = [2, 4, 6] 
print(a) 
solve(a) 
print(a)
```
ans : pass by object - output = 246 246

9. guess output
```python
def outer_function(x):
    def inner_function():
        return x + 1
    return inner_function

closure = outer_function(5)
result = closure()
print(result)
```

The `inner_function` is a closure that "remembers" the value of `x` from its enclosing scope. When `closure()` is called, it returns `5 + 1`, resulting in the output `6`.
10. 
```python
def mysterious_function(a, b=[]):
    b.append(a)
    return b

result1 = mysterious_function(1)
result2 = mysterious_function(2)
result3 = mysterious_function(3)

print(result1 + result2 + result3)
```
the `mysterious_function` appends the value of `a` to the list `b` and returns `b`. In the code, result1 is `[1]`, result2 is `[1, 2]`, and `result3` is `[1, 2, 3]`. When `print(result1 + result2 + result3)` is executed, it concatenates the three lists, resulting in `[1, 2, 3, 1, 2, 3, 1, 2, 3]`. Therefore, the output of the code is `[1, 2, 3, 1, 2, 3, 1, 2, 3]`.
11.
```python
class CustomError(Exception):
    def __init__(self, message):
        super().__init__(message)

raise CustomError("An example custom error.")
```
The code raises a custom error of type `CustomError` with the specified message.



