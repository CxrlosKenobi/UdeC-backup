from pytube import YouTube
import os
# Show a progress bar while video is downloading
# Open the directory in finder where the downloaded video is
# Select characteristics of the video. (Quality, format)
# Apply color



def clear():
	return os.system('clear')

clear()

ytLink = str(input('Your link here: '))
YouTube('{}'.format(ytLink)).streams.first().download()


'''
import progressbar 
import time 
  
  
# Function to create  
def animated_marker(): 
      
    widgets = ['Loading: ', progressbar.AnimatedMarker()] 
    bar = progressbar.ProgressBar(widgets=widgets).start() 
      
    for i in range(50): 
        time.sleep(0.1) 
        bar.update(i) 
          
# Driver's code 
animated_marker() 



# Progress bar another option

from tqdm import tqdm 
  
for i in tqdm (range (100), desc="Loading..."): 
    pass
'''