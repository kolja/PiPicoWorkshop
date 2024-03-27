from picozero import LED, Button, Buzzer
from time import sleep_ms

pins = [10, 11, 12, 13, 14, 15, 16, 17]
handlers = {}
visited = []

buzzer = Buzzer(21)

def visiting(pin):
    visited.append(pin)
    print(f"Visiting pin {pin}")
    if pin == 10:
        reset()
    if pin == 17:
        finish()
    playVisiting()

def playWin():
    None

def playLoose():
    buzzer.on()
    sleep_ms(1500)
    buzzer.off()
    
def playVisiting():
    buzzer.on()
    sleep_ms(100)
    buzzer.off()

def finish():
    print("Finish")
    reset()

def reset():
    visited.clear()

for pin_number in pins:
   handlers[pin_number] = Button(pin_number)
   handlers[pin_number].when_pressed = lambda pin=pin_number: visiting(pin)
