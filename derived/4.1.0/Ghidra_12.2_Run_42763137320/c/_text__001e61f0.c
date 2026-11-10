/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001e61f0; name: FUN_.text__001e61f0
 */


void FUN__text__001e61f0(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar1 = (long *)(**(code **)*puVar3)(puVar3);
  plVar2 = (long *)FUN__text__0012615c();
  if (plVar2 != plVar1) {
    do {
      plVar1 = (long *)*plVar1;
    } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
  }
  local_50 = 0x54b55ab916d8b464;
  uStack_48 = 0x717bd2;
  local_40 = 0x1b;
  local_38 = 0;
  plVar1 = (long *)FUN__text__00137c10(puVar3[0xaf],&local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  (**(code **)(*plVar1 + 0x90))(plVar1);
  *(undefined4 *)(param_1 + 0x98) = 0;
  return;
}


