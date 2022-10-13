<!DOCTYPE html>
<html lang='cs'>
  <head>
    <meta charset='utf-8'>
    <title>PHP - pole</title>
  </head>
  
  <body>
  
  <h1>Pole v PHP</h1>
  
  <?php
    
    $cisla = array(1,2,3,4,5);
    
    echo "Nultý prvek pole je: " . $cisla[0];
    
    /* 1. způsob výpisu pole */
    echo "<br>Výpis prvků pole: ";
 //   for ($i=0; $i<5; $i++)
    for ($i=0; $i<count($cisla); $i++)
    {
      echo "$cisla[$i]  ";  
    }
    
    /* 2. způsob výpisu pole */
    echo "<br>Výpis prvků pole: ";
 //   
    foreach ($cisla as $cis)
    {
      echo "$cis  ";  
    }    
    echo "<br><br>";   
    for ($i=0; $i<5; $i++)
    {
      $pole[] = rand(1,20);
    }

    for ($i=0; $i<count($cisla); $i++)
    {
      echo "$pole[$i]  ";  
    }     
    
    echo "<br>Vzestupné řazení prvků pole: ";
    asort($pole);
    foreach ($pole as $po)
    {
      echo "$po  ";  
    }   
    echo "<br>Sestupné řazení prvků pole: ";
    
    rsort($pole);
    foreach ($pole as $po)
    {
      echo "$po  ";  
    }           
    
    if (in_array(2,$pole)) {
      echo "Hodnota 2 je v poli.<br>";
    } else echo "Hodnota 2 není v poli.<br>";

    echo "Součet prvků pole je: " . array_sum($pole);
     
  ?>


  </body>
</html>