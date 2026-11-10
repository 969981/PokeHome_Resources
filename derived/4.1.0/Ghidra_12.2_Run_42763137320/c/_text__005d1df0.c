/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d1df0; name: FUN_.text__005d1df0
 */


void FUN__text__005d1df0(long param_1,ulong param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  
  param_1 = param_1 + (param_2 & 0xffffffff) * 0x30;
  plVar4 = *(long **)(param_1 + 0x210);
  plVar5 = *(long **)(param_1 + 0x218);
  if (plVar4 != plVar5) {
    do {
      if ((*plVar4 != 0) && (puVar3 = *(undefined8 **)(*plVar4 + 0x60), puVar3 != (undefined8 *)0x0)
         ) {
        plVar1 = (long *)(**(code **)*puVar3)(puVar3);
        plVar2 = (long *)FUN__text__005a44a8();
        if (plVar2 != plVar1) {
          do {
            plVar1 = (long *)*plVar1;
          } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
          if (plVar1 == (long *)0x0) goto LAB__text__005d1e3c;
        }
        (**(code **)(puVar3[-10] + 0x70))(puVar3 + -10,param_3 & 1,3);
      }
LAB__text__005d1e3c:
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar5);
  }
  return;
}


