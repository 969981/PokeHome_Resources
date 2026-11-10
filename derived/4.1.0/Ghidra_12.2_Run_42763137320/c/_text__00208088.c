/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00208088; name: FUN_.text__00208088
 */


uint FUN__text__00208088(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 local_8;
  
  local_8 = 0xd5a646e9eb5de80c;
  if (*(long *)(param_1 + 0x2d0) != 0) {
    uVar2 = FUN__text__003c7ec0(*(long *)(param_1 + 0x2d0),&local_8);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    local_8 = 0x31b5f77ad1a1d139;
    if (*(long *)(param_1 + 0x2d0) != 0) {
      uVar1 = FUN__text__003c7ec0(*(long *)(param_1 + 0x2d0),&local_8);
      return uVar1 & 1;
    }
  }
  return 1;
}


