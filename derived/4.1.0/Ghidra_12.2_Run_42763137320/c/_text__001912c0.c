/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001912c0; name: FUN_.text__001912c0
 */


void FUN__text__001912c0(undefined1 *param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  
  *param_2 = *param_1;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 4);
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = uVar1 % 0x1e;
  *(uint *)(param_2 + 0x10) = uVar2 / 6;
  *(ulong *)(param_2 + 8) = CONCAT44(uVar2 % 6,uVar1 / 0x1e);
  return;
}


