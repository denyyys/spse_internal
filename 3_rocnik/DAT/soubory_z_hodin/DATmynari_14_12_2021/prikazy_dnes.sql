SELECT nazev_p as 'Název povolání',
COUNT(id_h) as 'Poèet hrdinù' from pohled_hrdinove 
	GROUP BY nazev_p;

------------------------------------------------------

SELECT nazev_p,
COUNT(id_h) from pohled_hrdinove 
	WHERE nazev_p='avenger';

--------------------------------------------------------------

SELECT round(avg(plat),2) as 'prùmìrný plat avangerù' from pohled_hrdinove 
	WHERE nazev_p='avenger';
---------------------------------------------------------------------------	
---------------------------------------------------------------------------
			/* Operatori tabulky */

CREATE TABLE operatori(
	id_operatora int NOT NULL PRIMARY KEY AUTO_INCREMENT,
	nazev_o varchar(30),
	hodnoceni float
);

CREATE TABLE nabidky (
	id_nabidky int NOT NULL PRIMARY KEY AUTO_INCREMENT,
	nazev_nabidky varchar(30),
	cena int
);



INSERT INTO TABLE operatori(
	default,
	'Vodafone',
	8.5
);

INSERT INTO TABLE operatori(
	default,
	'T-Mobile',
	9
);

INSERT INTO TABLE operatori(
	default,
	'O2'
	7.2
);

INSERT INTO TABLE nabidky
----------------------------------------------------------------------------------------------------------------------------
