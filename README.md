

## Configuration 

The Btap is configured through the userinterface of the device by clicking on the 'Config' button on the main screen. The configuration of the WebSocket URL and the payment LNURL is done through a confguration file that is downloaded from the internet. The download location of the file is:

```
https://{config host}/config/{device id}.json
```

Both `config host` and `device id` are configured on the device. When a Wi-Fi connection is available, the Btap tries to download the configuration file from the host. The contents of a sample configuration file are shown below.

```
{
    "host":"lnbits.meulenhoff.org",
    "id":"8NTL78ERDsPkbRgrQsu39w",
    "lnurl":"LNURL1DP68GURN8GHJ7MRWVF5HGUEWD4JH2MR9DE5X7ENX9EHHYEE0D3H82UNVV3JHV6TRV5HKZURF9AMRZTMVDE6HYMP08P89GNPH8PZ4Y3RN2P4KY5N8WFGHXAFN89MN7EMSD9HN6VFXWPEX7ENFWS7NQT33XGNXZMT0W4H8G0F3JTRVVM"
}
```

The following parameters are included in the file:
 - `host` is the hostname of the LNbits server that provides the LNURLdevice. 
 - `id` is the identifier of the LNURLdevice (the value in the id column in LNbits).
 - `lnurl` is the LNURL of the LNURLdevice in LNbits. Click on the 'Eye' icon of the LNURLdevice to copy the LNURL.


## Compilation

Btap is created in Visual Studio Code using platform.io. To compile your own version, take the following steps:

  1. Install Visual Studio Code. Download from https://code.visualstudio.com/.
  2. Install the Platform IO extension. Open the Extension Manager (click the wheel icon at the bottom of the bar and the left and select Extensions). Search for PlatformIO, and click 'Install'.
  3. In Visual Studio code, open the command palette (Ctrl-Shift-P) and type 'gitcl'.
  4. When prompted for the repository URL, enter the URL of this repository: `git@github.com:pieterjm/Btap.git`
  5. Select a local directrory where to store the repository and open the repository.
  6. To compile, click the checkmark icon in the blue bar at the bottom to compile the repository. This may take a while as external libraries have to be loaded.
  7. Connect the Btap to USB port and click the '>' button in the blue bar at the bottom to compile and flash the firmware.
  8. After compilation and firmware flashing is succesful, the device should restart as a fresh Btap.
  

