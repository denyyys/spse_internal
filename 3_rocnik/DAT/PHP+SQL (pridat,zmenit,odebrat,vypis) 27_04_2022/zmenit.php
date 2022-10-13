<!DOCTYPE html>
<html lang='cs'>
  <head>
    <title>Změna údajů</title>
    <meta charset='utf-8'>
    <!-- <meta http-equiv='X-UA-Compatible' content='IE=edge'> -->
    <link href='/favicon.png' rel='shortcut icon' type='image/png'>
  </head>
  
  <body>

    <h1>Úprava údajů:</h1>
  
    <form action="" method="post" enctype="multipart/form-data">
      <label>Zadej ID: </label><input type="number" name="id" required><br><br> 
      <label>Jméno: </label><input type="text" name="jmeno" required><br><br>                              
      <label>Výška: </label><input type="number" name="vyska" required><label> cm</label><br><br>
      <input type="reset" name="reset" value="Vymazat"> <input type="submit" name="submit" value="Přidat">
    </form>
    
    <?php
      if ($_POST) 
      {
        if (isset($_POST["submit"]))
        {
          $id = $_POST["id"];
          $jmeno = $_POST["jmeno"];
          $vyska = $_POST["vyska"];
        
          include_once "pripojit.php";
          
          $prikaz = "UPDATE postavy SET vyska='$vyska' WHERE id='$id';";
          
          $vysledek = mysqli_query($spojeni,$prikaz);
          
          if ($vysledek) echo "Data byla odeslána";
            else echo "Data nebyla odeslána";
          
          mysqli_close($spojeni);
        }
      }  
    
      
    ?>
  
  </body>
</html>