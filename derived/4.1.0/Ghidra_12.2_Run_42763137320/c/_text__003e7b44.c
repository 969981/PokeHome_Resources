/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e7b44; name: FUN_.text__003e7b44
 */


void FUN__text__003e7b44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  long local_30;
  undefined8 local_28;
  undefined1 uStack_1;
  
  local_28 = param_2;
  local_30 = FUN__text__003e7d2c(&uStack_1,*(undefined8 *)(param_1 + 8),&local_28,param_3);
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x10))();
  }
  plVar1 = *(long **)(param_1 + 0x60);
  if (plVar1 < *(long **)(param_1 + 0x68)) {
    uVar2 = tpidr_el0;
    uVar2 = uVar2 & 0xffffffffffffe000;
    if (*(long *)(uVar2 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(undefined8 *)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x70);
    *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
    *plVar1 = local_30;
    *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
    *(long **)(param_1 + 0x60) = plVar1 + 1;
  }
  else {
    FUN__text__003e7f40(param_1 + 0x58,&local_30);
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    }
  }
  return;
}


