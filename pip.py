
import sys
from datetime import date
from inspect import signature
import serial # import Serial Library
import numpy  # Import numpy
import matplotlib.pyplot as plt #import matplotlib library
from drawnow import *
cnt=0
signaleeg=[]
plt.ion()
arduinoData = serial.Serial('COM3',115200) 
def drawGir (): 
    plt.plot(signaleeg, linestyle="-" )
    plt.ylim(0,100)
    
 

while True:
    while (arduinoData.inWaiting() == 0):
        pass
    arduinoString= arduinoData.readline()
    dataArray = arduinoString.split()

    signal = float(dataArray[0])
    
    signaleeg.append(signal.decode())
    drawnow(drawGir)
    plt.pause(.00001)
    cnt=cnt+1
    if (cnt>20):
        signaleeg.pop(0)
    
