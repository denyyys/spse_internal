<!DOCTYPE html>
<html lang='cs'>
  <head>
    <meta charset='utf-8'>  
    <title>Formulář v PHP</title>
    <!-- <meta http-equiv='X-UA-Compatible' content='IE=edge'> -->
    <link href='/favicon.png' rel='shortcut icon' type='image/png'>
    <link href='style.css' rel='stylesheet' type='text/css'>    
  </head>
  
  <body>

    <h1>Formulář - zpracování údajů</h1>  
    <table class="metoda">
      <tr>
        <td class="stred"><span class="nadpis">Metoda GET<span>
          <form enctype="multipart/form-data" action="vypis.php" method="get"><br>
            <input type="text" maxlength="10" name="username" placeholder="uživatelské jméno" required><br><br>
            <input type="password" maxlength="5" name="password" placeholder="heslo" required><br><br>
            <input type="submit" name="reset" value="Resetovat"> <input type="submit" name="submit" value="Odeslat">    
          </form>   
        </td>   
     </tr>  
    </table>     

    <table class="metoda">
     <tr>
      <td><span class="nadpis">Metoda POST<span>
        <form enctype="multipart/form-data" action="vypis.php" method="post"><br>
          <input type="text" maxlength="10" name="username" placeholder="uživatelské jméno" required><br><br>
          <input type="password" maxlength="5" name="password" placeholder="heslo" required><br><br>
          <input type="submit" name="reset" value="Resetovat"> <input type="submit" name="submit" value="Odeslat">    
        </form>   
      </td>   
     </tr>  
    </table>    

  </body>
</html>


