/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00649fd4; name: FUN_.text__00649fd4
 */


bool FUN__text__00649fd4(undefined8 param_1,uint *param_2,undefined4 param_3,undefined4 param_4,
                        uint param_5)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  long lVar6;
  
  piVar2 = (int *)FUN__text__0064a828(param_3,param_4);
  puVar5 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (0x2e - (long)*piVar2)));
  uVar1 = *(uint *)((long)puVar5 + (ulong)*puVar5);
  if (param_5 < uVar1) {
    piVar2 = (int *)FUN__text__0064a828(param_3,param_4);
    if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x2f) {
      lVar6 = 0;
    }
    else {
      uVar4 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x17];
      lVar6 = 0;
      if (uVar4 != 0) {
        puVar5 = (uint *)((long)piVar2 + uVar4);
        lVar6 = (long)puVar5 + (ulong)*puVar5;
      }
    }
    puVar5 = (uint *)(lVar6 + (ulong)param_5 * 4 + 4);
    piVar2 = (int *)((long)puVar5 + (ulong)*puVar5);
    if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 7) ||
       (uVar4 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar4 == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uint)*(ushort *)((long)piVar2 + uVar4);
    }
    *param_2 = uVar3;
    piVar2 = (int *)FUN__text__0064a828(param_3,param_4);
    if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x2f) {
      lVar6 = 0;
    }
    else {
      uVar4 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x17];
      lVar6 = 0;
      if (uVar4 != 0) {
        puVar5 = (uint *)((long)piVar2 + uVar4);
        lVar6 = (long)puVar5 + (ulong)*puVar5;
      }
    }
    puVar5 = (uint *)(lVar6 + (ulong)param_5 * 4 + 4);
    piVar2 = (int *)((long)puVar5 + (ulong)*puVar5);
    if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
       (uVar4 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar4 == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uint)*(ushort *)((long)piVar2 + uVar4);
    }
    param_2[1] = uVar3;
  }
  return param_5 < uVar1;
}


