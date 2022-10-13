<!DOCTYPE html>
<html lang='cs'>
  <head>
    <title>Výpis údajů</title>
    <meta charset='utf-8'>
    <!-- <meta http-equiv='X-UA-Compatible' content='IE=edge'> -->
    <link href='/favicon.png' rel='shortcut icon' type='image/png'>
  </head>
  
  <body>

    <h1>Výpis záznamů z databáze:</h1>
  
    
    <?php
          include_once "pripojit.php";
          $prikaz = "SELECT * FROM postavy";
          $SQLvypis = mysqli_query($spojeni,$prikaz);
          
          echo "<table width='300px'>";
          
          echo "<tr>";
            echo "<th>ID</th>";
            echo "<th>Jméno</th>";
            echo "<th>Výška</th>";
          echo "</tr>";
          
          while ($zaznam = mysqli_fetch_array($SQLvypis))
          {
          echo "<tr>";
            echo "<td>".$zaznam['id']."</td>";
            echo "<td>".$zaznam['jmeno']."</td>";
            echo "<td>".$zaznam['vyska']."</td>";
          echo "</tr>";
          }
          
          echo "</table>";
   
    
    ?>
  
  </body>
</html>