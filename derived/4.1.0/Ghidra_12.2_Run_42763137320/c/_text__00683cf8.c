/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00683cf8; name: FUN_.text__00683cf8
 */


void FUN__text__00683cf8(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN__text__006799cc(param_2);
  *param_1 = uVar2 >> 8 & 0xffffff;
  *(undefined1 *)((long)param_1 + 0xc) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0xd) = *(undefined1 *)(param_2 + 4);
  uVar1 = FUN__text__006799cc(param_2 + 5);
  *(undefined1 *)((long)param_1 + 0xe) = 0;
  *(uint *)(param_1 + 1) = uVar1 & 0x7fffffff;
  return;
}


