<!DOCTYPE html>
<html lang='cs'>
  <head>
    <title>Odstranit filmovou postavu</title>
    <meta charset='utf-8'>
    <!-- <meta http-equiv='X-UA-Compatible' content='IE=edge'> -->
    <link href='/favicon.png' rel='shortcut icon' type='image/png'>
  </head>
  
  <body>

    <h1>Odstranění záznamu z tabulky:</h1>
  
    <form action="odstranit.php" method="post" enctype="multipart/form-data">                               
      <label>Zadejte číslo filmové postavy: </label><input type="number" name="id" required><br><br>
      <input type="reset" name="reset" value="Vymazat"> <input type="submit" name="submit" value="Odstranit">
    </form>
    
    <?php
      if ($_POST) 
      {
        if (isset($_POST["submit"]))
        {
          $id = $_POST["id"];
        
          include_once "pripojit.php";
          
          $odstraneni = "DELETE FROM postavy WHERE id = $id;";
          
          $vysledek = mysqli_query($spojeni,$odstraneni);
          
          if ($vysledek) echo "Záznam byl odstraněn";
            else echo "Záznam nebyl odstraněn";
          
          mysqli_close($spojeni);
        }
      }  
    
      
    ?>
  
  </body>
</html>