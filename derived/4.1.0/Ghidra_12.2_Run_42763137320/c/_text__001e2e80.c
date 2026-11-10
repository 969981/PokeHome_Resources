/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001e2e80; name: FUN_.text__001e2e80
 */


undefined8 FUN__text__001e2e80(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar1 = (long *)(**(code **)*puVar5)(puVar5);
  plVar2 = (long *)FUN__text__0012615c();
  if (plVar2 != plVar1) {
    do {
      plVar1 = (long *)*plVar1;
    } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
  }
  local_50 = 0x753f74378b49da9c;
  uStack_48 = 0x7167d4;
  local_40 = 8;
  local_38 = 0;
  uVar3 = FUN__text__0018e980(puVar5[0xaf],&local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  uVar4 = FUN__text__001c4180(uVar3);
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  uVar4 = FUN__text__001c4188(uVar3);
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar1 = (long *)(**(code **)*puVar5)(puVar5);
  plVar2 = (long *)FUN__text__0018d6a0();
  if (plVar2 != plVar1) {
    do {
      plVar1 = (long *)*plVar1;
    } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
  }
  *(undefined4 *)(puVar5 + 0x6a) = 3;
  return 1;
}


