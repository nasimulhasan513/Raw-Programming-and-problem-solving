import pyautogui

import time 
i=0
while i<3:
    time.sleep(3)
    pyautogui.typewrite("I am a message")
    pyautogui.press('enter')
    i+=1