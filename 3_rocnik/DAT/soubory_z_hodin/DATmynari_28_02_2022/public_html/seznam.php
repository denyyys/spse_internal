<!DOCTYPE html>
<html lang='cs'>
  <head>
    <meta charset='utf-8'>
    <title>PHP - výběrový seznam</title>
  </head>
  
  <body>
  
  <h2>Výběrový seznam v PHP</h2>
  
  <form>
     <label>Vyberte číslo:</label>
     
     <select name="cislo">
      <?php
        for ($i=1; $i<=10; $i++) {
          $seznam[] = $i;
        }
 
        foreach ($seznam as $sez) {
          echo "<option value='$sez'>$sez</option>";
        }
     
      ?>      
     </select>
  
  </form>
  



  </body>
</html>