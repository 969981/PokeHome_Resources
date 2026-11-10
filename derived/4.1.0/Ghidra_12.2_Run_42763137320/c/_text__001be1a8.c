/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001be1a8; name: FUN_.text__001be1a8
 */


void FUN__text__001be1a8(long param_1)

{
  undefined1 auStack_44 [20];
  ulong local_30;
  undefined8 uStack_28;
  
  local_30 = *(ulong *)(*(long *)(param_1 + 0x38) + 0x1c4);
  uStack_28 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x1cc);
  if (*(int *)(param_1 + 0x30) == (int)local_30 && local_30 >> 0x20 == 0) {
    FUN__text__00191328(auStack_44,param_1 + 0x5a58,&uStack_28);
    FUN__text__001be228(param_1,auStack_44);
  }
  FUN__text__001bc4a0(param_1,0,0,0);
  return;
}


