/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00683578; name: FUN_.text__00683578
 */


undefined8 FUN__text__00683578(long param_1)

{
  undefined8 uVar1;
  long local_8;
  
  if (**(long **)(param_1 + 8) == 0) {
    if (*(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x28)) {
      uVar1 = 0xfffffe0a;
    }
    else {
      local_8 = 0;
      uVar1 = FUN__text__0068335c(&local_8,*(undefined8 *)(param_1 + 0x18),
                                  *(undefined8 *)(param_1 + 0x10));
      if ((int)uVar1 == 0) {
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
        **(long **)(param_1 + 8) = local_8;
        *(long *)(param_1 + 8) = local_8;
        *(long *)(local_8 + 0x18) = *(long *)(local_8 + 0x18) + *(long *)(param_1 + 0x38);
        *(long *)(*(long *)(param_1 + 8) + 0x20) =
             *(long *)(*(long *)(param_1 + 8) + 0x20) + *(long *)(param_1 + 0x38);
      }
    }
  }
  else {
    uVar1 = 0;
    *(long *)(param_1 + 8) = **(long **)(param_1 + 8);
  }
  return uVar1;
}


