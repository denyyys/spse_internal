<!DOCTYPE html>
<html lang='cs'>
  <head>
    <title>Nová filmová postava</title>
    <meta charset='utf-8'>
    <!-- <meta http-equiv='X-UA-Compatible' content='IE=edge'> -->
    <link href='/favicon.png' rel='shortcut icon' type='image/png'>
  </head>
  
  <body>

    <h1>Nová filmová postava:</h1>
  
    <form action="pridat.php" method="post" enctype="multipart/form-data">
      <label>Jméno: </label><input type="text" name="jmeno" required><br><br>                               
      <label>Výška: </label><input type="number" name="vyska" required><label> cm</label><br><br>
      <input type="reset" name="reset" value="Vymazat"> <input type="submit" name="submit" value="Přidat">
    </form>
    
    <?php
      if ($_POST) 
      {
        if (isset($_POST["submit"]))
        {
          $jmeno = $_POST["jmeno"];
          $vyska = $_POST["vyska"];
        
          include_once "pripojit.php";
          
          $prikaz = "INSERT INTO postavy (jmeno,vyska) VALUES ('$jmeno',$vyska);";
          
          $vysledek = mysqli_query($spojeni,$prikaz);
          
          if ($vysledek) echo "Data byla odeslána";
            else echo "Data nebyla odeslána";
          
          mysqli_close($spojeni);
        }
      }  
    
      
    ?>
  
  </body>
</html>