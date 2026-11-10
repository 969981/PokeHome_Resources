/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064c27c; name: FUN_.text__0064c27c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0064c27c(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  param_1[7] = 0;
  lVar2 = _DAT_0089f690;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar1 = tpidr_el0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = lVar2 + 0x10;
  lVar2 = 0;
  if (uVar1 != 0) {
    if (*(long *)(uVar1 + 0x98) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    }
  }
  param_1[0x12] = 0;
  *_DAT_008a6540 = 1;
  param_1[0x194] = 0;
  param_1[0x195] = 0;
  param_1[0x196] = 0;
  param_1[0x197] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *param_1 = 0x899a78;
  param_1[1] = lVar2;
  param_1[9] = 0x899aa8;
  param_1[10] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x198),false,0);
  param_1[0x19c] = 0;
  *(undefined4 *)(param_1 + 0x19d) = 0x8000;
  memset(param_1 + 0x13,0,0xc08);
  return;
}


