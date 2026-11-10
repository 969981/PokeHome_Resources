/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003808b0; name: FUN_.text__003808b0
 */


uint FUN__text__003808b0(long *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  ulong uVar2;
  size_t __n;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  size_t sVar8;
  ulong uVar9;
  long lVar10;
  void *__dest;
  long lVar11;
  size_t sVar12;
  uint uVar13;
  uint local_88 [10];
  
  uVar2 = (param_1[1] - param_1[9]) + param_4;
  uVar7 = uVar2 + param_3 >> 2;
  if ((uVar2 + param_3 & 3) != 0) {
    uVar7 = uVar7 + 1;
  }
  if (param_3 < 1) {
    uVar13 = 1;
  }
  else {
    lVar10 = 0;
    uVar9 = uVar2 >> 2;
    plVar1 = param_1 + 6;
    uVar13 = 1;
    do {
      uVar5 = (ulong)(uint)((int)lVar10 + (int)uVar2);
      __dest = (void *)((ulong)local_88 | uVar5 & 3);
      sVar12 = param_3 - lVar10;
      sVar8 = 0x28 - (uVar5 & 3);
      local_88[6] = 0;
      local_88[7] = 0;
      local_88[8] = 0;
      local_88[9] = 0;
      __n = sVar12;
      if ((long)sVar8 <= (long)sVar12) {
        __n = sVar8;
      }
      local_88[2] = 0;
      local_88[3] = 0;
      local_88[4] = 0;
      local_88[5] = 0;
      local_88[0] = 0;
      local_88[1] = 0;
      memcpy(__dest,(void *)(param_2 + lVar10),__n);
      lVar11 = 0;
      do {
        lVar6 = param_1[7];
        if ((long)uVar9 < lVar6) {
          (**(code **)param_1[6])(plVar1);
          lVar6 = 0;
          param_1[7] = 0;
        }
        while (lVar6 < (long)uVar9) {
          (**(code **)(param_1[6] + 0x10))(plVar1);
          lVar6 = param_1[7] + 1;
          param_1[7] = lVar6;
        }
        uVar9 = uVar9 + 1;
        uVar3 = (**(code **)(*plVar1 + 8))(plVar1);
        local_88[lVar11] = local_88[lVar11] ^ uVar3;
      } while ((uVar9 < uVar7) && (lVar11 = lVar11 + 1, lVar11 != 10));
      plVar4 = (long *)(**(code **)(*param_1 + 0x20))(param_1);
      uVar3 = 0;
      if ((0 < (long)sVar12) && (lVar11 = lVar10 + param_4 + param_1[1], -1 < lVar11)) {
        uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,__n,lVar11);
        if ((uVar5 & 1) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = (**(code **)(*plVar4 + 0x30))(plVar4,__dest,__n,lVar11);
        }
      }
      lVar10 = __n + lVar10;
      uVar13 = uVar3 & uVar13;
    } while (lVar10 < param_3);
  }
  return uVar13;
}


