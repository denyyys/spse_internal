<!DOCTYPE html>
<html lang='cs'>
  <head>
    <title></title>
    <meta charset='utf-8'>
    <link href='/favicon.png' rel='shortcut icon' type='image/png'>
  </head>
  <body>
  <?php
      $soucet=0;
      echo "<table height='250px' width='250px'>";
      
      for($i=1;$i<=5;$i++)
      {
            echo "<tr>";
            
            for($j=1;$j<=5;$j++)
            {
                 $cislo=rand(1,10);
                 
                 if($i==$j)
                 {
                     echo "<td height='50px' width='50px'>" . $cislo . "</td>";
                 } else {
                     echo "<td height='50px' width='50px' bgcolor='violet'>" . $cislo . "</td>";
                     $soucet=$soucet+$cislo;
                 }
                
            
            }
            echo "</tr>";
      }
      
      echo "</table>";
      echo "Soucet hodnot mimo hlavni diagonalu je <b> $soucet </b>";
  ?>
  

  </body>
</html>