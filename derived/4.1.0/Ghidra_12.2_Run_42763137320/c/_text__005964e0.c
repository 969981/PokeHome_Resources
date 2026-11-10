/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005964e0; name: FUN_.text__005964e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__005964e0(byte *param_1,ulong param_2)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  
  uVar6 = 0x80000000;
  uVar9 = 1;
  uVar8 = 0xffffffff;
  do {
    uVar2 = uVar6 | uVar9;
    bVar3 = (uVar2 & uVar8) != uVar9;
    uVar9 = uVar9 * 2;
    bVar4 = (uVar2 & uVar8) != uVar6;
    uVar6 = uVar6 >> 1;
    if (bVar3 && bVar4) {
      uVar2 = 0;
    }
    uVar8 = uVar2 ^ uVar8;
  } while (uVar9 < uVar6);
  if (((*_DAT_008a54b8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(_DAT_008a54b8), iVar5 != 0)) {
    if (((*_DAT_008a54c8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(_DAT_008a54c8), iVar5 != 0)) {
      FUN__text__00596cf0(_DAT_008a54d0,0x20,0x4c11db7,1);
      __cxa_guard_release(_DAT_008a54c8);
    }
    *_DAT_008a54c0 = _DAT_008a54d0;
    __cxa_guard_release(_DAT_008a54b8);
  }
  if (param_2 != 0) {
    lVar7 = *_DAT_008a54c0;
    uVar10 = param_2;
    if ((param_2 & 1) != 0) {
      uVar8 = *(uint *)(lVar7 + ((ulong)(*param_1 ^ uVar8) & 0xff) * 4) ^ uVar8 >> 8;
      param_1 = param_1 + 1;
      uVar10 = param_2 - 1;
    }
    if (param_2 != 1) {
      do {
        uVar10 = uVar10 - 2;
        uVar8 = *(uint *)(lVar7 + ((ulong)(*param_1 ^ uVar8) & 0xff) * 4) ^ uVar8 >> 8;
        pbVar1 = param_1 + 1;
        param_1 = param_1 + 2;
        uVar8 = *(uint *)(lVar7 + ((ulong)(*pbVar1 ^ uVar8) & 0xff) * 4) ^ uVar8 >> 8;
      } while (uVar10 != 0);
    }
  }
  return ~uVar8;
}


