from math import *
import numpy as np

Range = [i for i in range(0, 155)]
invRange = [i for i in range(14, 142)]

# q(t)
q = []
for t in Range:
	eq = (140)/(1 + 9 * exp(-0.165 * t))
	print(f'[{t}] {eq}')
	q.append(round(eq, 2))

# q(t)^-1
inv_q = []
for t in invRange:
	inv = -(np.log((140-t)/(9*t)))/(0.165)
	print(f'[{t}] {inv}')
	inv_q.append(round(inv, 2))
