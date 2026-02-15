# Imports
import time
import random
from machine import UART, Pin

# Defines
UART_BAUDRATE = 115200
UART_TX_PIN = "P5_0"
UART_RX_PIN = "P5_1"

def main():

    uart = UART(
        1,
        baudrate=UART_BAUDRATE,
        bits=8,
        parity=None,
        stop=1,
        tx=Pin(UART_TX_PIN),
        rx=Pin(UART_RX_PIN)
    )

    start_time = time.time()

    # Run for 120 seconds
    while time.time() - start_time < 120:

        new_state = random.choice(["shower", "tooth", "hair"])
        msg = "state:{}\n".format(new_state)

        uart.write(msg)
        print("Sent:", msg.strip())

        time.sleep(1)


if __name__ == "__main__":
    main()