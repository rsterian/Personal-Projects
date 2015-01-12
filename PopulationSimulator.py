from __future__ import division
from visual import *
from visual.graph import*
import random

boy=0
girl=0

while True:
  while True:
    if random.random()>=.5:
      boy=boy+1
      break
    girl=girl+1
    
  if ((boy+girl) % 1000) == 0:
    print "Ratio (b/g): ", float(boy)/(boy+girl)
