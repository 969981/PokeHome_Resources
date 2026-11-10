/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00458f70; name: FUN_.text__00458f70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN__text__00458f70(long param_1,undefined1 (*param_2) [16])

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  
  if (*(long *)(param_1 + 8) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 8) + 0x174) = 0x42ca0000;
  }
  if ((*(byte *)(param_1 + 0x58) >> 2 & 1) != 0) {
    *_DAT_008a4da0 = 1;
  }
  lVar3 = FUN__text__0045c1e4(*(undefined8 *)*param_2);
  lVar5 = 0;
  plVar7 = (long *)(lVar3 + 0x20);
  do {
    lVar4 = lVar5;
    lVar5 = *plVar7;
    plVar7 = (long *)(lVar5 + 0x18);
  } while (lVar5 != 0 && lVar5 != *(long *)*param_2);
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar3 + 0x20);
    if (*(long *)(lVar3 + 0x20) != lVar5) {
      plVar7 = (long *)(lVar4 + 0x18);
    }
    *plVar7 = *(long *)(lVar5 + 0x18);
    if (*(long *)(lVar3 + 0x18) == lVar5) {
      *(long *)(lVar3 + 0x18) = lVar4;
    }
  }
  lVar5 = FUN__text__0045c1e4(*(undefined8 *)*param_2);
  *(int *)(lVar5 + 0x28) = *(int *)(lVar5 + 0x28) + -1;
  puVar2 = *(undefined8 **)*param_2;
  lVar5 = *(long *)(*param_2 + 8);
  uVar6 = puVar2[4];
  puVar1 = (undefined8 *)(param_1 + 0x30);
  if (*(undefined8 **)(param_1 + 0x30) != puVar2) {
    puVar1 = (undefined8 *)(lVar5 + 0x20);
  }
  *puVar1 = uVar6;
  *(undefined8 *)*param_2 = uVar6;
  *(long *)(*param_2 + 8) = lVar5;
  (**(code **)*puVar2)(puVar2);
  FUN__text__00400fc0(5,puVar2);
  return *param_2;
}


