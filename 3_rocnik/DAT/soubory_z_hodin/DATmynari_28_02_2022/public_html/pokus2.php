<!DOCTYPE html>
<html lang='cs'>
  <head>
    <title>První stránka v PHP</title>
    <meta charset='utf-8'>
    <!-- <meta http-equiv='X-UA-Compatible' content='IE=edge'> -->
    <link href='/favicon.png' rel='shortcut icon' type='image/png'>
  </head>
  <body>

  <?php
    echo "Ahoj<br><br>";
    
    $a=8;
    $b=5;
    
    $soucet=$a+$b;
    echo "Součet čísel " . $a . " a " . $b . " je " . $soucet . "<br><br>";
    echo "Aktuální datum: " . date("<b>d.m.Y</b>") . "<br><br>";
    echo "Aktuální čas: " . date("<b>G:i:s</b>") . "<br><br>";
    
    define("text","My First Webpage<br><br>");
    echo text;
    
    $cena_bez_dph=rand(1,1000);
    echo "Cena bez dph: " . $cena_bez_dph;
    define("dph","1.21");
    
    $cena_s_dph=$cena_bez_dph*dph;
    echo "Cena s dph je " . $cena_s_dph . " Kč<br><br>";
    
    if ($cena_s_dph>100)
    {
      echo "Cena s dph je " . $cena_s_dph . " Kč<br><br>";
    } elseif ($cena_s_dph<100)
      {
        echo "Cena s dph je " . $cena_s_dph . " Kč. Levné zboží.<br><br>";
      } else echo "<br><br>"; 
      
    
    $mesic=date("m");
    switch($mesic)
    {
      case 2: $den=28; break; 
      case 4:
      case 6: 
      case 9:
      case 11: $den=30; break;
      default: $den=31; 
    }
    
    echo "Počet dnů aktuálního měsíce je: " . $den;
   
   for ($i=1; $i<=6; $i++)
   {
    echo "<h$i>Nadpis $i. úrovně</h$i>"; 
   }   
   echo "<table>";
   for ($i=1; $i<=5; $i++)
   {
    echo "<tr><td>" . $i . "</td></tr>"; 
   }    
   echo "</table>";
   
   
  echo "<table>";
   for ($i=1; $i<=1; $i++)
   {
    echo "<tr>";
    for ($j=1; $j<=5; $j++)
    {
      $cislo=rand(-10,10);
      echo "<td>" . $cislo . "</td>";
    }
    echo "</tr>"; 
   }    
   echo "</table>";
  ?>

  </body>
</html>