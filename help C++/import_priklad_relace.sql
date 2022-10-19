CREATE TABLE tridy2 (
	c_ucebny   INT PRIMARY KEY NOT NULL,
	kod_tr     VARCHAR(5) NOT NULL UNIQUE,
	obor       VARCHAR(30),
	tr_ucitel  VARCHAR(30)
);

CREATE TABLE studenti2 (
	cislo      INT PRIMARY KEY NOT NULL,
	jmeno      VARCHAR(30),
	prijmeni   VARCHAR(30) NOT NULL,
	prospech   NUMERIC(5, 2),
	datum_nar  DATE,
	trida      INT,
        foreign KEY(trida) REFERENCES tridy2(c_ucebny)
);

INSERT INTO tridy2 VALUES ( 304, '1.C',  'ŘS', 'Burková'    );
INSERT INTO tridy2 VALUES ( 307, '1.B',  'IT', 'Kaminková'  );
INSERT INTO tridy2 VALUES ( 204, '3.A',  'IT', 'Galuszková' );
INSERT INTO tridy2 VALUES ( 206, '3.B',  'IT', 'Hrubešová'  ); 

INSERT INTO studenti2 VALUES (1, 'Petr',  'Zelený',  2.1, '2005-04-15', 304);
INSERT INTO studenti2 VALUES (2, 'Pavel', 'Modrý',   3.0, '2005-01-15', 304);
INSERT INTO studenti2 VALUES (3, 'Ivo',   'Černý',   1.9, '2005-04-15', 307);
INSERT INTO studenti2 VALUES (4, 'Anna',  'Bílá',    2.3, '2005-02-02', 307);
INSERT INTO studenti2 VALUES (5, 'Jan',   'Žlutý',   2.8, '2003-11-15', 204);
INSERT INTO studenti2 VALUES (6, 'Jana',  'Fialová', 2.2, '2003-03-22', 204);
INSERT INTO studenti2 VALUES (7, 'Eva',   'Šedá',    1.5, '2003-04-27', 206);
INSERT INTO studenti2 VALUES (8, 'Petr',  'Červený', 1.8, '2003-07-15', 206);
INSERT INTO studenti2 VALUES (9, 'Josef', 'Hnedý',   1.4, '2003-12-08', 206);
