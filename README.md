This is a simple C program which blinks an LED on the Arduino Uno, transmitting
a message via the serial link whenever it does so.

## Dependencies

* make
* binutils-avr
* avr-libc
* avrdude
* gcc-avr

## Compiling binary

    make

## Uploading binary to Arduino

    sudo make upload

## Interacting via the USB serial connection

1. Install CuteCom
2. Run CuteCom as root
3. Set "Device" to `/dev/ttyACM0` "Baud rate" to `9600`
4. Click "Open Device"

You should be able to see output from the program running on the Arduino
being streamed to the display area (the string "Blink!" is printed each
time the LED blinks).

Note: Make sure you close the device in CuteCom before running
`sudo make upload`.

## References

* http://www.appelsiini.net/2011/simple-usart-with-avr-libc
* https://balau82.wordpress.com/2011/03/29/programming-arduino-uno-in-pure-c/
