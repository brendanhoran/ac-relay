#!/usr/bin/python
# brendan@horan.hk
# relay_toggle.py

# Needed imports
import sys
import os
import serial
import time

# take the first cmd line arg
device_selection = sys.argv[1]

# Set up serial. This needs some error handling 
relay_device = serial.Serial('/dev/ttyUSB0',
                            baudrate=9600,
                            bytesize=serial.EIGHTBITS,
                            parity=serial.PARITY_NONE,
                            stopbits=serial.STOPBITS_ONE,
                            timeout=5,
                            xonxoff=0,
                            rtscts=0)


# sleep a little to wait for the arduino to reset
time.sleep(5)

# issue commands to the arduino
if device_selection == '1':
  relay_data_encode = str.encode("relay_1")
  relay_device.write(relay_data_encode)

if device_selection == '2':
  relay_data_encode = str.encode("relay_2")
  relay_device.write(relay_data_encode)

else:
  print("invalid relay number section")
