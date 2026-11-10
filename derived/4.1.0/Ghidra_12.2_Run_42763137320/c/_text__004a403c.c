/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a403c; name: FUN_.text__004a403c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__004a403c(long param_1,uint *param_2,undefined1 *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  int local_3c;
  int local_38;
  int local_34;
  
  param_1 = param_1 + 8;
  *param_3 = 0;
  iVar5 = FUN__text__004aecec(param_1,&local_38,8);
  if (iVar5 != 1) {
    return 7;
  }
  if (local_38 != 0x44484b42) {
    return 7;
  }
  uVar7 = FUN__text__004aecec(param_1,param_2,0x14);
  if ((int)uVar7 != 1) {
    return uVar7;
  }
  puVar1 = param_2 + 5;
  uVar8 = *param_2;
  uVar6 = *_DAT_008a46e0;
  uVar3 = _DAT_008a46e0[1];
  uVar2 = _DAT_008a46e0[2];
  uVar4 = _DAT_008a46e0[3];
  *param_2 = uVar8 ^ uVar6;
  param_2[1] = param_2[1] ^ uVar3;
  param_2[2] = param_2[2] ^ uVar2;
  *(ushort *)(param_2 + 3) = (ushort)param_2[3] ^ (ushort)uVar4;
  *(ushort *)((long)param_2 + 0xe) = *(ushort *)((long)param_2 + 0xe) ^ (ushort)(uVar4 >> 0x10);
  if ((uVar8 ^ uVar6) < 0x8f) {
    uVar7 = 1;
    iVar5 = -0x14;
    param_2[9] = 0;
    puVar1[0] = 0;
    puVar1[1] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
  }
  else {
    uVar7 = FUN__text__004aecec(param_1,puVar1,4);
    if ((int)uVar7 != 1) {
      return uVar7;
    }
    if (0x1f < *puVar1) {
      return 100;
    }
    if ((1 << (ulong)(*puVar1 & 0x1f) & 0xc0000001U) == 0) {
      return 100;
    }
    uVar7 = FUN__text__004aecec(param_1,param_2 + 6,0x10);
    iVar5 = -0x28;
  }
  if (((int)uVar7 == 1) && (iVar5 = local_34 + iVar5, iVar5 != 0)) {
    local_3c = 0;
    uVar6 = FUN__text__004ae7a0(param_1,iVar5,&local_3c);
    uVar8 = 0x38;
    if (local_3c == iVar5) {
      uVar8 = 1;
    }
    if (uVar6 != 1) {
      uVar8 = uVar6;
    }
    uVar7 = (ulong)uVar8;
  }
  if ((int)uVar7 != 1) {
    return uVar7;
  }
  uVar8 = *param_2;
  if (uVar8 < 0x91) {
    if (0x75 < uVar8) {
      *param_3 = 1;
      return 1;
    }
  }
  else if (uVar8 == 0x91) {
    return 1;
  }
  if (((DAT_00aea960 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_00aea960), iVar5 != 0)) {
    __cxa_guard_release(&DAT_00aea960);
    return 0x40;
  }
  return 0x40;
}


