/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001dec50; name: FUN_.text__001dec50
 */


undefined8 FUN__text__001dec50(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar2 = (long *)(**(code **)*puVar6)(puVar6);
  plVar3 = (long *)FUN__text__0012615c();
  if (plVar3 != plVar2) {
    do {
      plVar2 = (long *)*plVar2;
    } while (plVar2 != plVar3 && plVar2 != (long *)0x0);
  }
  local_50 = 0x753f74378b49da9c;
  uStack_48 = 0x7167d4;
  local_40 = 8;
  local_38 = 0;
  uVar4 = FUN__text__0018e980(puVar6[0xaf],&local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 == (undefined8 *)0x0)) {
    FUN__text__001c3734(uVar4);
joined_r0x001ded6c:
    puVar7 = (undefined8 *)0x0;
    iVar1 = iRam00000000000001a4;
  }
  else {
    plVar2 = (long *)(**(code **)*puVar6)(puVar6);
    plVar3 = (long *)FUN__text__0018d6a0();
    if (plVar3 != plVar2) {
      do {
        plVar2 = (long *)*plVar2;
      } while (plVar2 != plVar3 && plVar2 != (long *)0x0);
      if (plVar2 == (long *)0x0) {
        FUN__text__001c3734(uVar4);
        goto joined_r0x001ded6c;
      }
    }
    puVar7 = puVar6 + -10;
    FUN__text__001c3734(uVar4);
    iVar1 = *(int *)((long)puVar6 + 0x154);
  }
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      uVar5 = FUN__text__001c4278(uVar4);
      goto joined_r0x001ded80;
    }
    if (iVar1 == 0) {
      uVar5 = FUN__text__001c41c0();
      goto joined_r0x001ded80;
    }
  }
  uVar5 = FUN__text__001c4348();
joined_r0x001ded80:
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  FUN__text__001c373c(uVar4);
  *(undefined4 *)(puVar7 + 0x74) = 3;
  return 1;
}


