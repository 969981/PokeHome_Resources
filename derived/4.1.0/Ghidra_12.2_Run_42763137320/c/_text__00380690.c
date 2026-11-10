/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00380690; name: FUN_.text__00380690
 */


uint FUN__text__00380690(long *param_1,long param_2,long param_3,long param_4)

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
  long lVar9;
  uint uVar10;
  void *__src;
  ulong uVar11;
  long lVar12;
  size_t sVar13;
  uint local_94;
  uint local_88 [10];
  
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[6] = 0;
  local_88[7] = 0;
  local_88[8] = 0;
  local_88[9] = 0;
  uVar2 = (param_1[1] - param_1[9]) + param_4;
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[4] = 0;
  local_88[5] = 0;
  uVar7 = uVar2 + param_3 >> 2;
  if ((uVar2 + param_3 & 3) != 0) {
    uVar7 = uVar7 + 1;
  }
  if (param_3 < 1) {
    uVar10 = 1;
  }
  else {
    lVar9 = 0;
    uVar11 = uVar2 >> 2;
    plVar1 = param_1 + 6;
    uVar10 = 1;
    do {
      uVar5 = (ulong)(uint)((int)lVar9 + (int)uVar2);
      __src = (void *)((ulong)local_88 | uVar5 & 3);
      sVar8 = 0x28 - (uVar5 & 3);
      sVar13 = param_3 - lVar9;
      __n = sVar13;
      if ((long)sVar8 <= (long)sVar13) {
        __n = sVar8;
      }
      plVar4 = (long *)(**(code **)(*param_1 + 0x28))(param_1);
      local_94 = 0;
      if ((0 < (long)sVar13) && (lVar12 = lVar9 + param_4 + param_1[1], -1 < lVar12)) {
        uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,__n,lVar12);
        if ((uVar5 & 1) == 0) {
          local_94 = 0;
        }
        else {
          local_94 = (**(code **)(*plVar4 + 0x28))(plVar4,__src,__n,lVar12);
        }
      }
      lVar12 = 0;
      do {
        lVar6 = param_1[7];
        if ((long)uVar11 < lVar6) {
          (**(code **)param_1[6])(plVar1);
          lVar6 = 0;
          param_1[7] = 0;
        }
        while (lVar6 < (long)uVar11) {
          (**(code **)(param_1[6] + 0x10))(plVar1);
          lVar6 = param_1[7] + 1;
          param_1[7] = lVar6;
        }
        uVar11 = uVar11 + 1;
        uVar3 = (**(code **)(*plVar1 + 8))(plVar1);
        local_88[lVar12] = local_88[lVar12] ^ uVar3;
      } while ((uVar11 < uVar7) && (lVar12 = lVar12 + 1, lVar12 != 10));
      uVar10 = local_94 & uVar10;
      memcpy((void *)(param_2 + lVar9),__src,__n);
      lVar9 = __n + lVar9;
    } while (lVar9 < param_3);
  }
  return uVar10;
}


