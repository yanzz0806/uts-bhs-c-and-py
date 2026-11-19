print("=== APLIKASI STOK MAKANAN ===")

nama = input("Nama makanan: ")
stok_awal = int(input("Stok awal: "))
stok_masuk = int(input("Stok masuk: "))
stok_keluar = int(input("Stok keluar: "))
harga = float(input("Harga makanan: "))

# +
stok_bertambah = stok_awal + stok_masuk

# -
stok_akhir = stok_bertambah - stok_keluar

# *
total_harga = stok_akhir * harga

# /
rata_rata_harga = total_harga / stok_akhir

print("\n=== HASIL DATA ===")
print("Nama makanan      :", nama)
print("Stok akhir       :", stok_akhir)
print("Total harga      :", total_harga)
print("Rata-rata harga  :", rata_rata_harga)
