# CAD Models for 3D Pringting

### 3D Printing Machine: VOXELAB Aquila X2 (<a href="https://www.amazon.de/gp/product/B092S76V2B">Amazon</a>, <a href="https://www.youtube.com/watch?v=nGWpDWlgkzw">Tutorial</a>)
- remember to level the bed: paper width at 4 corners of the bed twice
- in case the filament breaks (because of moisture), run "auto unload", unscrew the Teflon tube, pull out the filament, introduce the filament, and run "autoload". If small pieces are left in the Teflon tube, can either insert a new one regardless or run "autoload" to melt them out

### CAD: FreeCAD (<a href="https://www.youtube.com/watch?v=uh5aN_Di8J0">Tutorial</a>)
- View/Workbench/Part Design => this also enable the delete option for the parts
- for sketch, remove extra lines before using the padding option
- needs to redefine dimension for sketches after trimming; topological naming problem => <a href="https://www.youtube.com/watch?v=0UlnrG-2atk">vid</a>
- gear package in FreeCAD => <a href="https://www.youtube.com/watch?v=Wu-zGDy7WQI">vid</a>, <a href="https://fab.cba.mit.edu/classes/863.09/people/cranor/How_to_Make_(Almost)_Anything/David_Cranor/Entries/2009/10/12_Entry_1_files/module.pdf">def</a>
- Note the tolerance is at least 0.2mm on each edge

### 3D Printing Software: Ultimaker Cura (<a href="https://www.youtube.com/watch?v=i-2qFVHKULE">Tutorial1</a>, <a href="https://www.youtube.com/watch?v=ejTC82nLS9g">Tutorial2</a>)
- Note on tutorial2: 15:25, 27:10, 34:20

### Debugging
- For the first print after a long pause, always assume the print will NOT work. Moniter at least until the initial layer is complete
- Initial layer adhesion problem:
  - Material/Printing Temperature Initial Layer: 210.0 C
  - Material/Build Plate Temperature Initial Layer: 65.0 C
  - Speed/Travel Speed: 100 mm/s
  - Speed/Initial Layer Speed: 15 mm/s
  - avoid printing to closed to edge for temperature uniformity
  - dry the room with a heater before printing
 
|  |  |
| - | - |
| Skirts | thin string surround but not connected to the model, for priming (ensuring smooth and consistent flow) the nozzle |
| Brims  | thin flat layer connected to the base of the model, for improving adhesion |
| Rafts  | thick flat layer connected to the base of the model, for compensating uneven bedding, mostly for ABS |

- stringing/ozzling/oozing problem: hair at the initial contact of the model, commonly tangles with the nozzle and peels off the initial layer
  - Travel/Retraction Distance: 7mm
  - Travel/Retraction Speed: 40mm/s
  - make the model larger so they can be trimmed mid printing
- Had a problem with PETG material melting and covering the nozzle that leads to peeling off the first layer. Choose "PETG" default from Cura, turn down the cooling fan to 40%, make the first layer thicker to 0.12mm, lowering down the bed slightly, heat up the bed to 80C, and crop out the excess strings using a plier during the printing of the first layer (also raised the nozzle temperature to 230C; not sure if this helped)

