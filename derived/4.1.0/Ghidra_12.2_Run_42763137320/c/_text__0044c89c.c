/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044c89c; name: FUN_.text__0044c89c
 */


void FUN__text__0044c89c(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(long *)(param_1 + 0x40) != param_1 + 0x20) {
      FUN__text__00400fc0(4);
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (*(long *)(param_1 + 0x60) != param_1 + 0x50) {
      FUN__text__00400fc0(4);
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    if (*(long *)(param_1 + 0x90) != param_1 + 0x70) {
      FUN__text__00400fc0(4);
    }
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
    if (*(long *)(param_1 + 0xb0) != param_1 + 0xa0) {
      FUN__text__00400fc0(4);
    }
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    *(undefined4 *)(param_1 + 0xd8) = 0;
    if (*(long *)(param_1 + 0xd0) != param_1 + 0xc0) {
      FUN__text__00400fc0(4);
    }
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  *(bool *)(param_1 + 0xe1) = DAT_00aea688 == param_1;
  return;
}


