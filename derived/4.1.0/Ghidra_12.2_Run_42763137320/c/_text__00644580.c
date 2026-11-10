/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00644580; name: FUN_.text__00644580
 */


bool FUN__text__00644580(undefined8 param_1,uint *param_2,undefined4 param_3,undefined4 param_4,
                        uint param_5)

{
  uint uVar1;
  ushort uVar2;
  int *piVar3;
  ulong uVar4;
  uint *puVar5;
  uint uVar6;
  ushort *puVar7;
  
  piVar3 = (int *)FUN__text__00644e78(param_3,param_4);
  if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 0x2f) ||
     (uVar4 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[0x17], uVar4 == 0)) {
    puVar5 = (uint *)0x0;
    uVar1 = uRam0000000000000000;
  }
  else {
    puVar5 = (uint *)((long)piVar3 + uVar4);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    uVar1 = *puVar5;
  }
  if (uVar1 <= param_5) {
    return param_5 < uVar1;
  }
  piVar3 = (int *)((long)(puVar5 + (ulong)param_5 + 1) + (ulong)puVar5[(ulong)param_5 + 1]);
  if (*(ushort *)((long)piVar3 - (long)*piVar3) < 7) {
    *param_2 = 0;
    puVar7 = (ushort *)((long)piVar3 - (long)*piVar3);
    uVar2 = *puVar7;
  }
  else {
    uVar4 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3];
    uVar6 = 0;
    if (uVar4 != 0) {
      uVar6 = (uint)*(ushort *)((long)piVar3 + uVar4);
    }
    *param_2 = uVar6;
    puVar7 = (ushort *)((long)piVar3 - (long)*piVar3);
    uVar2 = *puVar7;
  }
  if (uVar2 < 5) {
    param_2[1] = 0;
    puVar7 = (ushort *)((long)piVar3 - (long)*piVar3);
    uVar2 = *puVar7;
  }
  else {
    uVar6 = 0;
    if ((ulong)puVar7[2] != 0) {
      uVar6 = (uint)*(ushort *)((long)piVar3 + (ulong)puVar7[2]);
    }
    param_2[1] = uVar6;
    puVar7 = (ushort *)((long)piVar3 - (long)*piVar3);
    uVar2 = *puVar7;
  }
  if ((uVar2 < 9) || ((ulong)puVar7[4] == 0)) {
    param_2[2] = 0;
    return param_5 < uVar1;
  }
  param_2[2] = (uint)*(ushort *)((long)piVar3 + (ulong)puVar7[4]);
  return param_5 < uVar1;
}


