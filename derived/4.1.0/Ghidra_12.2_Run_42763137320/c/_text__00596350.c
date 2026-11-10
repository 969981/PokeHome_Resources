/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00596350; name: FUN_.text__00596350
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__00596350(byte *param_1,ulong param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  
  uVar7 = 0;
  uVar8 = 0x8000;
  uVar10 = 1;
  uVar12 = 1;
  do {
    uVar12 = uVar12 | uVar8;
    uVar2 = uVar7 & uVar12 & 0xffff;
    bVar5 = uVar8 != uVar2;
    uVar8 = uVar8 >> 1;
    if (uVar10 != uVar2 && bVar5) {
      uVar12 = 0;
    }
    uVar7 = uVar12 ^ uVar7;
    uVar12 = uVar10 << 1;
    uVar10 = uVar12 & 0xfffe;
  } while (uVar10 < uVar8);
  if (((*_DAT_008a5498 & 1) == 0) && (iVar6 = __cxa_guard_acquire(_DAT_008a5498), iVar6 != 0)) {
    if (((*_DAT_008a54a8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(_DAT_008a54a8), iVar6 != 0)) {
      FUN__text__00596800(_DAT_008a54b0,0x10,0x8005,1);
      __cxa_guard_release(_DAT_008a54a8);
    }
    *_DAT_008a54a0 = _DAT_008a54b0;
    __cxa_guard_release(_DAT_008a5498);
  }
  if (param_2 != 0) {
    lVar9 = *_DAT_008a54a0;
    uVar11 = param_2;
    if ((param_2 & 1) != 0) {
      uVar7 = (uint)*(ushort *)(lVar9 + ((ulong)(*param_1 ^ uVar7) & 0xff) * 2) ^
              (uVar7 & 0xff00) >> 8;
      param_1 = param_1 + 1;
      uVar11 = param_2 - 1;
    }
    if (param_2 != 1) {
      do {
        bVar3 = *param_1;
        uVar11 = uVar11 - 2;
        pbVar1 = param_1 + 1;
        param_1 = param_1 + 2;
        uVar4 = *(ushort *)(lVar9 + ((ulong)(bVar3 ^ uVar7) & 0xff) * 2);
        uVar7 = (uint)(ushort)(*(ushort *)
                                (lVar9 + ((ulong)((uint)*pbVar1 ^ (uint)uVar4 ^ uVar7 >> 8) & 0xff)
                                         * 2) ^ uVar4 >> 8);
      } while (uVar11 != 0);
    }
  }
  return uVar7;
}


