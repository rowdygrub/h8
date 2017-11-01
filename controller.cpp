#include "controller.h"


void Controller::execute_cmd(int cmd){
  if(cmd == 0)
    items.add_flavors();
  if(cmd == 1)
    items.add_containers();
  if(cmd == 2)
    items.add_toppings();

}

void Controller::add_dialog(){
  Gtk:: Dialog *dialog = new Gtk::Dialog();
  dialog->set_title("Add Items");

  Gtk::HBox b_items;

  Gtk::Label l_items{"Select a Item:"};
  l_items.set_width_chars(15);
  b_items.pack_start(l_items,Gtk::PACK_SHRINK);

  Gtk::ComboBoxText c_items;
  c_items.set_size_request(160);
  c_items.append("Flavors");
  c_items.append("Containers");
  c_items.append("Toppings");
  b_items.pack_start(c_items,Gtk::PACK_SHRINK);
  dialog->get_vbox()->pack_start(b_items,Gtk::PACK_SHRINK);

  dialog->add_button("Cancel",0);
  dialog->add_button("OK",1);
  dialog->show_all();

  int result = dialog->run();
  dialog->close();

  while(Gtk::Main::events_pending()) Gtk::Main::iteration();

  int item = c_items.get_active_row_number();

  if(result == 1)
    execute_cmd(item);

}
