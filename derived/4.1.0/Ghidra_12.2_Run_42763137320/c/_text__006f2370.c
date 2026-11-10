/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f2370; name: FUN_.text__006f2370
 */


uint FUN__text__006f2370(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(param_1 >> 1);
  uVar2 = (uint)param_1;
  return uVar2 & 0x20 | uVar2 >> 3 & 2 | uVar1 & 4 |
         uVar2 & 1 | (uVar1 & 1) << 3 | (uVar2 >> 2 & 1) << 4;
}


