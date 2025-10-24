Consider the following mass-spring-damper system:
md2xdt2+adxdt+bx=0,x(0)=1,dxdt|t=0=0.5


In the above model, m=1,a=5
 and b=1.5

We will first convert into a set of two ODEs and then solve using Euler’s explicit method

Let us define y=dxdt
. With this definition, the second ODE becomes:

				dydt=αy+βx


	   Please report the value of α
-5
Yes, the answer is correct.
Score: 0.1
Accepted Answers:
(Type: Range) -5.05,-4.95
0.1 points
Please report the value of β
-1.5
Yes, the answer is correct.
Score: 0.1
Accepted Answers:
(Type: Range) -1.55,-1.45
0.1 points
 
With the above changes, the ODE-IVP in two variables can be written as:

ddt[xy]=[yαy+βx],[x(0)y(0)]=[10.5]



We will use Euler’s explicit method with step-size h=0.25
 to solve this problem starting with the initial condition given above

Euler’s method gives Yi+1=Yi+hf(Yi,ti)
. Let us first compute f(Yi,ti)
, which is a 2×1
 vector. Please report the first element of vector f(Yi,ti)
0.5
Yes, the answer is correct.
Score: 0.1
Accepted Answers:
(Type: Range) 0.49,0.51
0.1 points
Please report the second element of vector f(Yi,ti)
-4.0
Yes, the answer is correct.
Score: 0.1
Accepted Answers:
(Type: Range) -4.1,-3.9
0.1 points
Hence use Euler’s method to calculate Y(0.25)
. Please report the value of the first element, i.e., displacement x
 at t=0.25
.
1.125
Yes, the answer is correct.
Score: 0.1
Accepted Answers:
(Type: Range) 1.1,1.15
0.1 points
Please report the value of the second element, i.e., velocity dx/dt
 at t=0.25
.
-0.5
Yes, the answer is correct.
Score: 0.1
Accepted Answers:
(Type: Range) -0.51,-0.49
0.1 points
Repeat this for one more iteration. This will give you Y(0.5)
. Please report the first element, i.e., displacement at t=0.5
 using two steps of Euler’s method.
0.5
No, the answer is incorrect.
Score: 0
Accepted Answers:
(Type: Range) 0.99,1.01
0.1 points
Also report the second element, i.e., velocity at t=0.5
.
-0.2968
Yes, the answer is correct.
Score: 0.1
Accepted Answers:
(Type: Range) -0.304,-0.29
0.1 points
Please repeat this process for two more steps and obtain the results at t=1
 using four iterations of Euler’s explicit method. Hence, report the displacement
	   at t=1
.
0.8506
Yes, the answer is correct.
Score: 0.1
Accepted Answers:
(Type: Range) 0.83,0.87
0.1 points
Also report the velocity at t=1
 using four steps of Euler’s method
-0.272
Yes, the answer is correct.
Score: 0.1
Accepted Answers:
(Type: Range) -0.29,-0.25
0.1 points
Problem 2: ODE-BVP using Finite Difference
Consider the following ODE-BVP resulting from a convective-diffusive process with source:

1Pd2Cdx2+dCdx−D(C−1)=0

where P=5
 and D=2
.

This can be rewritten as:

d2Cdx2+5dCdx−10C+10=0

Let the boundary conditions C(0)=0.1
 and C′(1)=0
.

We will divide the domain into 10 equal intervals with h=0.1
. The conditions at the two ends of the system are given by:

C0=0.1,C11−C9h=0


For all the internal nodes, we will use central difference formula. For each of the internal nodes, the central difference formula leads to:

αCi+1+βCi+γCi−1=δ

Node 1 and Node 10 will make use of the boundary conditions. Rest of the nodes use the above formula. Thus, the overall model becomes:



Please provide the values of α,β,γ,δ
 below.


Please report the value of α
1.25
No, the answer is incorrect.
Score: 0
Accepted Answers:
(Type: Range) 124,126
0.25 points
Please report the value of β
-2.1
No, the answer is incorrect.
Score: 0
Accepted Answers:
(Type: Range) -215,-205
0.25 points
Please report the value of γ
0.75
No, the answer is incorrect.
Score: 0
Accepted Answers:
(Type: Range) 74,76
0.25 points
Please report the value of δ
-0.1
No, the answer is incorrect.
Score: 0
Accepted Answers:
(Type: Range) -10.1,-9.9
