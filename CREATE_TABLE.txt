CREATE TABLE Pembeli
(
ID_user		char(10),
Nama_pembeli	varchar(20),
Username	varchar(15),
Password	varchar(10),
Email		varchar(30),
Kota		varchar(15),
Alamat		varchar(30),	
NoTelepon 	char(12),
primary key(ID_user)
);


CREATE TABLE Barang
( 
ID_Barang	char(10),
Nama		varchar(20),
jenis		varchar(10),
harga		integer(10),
ID_Pengiriman	char(10),
primary key(ID_Barang),
foreign key(ID_Pengiriman) references Pengiriman(ID_Pengiriman) on delete cascade
);


CREATE TABLE Beli
( 
ID_Beli		char(10),
ID_user		char(10),
ID_Barang	char(10),
jumlah		integer(3),
TotalHrgBrg	integer(10),
primary key(ID_Beli),
foreign key(ID_user) references Pembeli(ID_user) on delete cascade
foreign key(ID_Barang) references Barang(ID_Barang) on delete cascade
);

CREATE TABLE Pengiriman
( 
ID_Pengiriman	 char(10),
TGL_kirim	 date,
Jenis_Pengiriman varchar(20),
Biaya_Pengiriman integer(10),
primary key(ID_Pengiriman)
);

CREATE TABLE Transaksi
( 
ID_TRANSAKSI	char(10),
Tgl_Transaksi	date,
Total_Harga	integer(10),
ID_user		char(10),
primary key(ID_TRANSAKSI),
foreign key(ID_user) references pembeli(ID_user) on delete cascade
);