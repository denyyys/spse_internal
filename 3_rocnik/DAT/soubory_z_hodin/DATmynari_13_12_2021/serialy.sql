CREATE TABLE serialy (
   id_serialu int(3) ZEROFILL NOT NULL PRIMARY KEY AUTO_INCREMENT,
   nazev varchar(50),
   stat SET("Velká Británie","USA","Poland"),
   pocet_serii int,
   uspesnost int
);

INSERT INTO serialy (nazev,stat,pocet_serii,uspesnost) VALUES ("The IT Crowd",1,4,88);
INSERT INTO serialy (nazev,stat,pocet_serii,uspesnost) VALUES ("The Game of Thrones",NULL,8,91);
INSERT INTO serialy (nazev,stat,pocet_serii,uspesnost) VALUES ("Homeland",2,8,87);
INSERT INTO serialy (nazev,stat,pocet_serii,uspesnost) VALUES ("The Big Bang Theory",2,12,89); 
INSERT INTO serialy (nazev,stat,pocet_serii,uspesnost) VALUES ("The Witcher","USA,Poland",1,79);
INSERT INTO serialy (nazev,stat,pocet_serii,uspesnost) VALUES ("The Flash",2,6,75);