<!DOCTYPE html>
<html lang='cs'>
  <head>
    <meta charset='utf-8'>
    <title>PHP - for a pole</title>
  </head>
  
  <body>
    <?php
      for ($i=1; $i<=6; $i++)
      {
        echo "<h$i>Nadpis " . $i . ". úrovně</h$i><br>";
      }
    ?>
    
    <?php
      echo "<table border='1px solid' cellspacing='0'>";
      
      for ($i=1; $i<=10; $i++)
      {
        echo "<tr><td>" . $i . "</td></tr>";
      }
      
      echo "</table>";
    ?>
    
    <?php
      echo "<table border='1px solid' cellspacing='0'>";
      
 
        echo "<tr>";
        for ($i=1; $i<=10; $i++)
        {        
          $cislo = rand(-20,20);
          echo "<td>" . $cislo . "</td>";
        }
        echo "</tr>";

      
      echo "</table>";
    ?>    

  </body>
</html>