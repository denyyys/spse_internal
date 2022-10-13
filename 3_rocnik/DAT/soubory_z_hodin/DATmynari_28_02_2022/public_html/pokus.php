<!DOCTYPE html>
<html lang='cs'>
  <head>
    <meta charset='utf-8'>  
    <title>První stránka v PHP</title>
  </head>
  
  <body>
    <h1>Hello</h1>
    
    <?php
      echo "Hello<br>";
      
      $a=8;
      $b=5;
      
      $soucet=$a+$b;
      echo "Součet čísel " . $a . " a " . $b . " je " . $soucet . "<br><br>";
      
      echo "Aktuální datum: " . date("<b>d.m.Y</b>") . "<br><br>";
      echo "Aktuální čas: " . date("<b>H:i:s</b><br>");
      
      define("dph","21");
      $cena_bez_dph=50;
      $cena_s_dph=$cena_bez_dph+($cena_bez_dph*dph/100);
      echo "<br><br>Cena s dph je " . $cena_s_dph . " Kč";
      
      if ($cena_s_dph>=100)
      {
        echo "<br>Částka je: " . $cena_s_dph;
      } else echo "<br>Levné zboží :-)";
      
    ?>
    
  </body>
</html>