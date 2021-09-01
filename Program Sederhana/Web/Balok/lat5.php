
<html>
<head>
<title>Hitung Balok</title>
</head>
<body bgcolor="#000000">


<table align="center" height="800" border="0" bgcolor="#000000">
<table align="center" height="800" border="2" bgcolor="white">


<tr>
<h1>Selamat Datang di Web Menghitung Volume dan Luas Permukaan Balok</h1>
<td height="200" colspan="2" align="center" bgcolor="#64C9CF">

</tr><td width="100">

<table width="1336" height="600" border="2">
<tr>
<td width="800"><center><?php
$p=$_POST['panjang'];
$l=$_POST['lebar'];
$t=$_POST['tinggi'];
$v=$p*$l*$t;
$lp=(2*$p*$l)+(2*$p*$t)+(2*$l*$t);
echo"panjang=$p<br>
     lebar=$l<br>
     tinggi=$t<hr>
     volume balok=$v<br>
     luas permukaan balok=$lp
	 ";
?>
<br><br>

<a href="balok.php"><button style="background-color:maroon"; >Kembali Menghitung Balok</button></a></center>
</td>
</tr>
</table>

</form>
<footer>
 
</footer>
</td>
</html>


