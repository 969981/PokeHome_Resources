/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d0394; name: FUN_.text__004d0394
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004d0394(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  lVar2 = *param_1;
  plVar5 = *(long **)(lVar2 + (param_2 & 0xffffffff) * 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = (long *)plVar5[0x12];
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,_DAT_008a47f0);
      plVar5[0x12] = 0;
    }
    puVar6 = (undefined8 *)plVar5[0x13];
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6);
      FUN__text__00400fc0(5,puVar6);
      plVar5[0x13] = 0;
    }
    (**(code **)(*plVar5 + 0x28))(plVar5);
    lVar2 = *param_1;
    puVar6 = *(undefined8 **)(lVar2 + (param_2 & 0xffffffff) * 8);
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6);
      FUN__text__00400fc0(5,puVar6);
      lVar2 = *param_1;
    }
  }
  uVar4 = *(uint *)(param_1 + 1);
  puVar6 = (undefined8 *)(lVar2 + (param_2 & 0xffffffff) * 8);
  puVar3 = (undefined8 *)((lVar2 + (ulong)uVar4 * 8) - 8);
  if (puVar6 < puVar3) {
    *puVar6 = *puVar3;
    uVar4 = *(uint *)(param_1 + 1);
  }
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  *(uint *)(param_1 + 1) = uVar4 - 1;
  return;
}


