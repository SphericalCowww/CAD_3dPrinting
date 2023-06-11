# CAD Models for 3D Pringting

### 3D Printing Machine: VOXELAB Aquila X2 (<a href="https://www.amazon.de/gp/product/B092S76V2B">Amazon</a>, <a href="https://www.youtube.com/watch?v=nGWpDWlgkzw">Tutorial</a>)
- remember to level the bed: paper width at 4 corners of the bed twice
- in case the filament break (because of moisture), run "auto unload", unscrew the teflon tube, pull out the filament, and introduce the filament, and run "auto load". If small peices left in teflon tube, can either insert new one regardless or run "auto load" to melt them out

### CAD: FreeCAD (<a href="https://www.youtube.com/watch?v=uh5aN_Di8J0">Tutorial</a>)
- for sketch, remove extra lines before using the padding option
- needs to redefine dimension for sketches after trimming; topological naming problem => <a href="https://www.youtube.com/watch?v=0UlnrG-2atk">vid</a>
- gear package in FreeCAD => <a href="https://www.youtube.com/watch?v=Wu-zGDy7WQI">vid</a>, <a href="https://fab.cba.mit.edu/classes/863.09/people/cranor/How_to_Make_(Almost)_Anything/David_Cranor/Entries/2009/10/12_Entry_1_files/module.pdf">def</a>

### 3D Printing Software: Ultimaker Cura (<a href="https://www.youtube.com/watch?v=i-2qFVHKULE">Tutorial1</a>, <a href="https://www.youtube.com/watch?v=ejTC82nLS9g">Tutorial2</a>)
- Note on tutorial2: 15:25, 27:10, 34:20

### Other notes
- Had problem with PETG material melting and cover the nozzle that leads to peeling off the first layer. Choose "PETG" default from Cura, turn down the cooling fan to 40%, make the first layer thicker to 0.12mm, lowering down the bed slightly, heating up the bed to 80C, and cropping out the excess strings using a plier during the printing of the first layer (alos raised the nozzle temperature to 230C; not sure if this helped)

