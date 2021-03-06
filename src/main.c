/*
 * Initial main.c file generated by Glade. Edit as required.
 * Glade will not overwrite this file.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "interface.h"
#include "support.h"

int
main (int argc, char *argv[])
{
  GtkWidget *Admin;
  GtkWidget *auth;
  GtkWidget *inscription;
  GtkWidget *Gestion_ouvrier;
  GtkWidget *Gestion_equipment;
  GtkWidget *Gestion__troupeaux_;
  GtkWidget *Gestion_client;
  GtkWidget *Gestion_capteur;
  GtkWidget *Gestion_calendrier;
  GtkWidget *espace_reclamation_;
  GtkWidget *espace_responsable_;
  GtkWidget *window1;

#ifdef ENABLE_NLS
  bindtextdomain (GETTEXT_PACKAGE, PACKAGE_LOCALE_DIR);
  bind_textdomain_codeset (GETTEXT_PACKAGE, "UTF-8");
  textdomain (GETTEXT_PACKAGE);
#endif

  gtk_set_locale ();
  gtk_init (&argc, &argv);

  add_pixmap_directory ("../pixmaps");

  /*
   * The following code was added by Glade to create one of each component
   * (except popup menus), just so that you see something after building
   * the project. Delete any components that you don't want shown initially.
   */
  //Admin = create_Admin ();
  //gtk_widget_show (Admin);
  auth = create_auth ();
  gtk_widget_show (auth);
  //inscription = create_inscription ();
  //gtk_widget_show (inscription);
  //Gestion_ouvrier = create_Gestion_ouvrier ();
  //gtk_widget_show (Gestion_ouvrier);
  //Gestion_equipment = create_Gestion_equipment ();
  //gtk_widget_show (Gestion_equipment);
  //Gestion__troupeaux_ = create_Gestion__troupeaux_ ();
  //gtk_widget_show (Gestion__troupeaux_);
  //Gestion_client = create_Gestion_client ();
  //gtk_widget_show (Gestion_client);
  //Gestion_capteur = create_Gestion_capteur ();
  //gtk_widget_show (Gestion_capteur);
  //Gestion_calendrier = create_Gestion_calendrier ();
  //gtk_widget_show (Gestion_calendrier);
  //espace_reclamation_ = create_espace_reclamation_ ();
  //gtk_widget_show (espace_reclamation_);
  //espace_responsable_ = create_espace_responsable_ ();
  //gtk_widget_show (espace_responsable_);


  gtk_main ();
  return 0;
}

