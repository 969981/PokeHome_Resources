/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00642d84; name: FUN_.text__00642d84
 */


bool FUN__text__00642d84(undefined8 param_1,uint *param_2,undefined4 param_3,undefined4 param_4,
                        uint param_5)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  long lVar7;
  
  piVar3 = (int *)FUN__text__00643738(param_3,param_4);
  puVar6 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (0x2e - (long)*piVar3)));
  uVar1 = *(uint *)((long)puVar6 + (ulong)*puVar6);
  if (param_5 < uVar1) {
    piVar3 = (int *)FUN__text__00643738(param_3,param_4);
    if (*(ushort *)((long)piVar3 - (long)*piVar3) < 0x2f) {
      lVar7 = 0;
    }
    else {
      uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[0x17];
      lVar7 = 0;
      if (uVar5 != 0) {
        puVar6 = (uint *)((long)piVar3 + uVar5);
        lVar7 = (long)puVar6 + (ulong)*puVar6;
      }
    }
    lVar2 = (ulong)param_5 * 4;
    puVar6 = (uint *)(lVar7 + lVar2 + 4);
    piVar3 = (int *)((long)puVar6 + (ulong)*puVar6);
    if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
       (uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar5 == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = (uint)*(ushort *)((long)piVar3 + uVar5);
    }
    *param_2 = uVar4;
    piVar3 = (int *)FUN__text__00643738(param_3,param_4);
    if (*(ushort *)((long)piVar3 - (long)*piVar3) < 0x2f) {
      lVar7 = 0;
    }
    else {
      uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[0x17];
      lVar7 = 0;
      if (uVar5 != 0) {
        puVar6 = (uint *)((long)piVar3 + uVar5);
        lVar7 = (long)puVar6 + (ulong)*puVar6;
      }
    }
    puVar6 = (uint *)(lVar7 + lVar2 + 4);
    piVar3 = (int *)((long)puVar6 + (ulong)*puVar6);
    if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 7) ||
       (uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3], uVar5 == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = (uint)*(ushort *)((long)piVar3 + uVar5);
    }
    param_2[1] = uVar4;
    piVar3 = (int *)FUN__text__00643738(param_3,param_4);
    if (*(ushort *)((long)piVar3 - (long)*piVar3) < 0x2f) {
      lVar7 = 0;
    }
    else {
      uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[0x17];
      lVar7 = 0;
      if (uVar5 != 0) {
        puVar6 = (uint *)((long)piVar3 + uVar5);
        lVar7 = (long)puVar6 + (ulong)*puVar6;
      }
    }
    puVar6 = (uint *)(lVar7 + lVar2 + 4);
    piVar3 = (int *)((long)puVar6 + (ulong)*puVar6);
    if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 9) ||
       (uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[4], uVar5 == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = (uint)*(ushort *)((long)piVar3 + uVar5);
    }
    param_2[2] = uVar4;
  }
  return param_5 < uVar1;
}


