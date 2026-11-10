/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045beb0; name: FUN_.text__0045beb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0045beb0(long *param_1)

{
  ulong uVar1;
  long local_28;
  
  *param_1 = _DAT_008a4948 + 0x10;
  if (param_1[0x2b] != 0) {
    FUN__text__004d46c0(param_1[0x2b],param_1);
  }
  uVar1 = (ulong)*(uint *)(param_1 + 0x29);
  if (*(uint *)(param_1 + 0x29) != 0) {
    do {
      uVar1 = uVar1 - 1;
      local_28 = param_1[0x28] + (uVar1 & 0xffffffff) * 0x118;
      FUN__text__0045c7b0(param_1 + 5,&local_28);
    } while ((uVar1 & 0xffffffff) != 0);
  }
  FUN__text__0045bf40(param_1 + 5);
  return;
}


