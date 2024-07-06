import time

last_time = []

while True:
    time.sleep(1)
    last_time.append(time.time())
    if len(last_time) > 2:
        print(f"Hello World {(last_time[-1] - last_time[-2]) * 100000}")

    