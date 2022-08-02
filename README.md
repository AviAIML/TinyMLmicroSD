# TinyMLmicroSD

This repository is to show how to read and write on Syntiant's TinyML board uSD card slot

Windows compatible uSD card should be used to save the file. It should be present before executing the program.

Download the complete repository. 

Choose "Ardiuno MKRZERO" board in the Tool menu.

In the File --> Preferences Menu, Sketchbook location should be pointed to the Arduino_libraries directory of this download.

Note that the sketch waits for the serial port to be connected. The RGB LED will be displaying RED light until Serial port is established. (Tools --> Serial Monitor)

The sketch creates a new file, TinyML.bin, in the uSD card.

It saves 254 characters with ASCII coding.

After the file is created and saved, the same file is read. The ASCII characters are converted into integers before printing on the serial console 

The file can also be opened in Windows or other operating software by plugging uSD card in the SD slot or USB slot.
