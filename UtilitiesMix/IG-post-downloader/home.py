import pandas
import time
import csv
import os

# -all feed w/ instaloader profile <username>
dir = '~/home/kenobi/GitHub/CodeUtilities/IG-post-downloader/files/downloaded-posts'
with open('tokens.csv', 'r') as tokens:
    csv_reader = csv.reader(tokens)
    for row in csv_reader:
        row = str(row)
        tmp = row.replace('[', '')
        tmp = tmp.replace("""'""", '')
        tmp = tmp.replace(']', '')
        tmp = tmp.replace('https://www.instagram.com/p/', '')
        tmp = tmp.replace('/', '')
        os.system(f'instalooter post {tmp} {dir} -v')

os.system('xdg-open files/downloaded-posts')
print('\nReady!')
