Week 11 : Assignment 11
The due date for submitting this assignment has passed.
Due on 2025-10-08, 23:59 IST.
Assignment submitted on 2025-10-08, 20:37 IST
For the first three problems of this assignment, consider the RL circuit model is given by

 								 dIdt=VL−IRL
 				(1)

for inductance L=2
, resistance R=2.5
, voltage V=5
. The initial value of current I(0)=0
. Note that the analytical solution (true solution) for current at any time is given by:

								I=VR(1−exp(−RtL))
 					(2)

Problem 1: RK-2 Midpoint Method : 


In the previous assignment, you used RK−2
 Midpoint Method for solving a different set of ODE−IVP
. The RK−2
 Midpoint Method is given as:


yi+1=yi+hk2
, where k1=f(yi,ti),k2=f(yi+hk12,ti+h2)


Recall that the initial value is I(0)=0
. In this problem, we will compute the solution I(0.5)
 with h=0.5
 and h=0.25
Report the solution using Midpoint Method with h=0.5
. Call this solution I1
0.859
Yes, the answer is correct.
Score: 0.25
Accepted Answers:
(Type: Range) 0.844,0.875
0.25 points
Report the error between true solution and your Midpoint method (with h=0.5
)
0.0701
Yes, the answer is correct.
Score: 0.25
Accepted Answers:
(Type: Range) 0.069,0.071
(Type: Range) -0.071,-0.069
0.25 points
Report the solution with two steps of h=0.25
. Please note that you are still computing I(0.5)
 in this question. Call this solution I2
0.916
Yes, the answer is correct.
Score: 0.25
Accepted Answers:
(Type: Range) 0.9,0.93
0.25 points
Report the error between true solution and your Midpoint method (with h=0.25
)	
0.0138
Yes, the answer is correct.
Score: 0.25
Accepted Answers:
(Type: Range) 0.0133,0.0143
(Type: Range) -0.0143,-0.0133
0.25 points

Problem 2: Richardson’s extrapolation : 

In this problem, we will use Richardson’s extrapolation to improve the solution obtained using the Midpoint method
Let us call the solution using h=0.5
 as I1
 and the solution using h=0.25
 as I2
, as done in Problem-1. Use these two values to compute better
	   approximation using the Richardson’s extrapolation. Note that LTE is O(h3)
0.934
Yes, the answer is correct.
Score: 0.5
Accepted Answers:
(Type: Range) 0.910,0.936
0.5 points
Report the error between true solution and value using Richardson’s extrapolation
0.00492
Yes, the answer is correct.
Score: 0.5
Accepted Answers:
(Type: Range) 0.0058,0.0060
(Type: Range) 0.0047,0.0049
(Type: Range) 0.0046,0.0050
(Type: Range) 0.0056,0.0060
(Type: Range) -0.0050,-0.0046
(Type: Range) -0.0060,-0.0056
0.5 points

Problem 3: Stability Analysis of Euler’s Method
 Let’s verify the stability of Euler’s method. Euler’s explicit method is stable for small values of h
, but can become unstable if the value of h
 increases beyond a certain threshold. Based on the discussions in the lectures, this value is h≤2/λ
 (what is λ
 in this example?).
With h=1
, use four iterations of Euler’s explicit method and report y4
0.929
No, the answer is incorrect.
Score: 0
Accepted Answers:
(Type: Range) 1.94,2.04
0.25 points
With h=1.6
, use four iterations of Euler’s explicit method and report y4
1.992
No, the answer is incorrect.
Score: 0
Accepted Answers:
(Type: Range) -0.01,0.01
0.25 points
With h=2.5
, use four iterations of Euler’s explicit method and report y4
0
No, the answer is incorrect.
Score: 0
Accepted Answers:
(Type: Range) -40.0,-38.0
0.25 points
Based on the above result, what is the threshold value of h beyond which Euler’s explicit method becomes unstable.

	   
1.6
Hint
Yes, the answer is correct.
Score: 0.25
Accepted Answers:
(Type: Range) 1.58,1.62
