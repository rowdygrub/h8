#include "main_window.h"

Main_window::~Main_window(){}
Main_window::Main_window(){
  set_default_size(400,200);

	Gtk::Box *vbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL,0));
	add(*vbox);

  //menu bar at the top
  Gtk::MenuBar *menubar = Gtk::manage(new Gtk::MenuBar());
	vbox->pack_start(*menubar,Gtk::PACK_SHRINK,0);

  //file dropdown menu
	Gtk::MenuItem *menuitem_file = Gtk::manage(new Gtk::MenuItem("_File",true));
	menubar->append(*menuitem_file);
	Gtk::Menu *filemenu = Gtk::manage(new Gtk::Menu());
	menuitem_file->set_submenu(*filemenu);

  /*  TODO
      append NEW
      append OPEN
      append SAVE
      append SAVE AS

  */

  //append quit to the file menu
	Gtk::MenuItem *menuitem_quit = Gtk::manage(new Gtk::MenuItem("_Quit",true));
	menuitem_quit->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_quit_click));
	filemenu->append(*menuitem_quit);

  //add dropdown menu
  Gtk::MenuItem *menuitem_add = Gtk::manage(new Gtk::MenuItem("_Add",true));
  menubar->append(*menuitem_add);
  Gtk::Menu *add_menu = Gtk::manage(new Gtk::Menu());
  menuitem_add->set_submenu(*add_menu);

  //append items to add menu
  Gtk::MenuItem *items = Gtk::manage(new Gtk::MenuItem("_Items",true));
  items->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_add_items_click));
  add_menu->append(*items);

  /*TODO
    append CUSTOMER
    append SERVER
  */
  vbox->show_all();
  //TODO EDIT REPORT ABOUT dropdown menu
}

void Main_window::on_quit_click(){hide();}
void Main_window::on_add_items_click(){controller.add_dialog();}
