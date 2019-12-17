---
name: Grove-Dual-Button-v1.0
category: Sensor
bzurl: https://www.seeedstudio.com/...
surveyurl: https://www.surveymonkey.com/r/...
sku: 101020103
---

![](https://github.com/SeeedDocument/.....jpg)

Grove - Button is an instant Button. It contains two separate "instant on/off" buttons."Instant" means that the button bounces back when released.When the button is pressed, it outputs high signal; when it is released, it outputs low signal.

[![](https://github.com/SeeedDocument/Grove_Button/raw/master/image/300px-Get_One_Now_Banner.png)](https://www.seeedstudio.com/....html)

## Version


| Product Version| Changes| Released Date |
|----------------|--------|---------------|
| Grove-Dual-Button v1.0| initial| Dec 17 2019   |

## Features

- Easy to use momentary ON/OFF button
- Uses Standard 4-pin Grove Cables
- Two separate buttons

!!!Tip
    More details about Grove modules please refer to [Grove System](http://wiki.seeedstudio.com/Grove_System/)

## Specification

| Parameter             | Value/Range    |
|-----------------------|----------------|
| Operating voltage     | 3.3/5V DC      |
| Operation Force       | 100 ± 50gf     |
| Operation Temperature | -25℃ ~ +70℃  |
| Size                  | 20*40mm        |

## Platforms Supported


| Arduino| Raspberry Pi| BeagleBone| Wio| LinkIt ONE|
|--------|-------------|-----------|----|-----------|
| ![](https://raw.githubusercontent.com/SeeedDocument/wiki_english/master/docs/images/arduino_logo.jpg) | ![](https://raw.githubusercontent.com/SeeedDocument/wiki_english/master/docs/images/raspberry_pi_logo.jpg) | ![](https://raw.githubusercontent.com/SeeedDocument/wiki_english/master/docs/images/bbg_logo.jpg) | ![](https://raw.githubusercontent.com/SeeedDocument/wiki_english/master/docs/images/wio_logo.jpg) | ![](https://raw.githubusercontent.com/SeeedDocument/wiki_english/master/docs/images/linkit_logo.jpg) |

!!!Caution
    The platforms mentioned above as supported is/are an indication of the module's software or theoritical compatibility. We only provide software library or code examples for Arduino platform in most cases. It is not possible to provide software library / demo code for all possible MCU platforms. Hence, users have to write their own software library.


##  Getting Started


### Play With Arduino

#### Hardware

- Step 1. Prepare the below stuffs:

| Seeeduino V4.2 | Base Shield|  Grove - Button |
|----------------|------------|-----------------|
|![enter image description here](https://github.com/SeeedDocument/wiki_english/raw/master/docs/images/seeeduino_v4.2.jpg)|![enter image description here](https://github.com/SeeedDocument/wiki_english/raw/master/docs/images/base_shield.jpg)|![enter image description here](https://github.com/SeeedDocument/....jpg)|
|[Get ONE Now](http://www.seeedstudio.com/Seeeduino-V4.2-p-2517.html)|[Get ONE Now](https://www.seeedstudio.com/Base-Shield-V2-p-1378.html)|[Get ONE Now](https://www.seeedstudio.com/....html)|

- Step 2. Connect Grove-Button to port D2 of Grove-Base Shield.
- Step 3. Plug Grove - Base Shield into Seeeduino.
- Step 4. Connect Seeeduino to PC through a USB cable.

![](https://github.com/SeeedDocument/....jpg)

!!!Note
	If we don't have Grove Base Shield, We also can directly connect Grove-Button to Seeeduino as below.

| Seeeduino     | Grove-Button |
|---------------|--------------|
| 5V            | Red          |
| GND           | Black        |
| Not Conencted | White        |
| D2            | Yellow       |

#### Software

- Step 1. Copy the code into Arduino IDE and upload.

```c

const int redbutton = 4;     // the number of the red pushbutton pin
const int greenbutton = 3;   // the number of the green pushbutton pin
const int ledPin =  2;       // the number of the LED pin

int redswitch =0;           // variable for reading the red pushbutton status
int greenswitch =0;         // variable for reading the green pushbutton status

void setup() {
 
  pinMode(ledPin, OUTPUT);
  pinMode(redbutton, INPUT);
  pinMode(greenbutton, INPUT);
}

void loop() {
  
  redswitch = digitalRead(redbutton);
  greenswitch = digitalRead(greenbutton);

 
  if ((redswitch == HIGH) && (greenswitch == HIGH )) {
    
    digitalWrite(ledPin, LOW);
  } else {
    
    digitalWrite(ledPin, HIGH);
  }
}
```

- Step 2. We will see the on board Pin13 LED on and off.

## Resources

- **[Eagle&PDF]** [Grove-Dual-Button Eagle Files](https://github.com/SeeedDocument/Grove_Button/raw/master/resources/Grove_-_Button_v1.0_Source_File.zip)

- **[More Reading]** [Wooden Laser Gun](http://www.instructables.com/id/DIY-a-Wooden-Laser-Gun-As-a-Xmas-Present-for-Your-/)

- **[Codecraft]** [CDC File](https://raw.githubusercontent.com/SeeedDocument/Grove_Button/master/res/Grove_Button_CDC_File.zip)

## Tech Support

Please submit any technical issue into our [forum](http://forum.seeedstudio.com/).
<br /><p style="text-align:center"><a href="https://www.seeedstudio.com/act-4.html?utm_source=wiki&utm_medium=wikibanner&utm_campaign=newproducts" target="_blank"><img src="https://github.com/SeeedDocument/Wiki_Banner/raw/master/new_product.jpg" /></a></p>
