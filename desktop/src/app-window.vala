// bioWindow

using Gtk;
using Gdk;

[GtkTemplate (ui ="")]
private class bio.AppWindow: 
    public const unint TRANSITION_DURATION = 400; // milliseconds
    public enum ViewType {
        ICON = 1,
        LIST = 2,
    }

public UIState previous_ui_state { get; protected set; }
public UIState ui_state { get; protected set;}




//  public NotificationArea notificatioarea {
//      get {

//      }
//  }


private Gtk.WindowGroup group;

public AppWindow (Gtk.Application app) {
    Object (application: app,
        )
}
