Assignment submitted on 2025-09-24, 20:41 IST
Problem 1: Numerical Integration: Newton Cotes Formula
Compute ∫π60xsin(x−−√)dx
 using Newton-Cotes formulae.
Compute the integral using single application of Trapezoidal rule
0.0908
Yes, the answer is correct.
Score: 0.2
Accepted Answers:
(Type: Range) 0.09,0.0915
0.2 points
Compute the integral using single application of Simpson’s 1/3rd
 rule
0.0750
Yes, the answer is correct.
Score: 0.2
Accepted Answers:
(Type: Range) 0.0745,0.0755
0.2 points
If one were to use the same step-size as 1/3rd
 rule, we will require two applications of Trapezoidal rule. Hence, for a fair comparison, please compute the integral
	   with two applications of the trapezoidal rule (i.e., with h=π/12
)
0.07896
Yes, the answer is correct.
Score: 0.2
Accepted Answers:
(Type: Range) 0.0785,0.0795
0.2 points
Compute the integral using single application of Simpson’s 3/8th
 rule
0.07481
Yes, the answer is correct.
Score: 0.2
Accepted Answers:
(Type: Range) 0.0743,0.0753
0.2 points
If one were to use the same step-size as 3/8th
 rule, we will require three applications of Trapezoidal rule. Hence, for a fair comparison, please compute the
	   integral with three applications of the trapezoidal rule (i.e., with h=π/18
)
0.0766
Yes, the answer is correct.
Score: 0.2
Accepted Answers:
(Type: Range) 0.076,0.077
0.2 points

Problem 2: Numerical Integration: Quadrature : 
Now, lets compute the same integral using quadrature approach. To do so, you must rewrite the above integral in the form:  ∫1−1g(x¯)dx¯
Compute using first-order Gauss Quadrature, where

				∫1−1g(x¯)dx¯=g(−13√)+g(13√)
0.0742
Yes, the answer is correct.
Score: 0.5
Accepted Answers:
(Type: Range) 0.0737,0.0747
0.5 points
Compute using second-order Gauss Quadrature, where

				∫1−1g(x¯)dx¯=59g(−35−−√)+89g(0)+59g(35−−√)
0.0745
Yes, the answer is correct.
Score: 0.5
Accepted Answers:
(Type: Range) 0.074,0.076
0.5 points

Problem 3: Distance traveled by a rocket	
In previous assignment, we were given distance traveled by a rocket and we computed velocity and acceleration. In this problem, given the velocity, we will compute the distance travelled by the rocket. The velocity is given by: v(t)=⎧⎩⎨⎪⎪0.631t1.2,8+0.2t,12t≤010<t≤2020<t≤40
 
Compute the distance traveled by the rocket in 40 seconds using Trapezoidal rule with h = 5
398.0
Yes, the answer is correct.
Score: 0.5
Accepted Answers:
(Type: Range) 390,400
0.5 points
Compute the distance traveled by the rocket in 40 seconds using Trapezoidal rule with h = 1
376.3
No, the answer is incorrect.
Score: 0
Accepted Answers:
(Type: Range) 390,400
0.5 points

Problem 4: Calculation of the amount of nutrients delivered
A nutrient is administered by diluting it with water. The flowrate, Q
 (ml/min) and the nutrient concentration C
 (µg/ml) both vary with time. The total amount of nutrient delivered in one hour is:

m=∫600Q(t)C(t)dt


The following data is given:
 t (min) 		0 	10 	20 	30 	40 	50 	60
Q (ml/min) 	52 	 45 	48 	46 	53 	50 	47
C (µg/ml) 	1.2 	 1.5 	2.4 	1.9 	2.0 	2.2 	1.6
Use trapezoidal rule to compute the amount of nutrient delivered, in µg
5549.0
Yes, the answer is correct.
Score: 0.25
Accepted Answers:
(Type: Range) 5540,5560
0.25 points
We will now use Trapezoidal rule with step-size of 20. In other words, use only the data at times 0, 20, 40 and 60 to compute the value of the integral
5800.0
Yes, the answer is correct.
Score: 0.25
Accepted Answers:
(Type: Range) 5790,5810
0.25 points
Richardson’s Extrapolation: We will now use the above two results to compute a better value using Richardson’s extrapolation. To do so, we note that the global
	   truncation error in Trapezoidal rule is O(h2)
. Hence, an improved integral value is given by:

						I=22I(h=10)−I(h=20)22−1
5465.333
Yes, the answer is correct.
Score: 0.25
Accepted Answers:
(Type: Range) 5455,5475
0.25 points
Use Simpson’s 1/3rd
 rule to compute the amount of nutrient delivered, in µg
5465.333
Yes, the answer is correct.
Score: 0.25
Accepted Answers:
(Type: Range) 5455,5475
