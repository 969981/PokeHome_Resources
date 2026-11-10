/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00683cb4; name: FUN_.text__00683cb4
 */


void FUN__text__00683cb4(long param_1,int *param_2)

{
  FUN__text__0067999c(param_1,*param_2 << 8);
  *(char *)(param_1 + 3) = (char)param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)((long)param_2 + 0xd);
  FUN__text__0067999c(param_1 + 5,param_2[2]);
  return;
}


