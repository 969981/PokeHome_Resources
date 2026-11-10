/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00191328; name: FUN_.text__00191328
 */


void FUN__text__00191328(undefined1 *param_1,undefined1 *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = *param_2;
  iVar1 = *(int *)(param_2 + 0xc);
  iVar2 = *(int *)(param_2 + 0x10);
  iVar3 = *(int *)(param_2 + 8);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(int *)(param_1 + 8) = iVar1 + iVar2 * 6 + iVar3 * 0x1e;
  *(undefined8 *)(param_1 + 0xc) = *param_3;
  return;
}


