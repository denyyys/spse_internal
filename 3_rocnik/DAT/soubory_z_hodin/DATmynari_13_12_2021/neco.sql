CREATE TABLE povolani (id_p INT NOT NULL PRIMARY KEY, nazev_p VARCHAR(100) NOT NULL UNIQUE);

CREATE TABLE hrdina (id_h INT NOT NULL AUTO_INCREMENT PRIMARY KEY, jmeno_h VARCHAR(100) NOT NULL UNIQUE, id_povolani INT, FOREIGN KEY (id_povolani) REFERENCES povolani(id_p));

ALTER TABLE hrdina ADD plat float;


SELECT * from pohled WHERE nazev_p='avenger' order by jmeno_h asc;
