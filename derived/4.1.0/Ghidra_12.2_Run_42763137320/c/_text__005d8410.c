/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d8410; name: FUN_.text__005d8410
 */


void FUN__text__005d8410(long param_1)

{
  long *plVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x108) != 0) {
    uVar2 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x100) + uVar2 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(plVar1[9] + 0x10))();
      }
      if ((int)plVar1[0xd] == 2) {
        (**(code **)(*plVar1 + 0x70))(plVar1,uVar2 != *(long *)(param_1 + 0x108) - 1U);
      }
      (**(code **)(plVar1[9] + 0x18))(plVar1 + 9);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ulong *)(param_1 + 0x108));
  }
  return;
}


