<!DOCTYPE html>
<html lang='cs'>
  <head>
    <meta charset='utf-8'>
    <title>PHP - pole</title>
  </head>
  
  <body>
    <?php
      $cisla = array(1,2,3,4,5,6,7,8,9,10);
      
      echo "Nultý prvek pole je " . $cisla[0] . "<br>";
      
     // for ($i=0; $i<=9; $i++)
     // 1. zpusob vypisu
      for ($i=0; $i<=count($cisla); $i++)
      {
        echo "$cisla[$i]  ";
      }
      echo "<br><br>";
     // 2. zpusob vypisu
      foreach ($cisla as $cis)
      {
        echo "$cis ";
      }      
      
    ?>
    
    <?php  
      echo "<br><br>";    
      for ($i=0; $i<5; $i++)
      {
        $pole[] = rand(1,50);
      }
      
      for ($i=0; $i<=count($pole); $i++)
      {
        echo "$pole[$i]  ";
      }
      echo "<br><br>";
      
      sort($pole);
      echo "Pole po seřazení (vzestupně): <br>";
      foreach ($pole as $po)
      {
        echo "$po ";
      }
      
      echo "<br><br>";
      $pole2 = array("1" => 5, "2" => 1, "3" => "hello");
      
      foreach ($pole2 as $po2)
      {
        echo "$po2  ";
      }
    ?>    

  </body>
</html>