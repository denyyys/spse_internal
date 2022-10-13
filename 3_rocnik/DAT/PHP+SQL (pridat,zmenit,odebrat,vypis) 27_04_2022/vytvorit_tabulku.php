<?php
  include_once "pripojit.php";

  $prikaz = "CREATE TABLE IF NOT EXISTS postavy (id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
  jmeno VARCHAR(50), vyska INT);";
  
  /* pošle příkazy jazyka SQL */
  $vysl = mysqli_query($spojeni,$prikaz);
  
  /* testování - zda byl příkaz jazyka SQL proveden */
  if ($vysl) echo "Tabulka byla vytvořena";
    else echo "Tabulka nebyla vytvořena";
    
  /* odpojení od databáze */
  mysqli_close($spojeni);
?>