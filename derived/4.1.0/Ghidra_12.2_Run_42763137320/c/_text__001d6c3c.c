/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d6c3c; name: FUN_.text__001d6c3c
 */


uint FUN__text__001d6c3c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 local_28;
  undefined8 local_8;
  
  local_8 = 0x6951884aa529101d;
  if (*(long *)(param_1 + 0x2d0) != 0) {
    uVar2 = FUN__text__003c7ec0(*(long *)(param_1 + 0x2d0),&local_8);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    local_28 = 0x2d5743d6ac63d786;
    if (*(long *)(param_1 + 0x2d0) != 0) {
      uVar1 = FUN__text__003c7ec0(*(long *)(param_1 + 0x2d0),&local_28);
      return uVar1 & 1;
    }
  }
  return 1;
}


