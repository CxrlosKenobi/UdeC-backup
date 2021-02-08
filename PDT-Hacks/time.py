#!/home/kenobi/anaconda3/bin/python3
import os
import time
hr = 0
min = 0
sec = 0

while True:
    time.sleep(1)
    sec += 1
    if sec == 60:
        min += 1
        sec = 0
    if min == 60:
        hr += 1
        min = 0
    print(f'{hr}:{min}:{sec}')
