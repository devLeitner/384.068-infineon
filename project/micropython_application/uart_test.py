

import time
import random
from machine import UART, Pin


# Communicate over Pins for each state
shower = Pin("P9_0", Pin.OUT, value=1)
hair = Pin("P9_1", Pin.OUT, value=0)
tooth = Pin("P9_2", Pin.OUT, value=1)


while 1:
    
    time.sleep(5)

    # Genrate random test data
    shower.value(random.random() > 0.5)
    hair.value(random.random() > 0.5)
    tooth.value(random.random() > 0.5)
