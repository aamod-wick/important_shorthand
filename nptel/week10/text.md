Week 10 : Assignment 10
The due date for submitting this assignment has passed.
Due on 2025-10-01, 23:59 IST.
Assignment submitted on 2025-10-01, 22:54 IST
Overall Problem Statement
In this assignment, we will solve the ODE-IVP problem for cooling of a hot ball exposed to colder atmosphere. Newton’s Law of Cooling gives:

			  dTdt=−hamcp(T−Ta)

where ha
 is the net heat transfer coefficient, m
 is the mass of the ball and cp
 is the specific heat. Let us say the ambient is at 30 deg C. For the conditions of interest, when we substitute the typical parameter values, we get
dTdt=−0.5(T−30),[T]t=0=80


We will solve this ODE-IVP in multiple ways to get T at time t=2

Problem-1: Euler's Method
Compute the value of T(2)
 using a single step of Euler’s Explicit method (i.e., using h=2
)
30
Yes, the answer is correct.
Score: 0.2
Accepted Answers:
(Type: Range) 29.5,30.5
0.2 points
Next, we will solve the ODE using two steps of Euler’s Explicit method. First, with h = 1, use Euler’s explicit method to obtain T(1)
55
Yes, the answer is correct.
Score: 0.2
Accepted Answers:
(Type: Range) 54.5,55.5
0.2 points
Repeat this to obtain T(2)
42.5
Yes, the answer is correct.
Score: 0.2
Accepted Answers:
(Type: Range) 42,43
0.2 points
Next, we will solve the ODE using four steps of Euler’s Explicit method. Thus, with h=0.5
, use Euler’s explicit method to obtain T(0.5)
67.5
Yes, the answer is correct.
Score: 0.2
Accepted Answers:
(Type: Range) 66.5,68.5
0.2 points
Repeat this process three more times. Thus, with h = 0.5, compute T(1),T(1.5)
, and T(2)
. In the blank below, please report the value of T(2)
45.820
Yes, the answer is correct.
Score: 0.2
Accepted Answers:
(Type: Range) 44.8,46.8
0.2 points

Problem 2: RK-2 Midpoint Method
We will now solve the above problem using single application (i.e., with h=2
) of RK-2 Midpoint Method, which is given as:

yi+1=yi+hk2
,
where k1=f(yi,ti),k2=f(yi+hk12,ti+h2)

Compute the value of k1
-25
Yes, the answer is correct.
Score: 0.3
Accepted Answers:
(Type: Range) -25.5,-24.5
0.3 points
Compute the value of k2
-12.5
Yes, the answer is correct.
Score: 0.3
Accepted Answers:
(Type: Range) -13,-12
0.3 points
Hence compute the value of T(2)
55
Yes, the answer is correct.
Score: 0.4
Accepted Answers:
(Type: Range) 54.5,55.5
0.4 points

Problem 3: Multiple Applications of Midpoint Method
We will now use multiple steps of Midpoint Method to improve the accuracy. In this problem, we will use step-size of h=1
. With h=0.5
 and T(0)=80
,
	   compute the values of k1
 and k2
. Use them to compute the value of T(0.5)
. Please report the value of T(0.5)
 in the blank below
62.063
No, the answer is incorrect.
Score: 0
Accepted Answers:
(Type: Range) 68,70
0.25 points
With the value of T(0.5)
 so obtained, use it to compute the value of T(1)
. Please report the value of T(1)
 in the blank below
60.518
Yes, the answer is correct.
Score: 0.25
Accepted Answers:
(Type: Range) 59.5,61.5
0.25 points
Continue the process again and report the value of T(1.5)
 below
53.842
Yes, the answer is correct.
Score: 0.25
Accepted Answers:
(Type: Range) 52.8,54.8
0.25 points
Continue the process again and report the value of T(2)
 below
48.627
Yes, the answer is correct.
Score: 0.25
Accepted Answers:
(Type: Range) 47.6,49.6
0.25 points

Problem 4: RK-4 Classic Method
We will now solve the above problem using single application (i.e., with h=2
) of the Classical RK-4 Method, which is given as:
yi+1=yi+h6(k1+2k2+2k3+k4)
, where

k1=f(yi,ti)k2=f(yi+hk12,ti+h2)k3=f(yi+hk22,ti+h2)k4=f(yi+hk3,ti+h)

Compute the value of k1
-25
Yes, the answer is correct.
Score: 0.2
Accepted Answers:
(Type: Range) -25.5,-24.5
0.2 points
Compute the value of k2
-12.5
Yes, the answer is correct.
Score: 0.2
Accepted Answers:
(Type: Range) -13,-12
0.2 points
Compute the value of k3
-18.75
Yes, the answer is correct.
Score: 0.2
Accepted Answers:
(Type: Range) -19.5,-18
0.2 points
Compute the value of k4
-6.25
Yes, the answer is correct.
Score: 0.2
Accepted Answers:
(Type: Range) -6.5,-6
0.2 points
Hence compute the value of T(2)
48.75
Yes, the answer is correct.
Score: 0.2
Accepted Answers:
(Type: Range) 47.75,49.75
