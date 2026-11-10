/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c3f68; name: FUN_.text__001c3f68
 */


void FUN__text__001c3f68(long param_1,uint param_2)

{
  FUN__text__00128ec0(param_1,0);
  if (((param_2 & 1) == 0) ||
     ((**(char **)(*(long *)(param_1 + 0x640) + 0xc0) == '\0' &&
      (FUN__text__001c7b30(*(undefined8 *)(param_1 + 0x6d8)),
      **(char **)(*(long *)(param_1 + 0x640) + 0xc0) == '\0')))) {
    FUN__text__00128ca0(param_1,param_2 & 1,1);
  }
  FUN__text__0019eba4(*(undefined8 *)(param_1 + 0x6f8));
  if (*(uint *)(param_1 + 0x650) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x001c3fe0 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__001c3fec +
              (ulong)*(byte *)((ulong)*(uint *)(param_1 + 0x650) + 0x725e58) * 4))();
    return;
  }
  *(undefined4 *)(param_1 + 0x650) = 0;
  *(undefined4 *)(param_1 + 0x64c) = 0;
  *(undefined4 *)(*(long *)(param_1 + 0x698) + 0x4c0) = 0;
  FUN__text__001c340c(param_1);
  return;
}


