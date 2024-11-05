# KNOMI2

Using [YD-ESP32-S3](https://github.com/vcc-gnd/YD-ESP32-S3) 16MB board.

![board](doc/yd-esp32-s3-devkitc-1-clone-pinout.jpg)

## OTA Update

Comment out following in `platformio.ini`:

```ini
upload_protocol = custom
extra_scripts = platformio_upload_ota.py
upload_url = http://knomi2.local/update
```

And use the Upload button in the PlatformIO VSCode environment
or run:

```console
pio run -t upload

```
