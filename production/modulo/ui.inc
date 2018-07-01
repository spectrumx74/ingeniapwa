<?php
/* --------------------------------------
Define el contenedor del sidebar.
Contiene la llamada al menu principal.
-------------------------------------- */
function sidebar() {
	echo'<div class="col-md-3 left_col menu_fixed">
  		<div class="left_col scroll-view">
			<div class="navbar nav_title" style="border: 0;"><a href="index.html" class="site_title"><span><strong>IngeniaWeb</strong></span></a></div><div class="clearfix"></div>
			<!-- side menu -->';			sidemenu();			echo'<!-- side menu -->
		</div>
	</div>';
}
/* --------------------------------------
Define el contenedor del menu principal cotenido en el sidebar.
Contiene la llamada al menu principal.
-------------------------------------- */
function sidemenu() {
	echo'<!-- menu profile quick info -->
	<div class="profile clearfix">
		<div class="profile_pic"><img src="images/img.jpg" alt="..." class="img-circle profile_img"></div>
		<div class="profile_info"><span>Bienvenido,</span><h2>Juanito Wanabacoa</h2></div>
	</div><br />
	<!-- /menu profile quick info -->';
	echo'<!-- sidebar menu -->
	<div id="sidebar-menu" class="main_menu_side hidden-print main_menu">
	  <div class="menu_section">
		<h3>Sistemas</h3>
		<ul class="nav side-menu">
		  <li><a><i class="material-icons md-18" style="float:left;">alarm</i>&nbsp;&nbsp;Elemento<i class="material-icons" style="float:right">expand_more</i></a>
			<ul class="nav child_menu">
			  <li><a href="#">Opci&oacute;n</a></li>
			</ul>
		  </li>
		  <li><a><i class="material-icons md-18" style="float:left;">list_alt</i>&nbsp;&nbsp;Elemento <i class="material-icons" style="float:right">expand_more</i></a>
			<ul class="nav child_menu">
			  <li><a href="#">Opci&oacute;n</a></li>
			</ul>
		  </li>
		  <li><a><i class="material-icons md-18" style="float:left;">devices_other</i>&nbsp;&nbsp;Elemento <i class="material-icons" style="float:right">expand_more</i></a>
			<ul class="nav child_menu">
			  <li><a href="#">Opci&oacute;n</a></li>
			</ul>
		  </li>
		  <li><a><i class="material-icons md-18" style="float:left;">lens</i>&nbsp;&nbsp;Elemento <i class="material-icons" style="float:right">expand_more</i></a>
			<ul class="nav child_menu">
			  <li><a href="#">Opci&oacute;n</a></li>
			</ul>
		  </li>
		  <li><a><i class="material-icons md-18" style="float:left;">lens</i>&nbsp;&nbsp;Elemento <i class="material-icons" style="float:right">expand_more</i></a>
			<ul class="nav child_menu">
			  <li><a href="#">Opci&oacute;n</a></li>
			</ul>
		  </li>
		  <li><a><i class="material-icons md-18" style="float:left;">lens</i>&nbsp;&nbsp;Elemento <i class="material-icons" style="float:right">expand_more</i></a>
			<ul class="nav child_menu">
			  <li><a href="fixed_sidebar.html">Opci&oacute;n</a></li>
			  <li><a href="fixed_footer.html">Opci&oacute;n</a></li>
			</ul>
		  </li>
		</ul>
	  </div>
	  <div class="menu_section">
		<h3>Live On</h3>
		<ul class="nav side-menu">
		  <li><a><i class="material-icons md-18" style="float:left;">more_vert</i> Elemento <i class="material-icons" style="float:right">expand_more</i></a>
			<ul class="nav child_menu">
			  <li><a href="#">Opci&oacute;n</a></li>
			</ul>
		  </li>
		  <li><a><i class="material-icons md-18" style="float:left;">more_vert</i> Elemento <i class="material-icons" style="float:right">expand_more</i></a>
			<ul class="nav child_menu">
			  <li><a href="#">Opci&oacute;n</a></li>
			</ul>
		  </li>
		  <li><a><i class="material-icons md-18" style="float:left;">more_vert</i> Elemento <i class="material-icons" style="float:right">expand_more</i></a>
			<ul class="nav child_menu">
				<li><a href="#level1_1">Level One</a>
				<li><a>Level One<i class="material-icons" style="float:right">expand_more</i></a>
				  <ul class="nav child_menu">
					<li class="sub_menu"><a href="level2.html">Level Two</a></li>
					<li><a href="#level2_1">Level Two</a></li>
					<li><a href="#level2_2">Level Two</a></li>
				  </ul>
				</li>
				<li><a href="#level1_2">Level One</a></li>
			</ul>
		  </li>
		  <li><a href="javascript:void(0)"><i class="fa fa-laptop"></i> Elemento <span class="label label-success pull-right">Coming Soon</span></a></li>
		</ul>
	  </div>
	</div>
	<!-- /sidebar menu -->';
	echo'<!-- /menu footer buttons -->
	<div class="sidebar-footer hidden-small">
	  <a data-toggle="tooltip" data-placement="top" title="Settings"><i class="material-icons md-24">settings</i></a><a data-toggle="tooltip" data-placement="top" title="FullScreen"><i class="material-icons md-24">fullscreen</i></a>
	  <a data-toggle="tooltip" data-placement="top" title="Notifications"><i class="material-icons md-24">notifications_active</i> </a>
	  <a data-toggle="tooltip" data-placement="top" title="Logout" href="login.html"><i class="material-icons md-24">settings_power</i></a>
	</div>
	<!-- /menu footer buttons -->';
}
/* --------------------------------------
Define el contenedor del menu superior.
-------------------------------------- */
function menutop(){
	echo'<!-- top navigation -->
	<div class="top_nav">
		<div class="nav_menu">
			<nav>
			  <div class="nav toggle"> <a id="menu_toggle"><i class="material-icons">menu</i> </a></div>
			  <ul class="nav navbar-nav navbar-right">
				<li role="presentation" class="dropdown"><a href="javascript:;" class="dropdown-toggle info-number" data-toggle="dropdown" aria-expanded="false"><i class="material-icons md-24">mail</i><span class="badge bg-green">6</span></a>
				  <ul id="menu1" class="dropdown-menu list-unstyled msg_list" role="menu">
					<li><a><span class="image"><img src="images/img.jpg" alt="Profile Image" /></span><span><span>Juanito Smith</span><span class="time">hace 3 mins</span></span><span class="message">orem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.</span></a></li>
					<li><a><span class="image"><img src="images/img.jpg" alt="Profile Image" /></span><span><span>Juanito Smith</span><span class="time">hace 3 mins</span></span><span class="message">orem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.</span></a></li>
					<li><a><span class="image"><img src="images/img.jpg" alt="Profile Image" /></span><span><span>Juanito Smith</span><span class="time">hace 3 mins</span></span><span class="message">orem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.</span></a></li>
					<li><a><span class="image"><img src="images/img.jpg" alt="Profile Image" /></span><span><span>Juanito Smith</span><span class="time">hace 3 mins</span></span><span class="message">orem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.</span></a></li>
					<li><div class="text-center"><a><strong>Todas las Alertas</strong><i class="fa fa-angle-right"></i></a></div></li>
				  </ul>
				</li>
				<li class="menupersonal"><a href="javascript:;" class="user-profile dropdown-toggle" data-toggle="dropdown" aria-expanded="false"><img src="images/img.jpg" alt="">Juanito Wanabacoa<i class="material-icons" style="float:right">expand_more</i></a>
				  <ul class="dropdown-menu dropdown-usermenu pull-right">
					<li><a href="javascript:;"> Perfil</a></li>
					<li><a href="javascript:;"><span class="badge bg-red pull-right">50%</span><span>Configuracion</span></a></li>
					<li><a href="javascript:;">Ayuda</a></li>
					<li><a href="login.html"><i class="fa fa-sign-out pull-right"></i> Salir</a></li>
				  </ul>
				</li>
			  </ul>
			</nav>
		</div>
	</div>
	<!-- /top navigation -->';	
}
/* --------------------------------------
Define el contenedor del pie de pagina.
-------------------------------------- */
function foot() {
	echo'<footer>
	  <div class="pull-left">Ingenia Estudio Web<br/><a href="https://colorlib.com">diseñamos el mundo para ponerlo en sus manos</a></div><div class="clearfix"></div>
	</footer>';
}
/* --------------------------------------
Define el contenedor para el titulo y subtitulo del panel de contenido.
Incluye opciones de ocultar, contraer/expandir y menus.
$titulo ---> Titulo del panel
$subtitulo ---> Suntitulo del panel
-------------------------------------- */
function titulo_panel($titulo, $subtitulo) {
	echo'<div class="x_title"><h4>'.$titulo.'<small>'.$subtitulo.'</small></h4>
	<ul class="nav navbar-right panel_toolbox">
		<li class="dropdown"><a href="#" class="dropdown-toggle" data-toggle="dropdown" role="button" aria-expanded="false"><i class="material-icons md-12">settings</i></a>
			<ul class="dropdown-menu" role="menu">
				<li><a href="#">Opci&oacute;n 1</a></li><li><a href="#">Opci&oacute;n 2</a></li>
			</ul>
		</li>
		<li><a class="collapse-link"><i class="material-icons md-12">expand_less</i></a></li>
		<li><a class="close-link"><i class="material-icons md-12">cancel</i></a></li>
	</ul>
	<div class="clearfix"></div>
	</div>';
}
/* --------------------------------------
Define el contenedor del panel de contenido.
$titulo ---> Titulo del panel
$subtitulo ---> Suntitulo del panel
Procesa opciones desde $GET y $SESSION
-------------------------------------- */
function panel_contenido($titulo, $subtitulo){
	echo'<div class="x_panel">
		<!-- titulo -->';			titulo_panel($titulo, $subtitulo);			echo'<!-- /titulo -->
        <div class="x_content">
			<div class="dashboard-widget-content">';				
				#if(isset($_SESSION['correo']) AND strstr($_SESSION['correo'],'@guanajuato.gob.mx') ){
					if(isset($_GET['scc']) AND $_GET['scc'] == 'mfj23rwr12ioas' ){
						if(isset($_GET['acc']) AND $_GET['acc'] == 'forma' ){
							if(isset($_GET['opc'])){
								switch($_GET['opc']){
									case 'chk1':			echo'<h2>Esta es la primera opci&oacute;n</h2><p>Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>';						break;
									case 'chk2':			echo'<h2>Esta es la segunda opci&oacute;n</h2><p>Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>';				break;
								}
							}
						} elseif(isset($_GET['acc']) AND $_GET['acc'] == 'salir' ){				salir();			}
					}else {
						echo'<br/><br/><br/><center><img src="assets/img/avatar_f.png" width="320" style="opacity:0.75"><br/><br/><h1>BIENVENIDO</h1></center>';
					}
				#} else {
					#echo'Infracci&oacute;n de seguridad...';
					#echo"<script language=javascript>setTimeout(\"location.href='http://checador.familiadgrh.esy.es' \",2500);</script>";
				#}
			echo'</div>
		</div>
	</div>';
}
?>