/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0029de48; name: FUN_.text__0029de48
 */


void FUN__text__0029de48(long param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0xb0);
  *(byte *)(param_2 + 1) = *(byte *)(param_1 + 0xb8) ^ 1;
  *(undefined1 *)((long)param_2 + 5) = *(undefined1 *)(param_1 + 0xbc);
  FUN__text__005f3460((long)param_2 + 6,param_1 + 0x94,0xd);
  return;
}


