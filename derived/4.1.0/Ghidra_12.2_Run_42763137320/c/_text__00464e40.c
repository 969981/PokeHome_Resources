/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00464e40; name: FUN_.text__00464e40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN__text__00464e40(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  
  for (lVar2 = *param_1; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x6800)) {
    if (*(long *)(lVar2 + 0x6810) != 0) goto LAB__text__00464ee4;
  }
  lVar2 = FUN__text__00400f80(0,0x6818);
  if (lVar2 == 0) {
    return (undefined8 *)0x0;
  }
  lVar3 = 0;
  plVar5 = (long *)0x0;
  *(undefined8 *)(lVar2 + 0x6800) = 0;
  lVar4 = 0x80;
  do {
    plVar1 = (long *)(lVar2 + lVar3);
    lVar3 = lVar3 + 0x340;
    *plVar1 = (long)plVar5;
    plVar1[0x1a] = (long)plVar1;
    plVar5 = plVar1 + 0x4e;
    lVar4 = lVar4 + -4;
    plVar1[0x34] = (long)(plVar1 + 0x1a);
    plVar1[0x4e] = (long)(plVar1 + 0x34);
  } while (lVar4 != 0);
  *(long *)(lVar2 + 0x6810) = lVar2 + lVar3 + -0xd0;
  *(undefined4 *)(lVar2 + 0x6808) = 0x80;
  if (*param_1 == 0) {
    *param_1 = lVar2;
    *(undefined8 *)(lVar2 + 0x6800) = 0;
    puVar6 = *(undefined8 **)(lVar2 + 0x6810);
  }
  else {
    *(long *)(lVar2 + 0x6800) = *param_1;
    *param_1 = lVar2;
LAB__text__00464ee4:
    puVar6 = *(undefined8 **)(lVar2 + 0x6810);
  }
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined8 *)(lVar2 + 0x6810) = *puVar6;
    *puVar6 = 0;
    *(int *)(lVar2 + 0x6808) = *(int *)(lVar2 + 0x6808) + -1;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_28 = 0;
    local_38 = 0xff;
    local_30 = 0xff;
    FUN__text__0046bd38(puVar6 + 3,&local_50);
    *(undefined4 *)(puVar6 + 0x15) = 0;
    *(undefined4 *)(puVar6 + 0x12) = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    lVar2 = _DAT_008a4aa0 + 0x10;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    puVar6[3] = lVar2;
    *(byte *)(puVar6 + 0x19) = *(byte *)(puVar6 + 0x19) & 0xf8 | 1;
  }
  return puVar6;
}


