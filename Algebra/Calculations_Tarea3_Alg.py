from math import *

for t in range(0, 237):
	eq = (140)/(1 + 9 * exp(-0.165 * t))
	print(f'q({t}) = {eq}')

