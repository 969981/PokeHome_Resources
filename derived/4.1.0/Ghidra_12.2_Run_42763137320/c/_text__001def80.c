/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001def80; name: FUN_.text__001def80
 */


/* WARNING: Heritage AFTER dead removal. Example location: r0x000001a4 : 0x001df0ac */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined8 FUN__text__001def80(long param_1)

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
  local_50 = 0x6741161af454b321;
  uStack_48 = 0x715c42;
  local_40 = 9;
  local_38 = 0;
  uVar4 = FUN__text__0018ebb0(puVar6[0xaf],&local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 == (undefined8 *)0x0)) {
joined_r0x001df0b8:
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
      if (plVar2 == (long *)0x0) goto joined_r0x001df0b8;
    }
    puVar7 = puVar6 + -10;
    iVar1 = *(int *)((long)puVar6 + 0x154);
  }
  if (iVar1 == 1) {
    uVar5 = FUN__text__001d6c3c(uVar4);
  }
  else {
    uVar5 = FUN__text__001d6d0c();
  }
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  FUN__text__001d6ef4(uVar4);
  *(undefined4 *)(puVar7 + 0x74) = 6;
  return 1;
}


