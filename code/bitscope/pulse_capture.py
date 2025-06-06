# Ambient Resonance Energy - Bitscope Pulse Capture
# Author: cleverly87
# Date: 2025-06-06

import bitscope
import time
import numpy as np

# Connect to Bitscope
scope = bitscope.BITScope()
scope.open("USB:BS000001")  # Change this to your scope ID or "USB:0"

# Setup
scope.set_mode("FAST")
scope.set_samplerate(10_000)
scope.set_capture(1024)
scope.set_channels("A")

# Configure channel A
scope.set_probe("A", 10)   # 10x probe
scope.set_range("A", 10)   # +/-10V range

print("Starting capture loop...")

while True:
    scope.run()
    time.sleep(0.2)
    data = scope.get_data("A", "WAVEFORM", 1024)
    samples = np.array(data)

    peak = np.max(samples)
    rms = np.sqrt(np.mean(samples ** 2))

    print(f"PEAK: {peak:.3f} V | RMS: {rms:.3f} V")
