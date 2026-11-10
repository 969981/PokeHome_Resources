/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a7c00; name: FUN_.text__005a7c00
 */


void FUN__text__005a7c00(long *param_1,long param_2)

{
  *(undefined4 *)((long)param_1 + 0xac) = *(undefined4 *)(param_2 + 0xc);
  (**(code **)(*param_1 + 0x38))();
  *(undefined4 *)((long)param_1 + 0xac) = 0xffffffff;
  return;
}


