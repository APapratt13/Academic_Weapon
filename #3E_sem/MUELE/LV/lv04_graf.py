import numpy as np
import matplotlib.pyplot as plt

# Podaci
frekvencije = np.array([5, 10, 20, 50, 100, 200, 500, 1000, 1500, 2000])
greske = np.array([-18.7, -0.43, -0.64, -0.34, -0.35, -0.46, -0.66, -1.55, -2.84, -4.53])

# Kreiranje grafika
plt.figure(figsize=(10, 6))
plt.semilogx(frekvencije, greske, marker='o', linestyle='-', color='b')

# Oznake
plt.title('Frekvencijska zavisnost pogrješke EV2 voltmetra V2')
plt.xlabel('Frekvencija (Hz)')
plt.ylabel('Greška EV2 (%)')
plt.grid(which='both', linestyle='--', linewidth=0.5)
plt.ylim(-5, 2)  # Ograničenje Y-ose -5 do 2&%
plt.xticks(frekvencije)  # Oznake na X-osi
plt.xlim(5, 2000)  # Ograničenje X-ose

# Prikazivanje grafa
plt.tight_layout()
plt.show()
