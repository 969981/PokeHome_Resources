/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048d920; name: FUN_.text__0048d920
 */


void FUN__text__0048d920(undefined8 param_1,long param_2,uint param_3)

{
  ulong uVar1;
  
  if (param_3 != 0) {
    uVar1 = (ulong)param_3;
    do {
      FUN__text__0048d700(param_1,*(undefined4 *)(param_2 + 0x14),param_2);
      param_2 = param_2 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}


