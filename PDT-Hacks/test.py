import os
import csv
sea = dict()
with open('sheet.csv', 'r') as f:
	lis = [line.split(',') for line in f]
	for i, x in enumerate(lis):
		sea[i] = [s.strip('\n') for s in lis]
		sea[i] = [s.replace('\n', '') for s in lis]
print(lis)
#
#print(sea[2])
