<?php
	include('modulo/ui.inc');
	#include('fn_general.inc');
	#include('fn_chekador.inc');
?>
<!DOCTYPE html>
<html lang="en">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<meta charset="utf-8">
<meta http-equiv="X-UA-Compatible" content="IE=edge">
<meta name="viewport" content="width=device-width, initial-scale=1">
<title>Ingenia Web Estudio</title>
<link href="https://fonts.googleapis.com/css?family=Roboto" rel="stylesheet">
<link href="https://fonts.googleapis.com/icon?family=Material+Icons" rel="stylesheet">
<link href="../vendors/bootstrap/dist/css/bootstrap.min.css" rel="stylesheet">
<!-- NProgress <link href="../vendors/nprogress/nprogress.css" rel="stylesheet"> -->
<link href="../build/css/custom.css" rel="stylesheet">
</head>
<body class="nav-md footer_fixed">
<div class="container body">
	<!-- contenedor -->
	<div class="main_container">
		<!-- sidebar -->							<?php			sidebar();			?>			<!-- /sidebar -->
		<!-- top navigation -->			<?php			menutop();		?>			<!-- /top navigation -->
		<!-- page content -->
		<div class="right_col" role="main">
		<!-- panel -->							<?php 		panel_contenido($titulo="Titulo", $subtitulo="Subtitulo");			?>				<!-- /panel -->
		</div>
		<!-- /page content -->
		<!-- footer content -->			<?php			foot();			?>			<!-- /footer content -->
	</div>
	<!-- contenedor -->
</div>
<script src="../vendors/jquery/dist/jquery.min.js"></script>
<script src="../vendors/bootstrap/dist/js/bootstrap.min.js"></script>
<script src="../vendors/fastclick/lib/fastclick.js"></script>
<!-- NProgress 
<script src="../vendors/nprogress/nprogress.js"></script>
<script src="../vendors/jquery.hotkeys/jquery.hotkeys.js"></script>
<script src="../vendors/google-code-prettify/src/prettify.js"></script> -->
<!-- Custom Theme Scripts -->
<script src="../build/js/custom.min.js"></script>
</body>
</html>