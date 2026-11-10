/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001665d0; name: FUN_.text__001665d0
 */


undefined2 FUN__text__001665d0(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (7 < param_2) {
    return 0;
  }
  uVar4 = 0x49;
  if (param_2 != 5) {
    uVar4 = 0x1cb;
  }
  uVar2 = param_1 + 0x5400 >> 2 & 0x3fff;
  uVar3 = 0;
  if ((param_1 - 0x30 & 0xffff) < 10) {
    uVar3 = uVar4 >> (ulong)((param_1 & 0xffff) - 0x30 & 0x1f) & 1;
  }
  uVar1 = param_1 + 0x5400 + (uVar2 / 7) * -0x1c;
  uVar4 = uVar1 & 0x17;
  if (param_2 != 5) {
    uVar4 = uVar1 & 0xffff;
  }
  if (uVar2 < 0xae9) {
    uVar3 = (uint)(uVar4 != 0);
  }
  return *(undefined2 *)((ulong)uVar3 * 0x10 + 0x724f90 + (ulong)param_2 * 2);
}


