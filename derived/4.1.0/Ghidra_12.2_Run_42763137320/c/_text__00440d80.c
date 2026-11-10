/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00440d80; name: FUN_.text__00440d80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00440d80(long *param_1)

{
  ulong uVar1;
  
  *param_1 = _DAT_008a4968 + 0x10;
  FUN__text__004323e0(param_1 + 9);
  if (0 < (int)*(uint *)(param_1 + 0xf)) {
    uVar1 = (ulong)*(uint *)(param_1 + 0xf) + 1;
    do {
      FUN__text__00440eb0(param_1[0xe] + (ulong)((int)uVar1 - 2) * 0x28);
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  if (param_1[0xe] != 0) {
    *(undefined4 *)(param_1 + 0xf) = 0;
    FUN__text__00400fc0(0);
    param_1[0xe] = 0;
    *(undefined4 *)((long)param_1 + 0x7c) = 0;
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  if (param_1[0x11] != 0) {
    FUN__text__00400fc0(0);
  }
  param_1[0x11] = 0;
  if (param_1[0x10] != 0) {
    FUN__text__00400fc0(0);
  }
  param_1[0x10] = 0;
  FUN__text__00432310(param_1 + 9);
  if (param_1[6] != 0) {
    *(undefined4 *)(param_1 + 7) = 0;
    FUN__text__00400fc0(0);
    param_1[6] = 0;
    *(undefined4 *)((long)param_1 + 0x3c) = 0;
  }
  if (param_1[3] != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    FUN__text__00400fc0(0);
    param_1[3] = 0;
    *(undefined4 *)((long)param_1 + 0x24) = 0;
  }
  FUN__text__0042ce74(param_1);
  return;
}


