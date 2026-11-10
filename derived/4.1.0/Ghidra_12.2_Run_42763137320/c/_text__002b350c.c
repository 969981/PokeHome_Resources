/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002b350c; name: FUN_.text__002b350c
 */


void FUN__text__002b350c(long param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long local_8;
  
  (**(code **)(*param_2 + 0x10))(&local_8,param_2);
  plVar1 = *(long **)(param_1 + 0xd8);
  if (plVar1 < *(long **)(param_1 + 0xe0)) {
    uVar2 = tpidr_el0;
    uVar2 = uVar2 & 0xffffffffffffe000;
    if (*(long *)(uVar2 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(undefined8 *)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0xe8);
    *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
    *plVar1 = local_8;
    *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
    *(long **)(param_1 + 0xd8) = plVar1 + 1;
  }
  else {
    FUN__text__002b4f10(param_1 + 0xd0,&local_8);
    if (local_8 != 0) {
      (**(code **)(*(long *)(local_8 + 0x48) + 0x18))();
    }
  }
  return;
}


