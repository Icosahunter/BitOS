# BitOS
BitOS is an OS for the BBC:microbit. It is currently only just started.
I'm designing it in such a way that I may be able to eventually remove
the abstraction layer from this project as a project in it's own right
and make ports to other platforms.

# Planned Features
- App framework and homescreen for launching apps
- Device framework and input/output abstraction
- Some default applications

# App Framework
The app framework will be a simple framework for creating apps that can
then be launched from a homescreen. On a microbit this might look like
icons that you can click through and then select the one you want.
This part of the framework will not supply anything for actually designing
apps, simply a way to select, manage, and launch them.

# Device Framework
The device framework will allow for managing input and output devices
connected to the microbit, as well as the microbits inputs/outputs itself.
The focus is on high abstraction so that application code need not be tailored
to specific input/output hardware, but can simply ask for an input of the
desired type, or use some sort of standard in/out depending on the case.
