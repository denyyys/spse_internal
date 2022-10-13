<?php
if ($_POST){
    echo "-------------------------------------------<br>";
    echo "Výpis souboru:<br>";
    echo "-------------------------------------------<br>";
    $file = fopen("data.txt","r");
    if($file == NULL){
      echo "Chyba při otevření souboru!";
      exit;
    }
    while($radek=fgets($file))
    {
      list($jmeno,$prijmeni,$email) = explode('|',$radek);
      echo $jmeno." ",$prijmeni." ",$email."<br>";
    }
    fclose($file);
  } 


?>