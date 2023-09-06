# USB-NC-REVERSE-SHELL


An Ada-fruit Usb Hid Attack/Bad USB/USB Rubber-ducky/for macOS only for now/ making a Windows version/



Board:
![images-1](https://github.com/CryptoTheDragon/USB-NC-REVERSE-SHELL/assets/102704845/90916e30-e367-43f9-8b42-c5aa0f6b2ed2)

https://www.adafruit.com/product/3517
![download](https://github.com/CryptoTheDragon/USB-NC-REVERSE-SHELL/assets/102704845/06b81f4d-0dfa-4929-a8f8-a820cc85bb37)




IDE:
![download-1](https://github.com/CryptoTheDragon/USB-NC-REVERSE-SHELL/assets/102704845/7beb5969-e17f-4965-ab21-d7795aacdb7b)
Arduino.cc


You will need a micro USB cable(with data capabilities) and a computer with the ide. you also need the board driver to be installed on your IDE and the keyboard hid section library.


Once you have flashed the board it is live and active. When you plug it into the OS you flashed for it will start automatically. 
Now on your computer, you need to set up a shell for listening. 

ex:
nc -lvn 4444

listen and be verbose on port 4444

and you also need to be on the same network as your intended target.


This tool was a POC and is not meant to be used for illegal access but for educational purposes only. Also as a vector for MacOS red teaming and Penn testing.
