
## Configuration 

The basic configuration of the beertap is done through the userinterface of the device by clicking on the 'Config' button on the start screen. The default PIN for the config is '123456'.


Take the following steps to configure the device:

1. Create a wallet at https://lnbits.meulenhoff.org and add the LNURLdevice extension to the wallet.
2. In LNbits, create an LNURLDevice by clicking 'NEW LNURLDEVICE INSTANCE'. 
3. Configure the LNURLDevice, make sure that the type is set to 'Switch'.
4. Add one or more (max three) switches by clicking on the '+' button. Configure price, duration and Label for each switch. 
  * The duration is the amount of milliseconds, the tap is switched on.
  * The Label button is displayed on the tap. For instance 'Small' or 'Large'.
5. Click 'CREATE LNURLDEVICE' and record the ID of the LNURLdevice (8 charachters).
6. On the tap device, enter config. 
  - Make sure that LNbits host is set to: lnbits.meulenhoff.org
  - Set 'Device ID' to the ID of the LNURL device. 
7. Click connect. 
  
## Compilation

BliksemBier is created with platform.io. 

To compile the project from within Visual Studio Code using platform.io, take the following steps:

  1. Install Visual Studio Code. Download from https://code.visualstudio.com/. If Git is not yet installed on your system, you need to install that as well.
  2. Install the Platform IO extension. Open the Extension Manager (click the wheel icon at the bottom of the bar and the left and select Extensions). Search for PlatformIO, and click 'Install'.
  3. In Visual Studio code, open the command palette (Ctrl-Shift-P) and type 'gitcl'.
  4. When prompted for the repository URL, enter the URL of this repository: `https://github.com/pieterjm/Btap.git`
  5. Select a local directrory where to store the repository and open the repository.
  6. To compile, click the checkmark icon in the blue bar at the bottom to compile the repository. This may take a while as external libraries have to be loaded.
  7. Connect the Btap to USB port and click the '>' button in the blue bar at the bottom to compile and flash the firmware.
  8. After compilation and firmware flashing is succesful, the device should restart as a fresh Btap.
  
To compile the project using platformio core only, take the following steps

  1. Install platformio core by following the instructions here: https://docs.platformio.org/en/stable/core/installation/methods/installer-script.html
  2. Clone the repository with the following command
     ```
     git clone https://github.com/pieterjm/Btap.git
     ```
  3. Compile and upload
     ```
     cd Btap
     platformio run --target upload
     ```

