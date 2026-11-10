/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00562418; name: FUN_.text__00562418
 */


undefined8 FUN__text__00562418(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x118) != '\0') {
    uVar1 = FUN__text__005557f0(param_1 + 0x18,*(undefined8 *)(param_1 + 0x10),
                                *(undefined1 *)(param_1 + 0x1a0),*(undefined4 *)(param_1 + 0x1a8),
                                *(undefined4 *)(param_1 + 0x144),param_2);
    if ((int)uVar1 != 1) {
      return uVar1;
    }
    if ((*(int *)(param_1 + 0x100) != 0) && (*(char *)(param_1 + 0x1a0) != '\0')) {
      uVar1 = FUN__text__0055d3a4(param_1 + 0xb8,*(undefined8 *)(param_1 + 0x10),
                                  *(char *)(param_1 + 0x1a0),1);
      if ((int)uVar1 != 1) {
        return uVar1;
      }
      uVar2 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x1a8));
      FUN__text__0055d850(uVar2,*(undefined4 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x104),
                          *(undefined4 *)(param_1 + 0x10c),param_1 + 200,
                          *(int *)(param_1 + 0x100) + -1);
    }
  }
  if (*(char *)(param_1 + 0x134) != '\0') {
    uVar1 = FUN__text__005557f0(param_1 + 0x68,*(undefined8 *)(param_1 + 0x10),
                                *(undefined1 *)(param_1 + 0x1a0),*(undefined4 *)(param_1 + 0x1a8),
                                *(undefined4 *)(param_1 + 0x144),param_2);
    if ((int)uVar1 != 1) {
      return uVar1;
    }
    if ((*(int *)(param_1 + 0x11c) != 0) && (*(char *)(param_1 + 0x1a0) != '\0')) {
      uVar1 = FUN__text__0055d3a4(param_1 + 0xd8,*(undefined8 *)(param_1 + 0x10),
                                  *(char *)(param_1 + 0x1a0),1);
      if ((int)uVar1 != 1) {
        return uVar1;
      }
      uVar2 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x1a8));
      FUN__text__0055d850(uVar2,*(undefined4 *)(param_1 + 0x124),*(undefined4 *)(param_1 + 0x120),
                          *(undefined4 *)(param_1 + 0x128),param_1 + 0xe8,
                          *(int *)(param_1 + 0x11c) + -1);
    }
  }
  return 1;
}


