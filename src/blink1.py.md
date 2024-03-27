```python
import machine
import time

led_pin = machine.Pin(25, machine.Pin.OUT)  # GPIO Pin 25 controls the onboard LED

def blink(on, off):
    while True:
        led_pin.off() 
        time.sleep(off)
        led_pin.on()
        time.sleep(on)
```

	import blink1
	blink1.blink1(0.5, 0.5)
# Notes

- the blink function never returns, so it has to be quit by pressing ```ctrl-c``` in the REPL
- You can pass the time it should stay on/off in seconds (decimals < 1 are ok aswell).
- How fast can you make it blink, such that you still see the "blinking"?
- When the LED is blinking so fast, that you perceive it as "constantly on" -- what happens if you move/shake it in front of your eye quickly?