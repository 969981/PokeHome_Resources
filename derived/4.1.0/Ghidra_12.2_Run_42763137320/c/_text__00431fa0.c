/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00431fa0; name: FUN_.text__00431fa0
 */


void FUN__text__00431fa0(long param_1,int param_2,long param_3)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 != (long *)0x0) {
    if (param_3 == 0) {
      do {
        if ((int)plVar1[2] == 0 || (int)plVar1[2] == param_2) {
          (*(code *)**(undefined8 **)plVar1[1])((undefined8 *)plVar1[1],param_2);
        }
        plVar1 = (long *)*plVar1;
      } while (plVar1 != (long *)0x0);
    }
    else {
      do {
        if (((int)plVar1[2] == 0 || (int)plVar1[2] == param_2) && (plVar1[3] == param_3)) {
          (*(code *)**(undefined8 **)plVar1[1])((undefined8 *)plVar1[1],param_2);
        }
        plVar1 = (long *)*plVar1;
      } while (plVar1 != (long *)0x0);
    }
  }
  return;
}


