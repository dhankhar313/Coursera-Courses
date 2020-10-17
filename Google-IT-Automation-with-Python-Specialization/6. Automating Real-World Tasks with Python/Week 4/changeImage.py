#!/usr/bin/env python3
import os
from PIL import Image

# path = os.path.expanduser('~') + '/supplier-data/images/'
path = 'supplier-data/images/'

for file in os.listdir(path):
    if '.tiff' in file:
        img = Image.open(path + file).convert("RGB")
        dir, filename = os.path.split(file)
        # get filename without extension
        filename = os.path.splitext(filename)[0]
        img.resize((600, 400)).save(path + filename + '.jpeg', 'jpeg')
