CREATE TABLE tridy2(c_ucebny int primary key not null,
		     kod_tr varchar(5) not null unique,
         obor varchar(30) ,
		    tr_ucitel varchar (30));

CREATE TABLE studenti2(cislo int primary key not null,
       jmeno   varchar(30) ,
			 prijmeni varchar(30) not null,
			 prospech numeric(5,2) ,
       datum_nar date,
			 trida int,
       foreign key(trida) references tridy2(c_ucebny) );

INSERT INTO tridy2 values( 304,'1.C', 'ŘS', 'Burková');
INSERT INTO tridy2 values( 307,'1.B', 'IT', 'Kaminková');
INSERT INTO tridy2 values( 204,'3.A',  'IT','Galuszková');
INSERT INTO tridy2 values( 206,'3.B',  'IT', 'Hrubešová'); 


INSERT INTO studenti2 values(1, 'Petr', 'Zelený', 2.1, '2005-04-15', 304);
INSERT INTO studenti2 values(2, 'Pavel', 'Modrý', 3.0, '2005-01-15', 304);
INSERT INTO studenti2 values(3, 'Ivo', 'Černý', 1.9, '2005-04-15', 307);
INSERT INTO studenti2 values(4, 'Anna', 'Bílá', 2.3, '2005-02-02', 307);
INSERT INTO studenti2 values(5, 'Jan', 'Žlutý', 2.8, '2003-11-15', 204);
INSERT INTO studenti2 values(6, 'Jana', 'Fialová', 2.2, '2003-03-22', 204);
INSERT INTO studenti2 values(7, 'Eva', 'Šedá', 1.5,'2003-04-27', 206);
INSERT INTO studenti2 values(8, 'Petr', 'Červený', 1.8, '2003-07-15', 206);
INSERT INTO studenti2 values(9, 'Josef', 'Hnedý', 1.4, '2003-12-08', 206);


