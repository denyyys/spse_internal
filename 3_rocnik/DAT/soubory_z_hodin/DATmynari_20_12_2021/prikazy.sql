SOURCE /home/x3b_mynari/Databaze/ordinace.sql




CREATE VIEW ordinacePohled AS SELECT * FROM pacienti,lekari WHERE id_l=lekar; /* Vytvoøení pohledu */






ALTER TABLE pacienti ADD èas time;
UPDATE pacienti SET èas=curtime() where id_p=1;

