# Instructions at https://www.github.com/https://github.com/Lynx-At0Mic/OSU-Capasitive-Touch-Keypad
# Created by Lynx-At0Mic https://github.com/Lynx-At0Mic

## Change if you keybindings are not z and x
click1 = 'z'
click2 = 'x'

##Make sure this is set to the correct COM port
comPort = 'COM3'


import serial, time
from  pynput.keyboard import Key, Controller

keyboard = Controller()

serialIn = serial.Serial(comPort, 9600)

click1Pressed = str(b'c1p\r\n')
click1Released = str(b'c1r\r\n')

click2Pressed = str(b'c2p\r\n')
click2Released = str(b'c2r\r\n')


while 1:
        serial_line = str(serialIn.readline())
        print (serial_line)
        if serial_line == click1Pressed:
                keyboard.press(click1)
        elif serial_line == click1Released:
                keyboard.release(click1)

        elif serial_line == click2Pressed:
                keyboard.press(click2)
        elif serial_line == click2Released:
                keyboard.release(click2)
