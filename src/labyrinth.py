from machine import Pin
import utime

pins = [12, 13, 14, 15, 16, 17, 18, 19]

def visiting(pin):
    utime.sleep_ms(200)
    print(f"Pin Number {pin}")

for pin_number in pins:
    pin = Pin(pin_number, Pin.IN, Pin.PULL_UP)
    pin.irq(trigger=Pin.IRQ_RISING, handler=lambda pin, pin_num=pin_number: visiting(pin_num))
