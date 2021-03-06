/*
 * main.c
 * Copyright (C) 2021 Tracey Ledbetter - tenthconcept@gmail.com
 * 
 * bio is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * bio is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "config.h"
//#include <glib/gi18n.h>


gint main (gint argc, gchar **argv)
{
  g_autoptr (bioHMIApplication) app = NULL;

  bindtextdomain (GETTEXT_PACKAGE, PACKAGE_LOCALE_DIR);
  bind_textdomain_codeset (GETTEXT_PACKAGE, "UTF-8");
  textdomain (GETTEXT_PACKAGE);

  g_set_application_name (_("bioHMIApplication"));

  app = bioHMIApplication ();

  return g_application_run (G_APPLICATION (app), argc, argv);
}
