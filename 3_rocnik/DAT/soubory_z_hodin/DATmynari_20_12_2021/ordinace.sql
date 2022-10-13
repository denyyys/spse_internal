create table lekari 
( id_l int not null primary key auto_increment,
  prijmeni_l varchar(50), 
  jmeno_l varchar(50), 
  mesto_l varchar(50)
);

create table pacienti 
( id_p int not null primary key auto_increment, 
  jmeno_p varchar(50), 
  prijmeni_p varchar(50), 
  mesto_p varchar(50),
  datum_narozeni date,
  vyska int,
  lekar int,
  foreign key (lekar) references lekari (id_l)
);

insert into lekari values(null,'Ivan','Ranhojič','Havířov');
insert into lekari values(null,'Irena','Bolavá','Karviná');
insert into lekari values(null,'Karolína','Bílá','Havířov');
insert into lekari values(null,'Norbert','Slepánek','Ostrava');
insert into lekari values(null,'Alois','Modrý','Karviná');

insert into pacienti values(null,'Jan','Novák','Karviná','1995.06.12',175,1);
insert into pacienti values(null,'Marie','Květáková','Karviná','1972.08.15',163,2); 
insert into pacienti values(null,'František','Výborný','Karviná','1999.09.9',172,2);
insert into pacienti values(null,'Miluše','Sojková','Ostrava','1990.05.18',162,4);
insert into pacienti values(null,'Antonín','Okurka','Havířov','1994.10.11',186,1);
insert into pacienti values(null,'Alena','Okurková','Havířov','1985.06.30',170,1);