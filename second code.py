print("Menghitung Harga Plat Yang Dibutuhkan Berdasarkan Luas Permukaan Benda")
l = int(input("Panjang Benda:"))
w = int(input("Lebar Benda:"))
h = int(input("Tinggi Benda:"))

area = 2*(l*w + l*h + w*h)
price = str(area * 2000)

print("Harga Plat = " + price)
