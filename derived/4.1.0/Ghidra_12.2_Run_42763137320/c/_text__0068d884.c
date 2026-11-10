/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068d884; name: FUN_.text__0068d884
 */


void FUN__text__0068d884(long param_1)

{
  long lVar1;
  
  FUN__text__006901b0(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x34),
                      *(undefined4 *)(param_1 + 0x18),*(undefined2 *)(param_1 + 0x32),0xffffffff,
                      *(undefined1 *)(param_1 + 0x30));
  lVar1 = FUN__text__0069128c(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x34),
                              *(undefined4 *)(param_1 + 0x18),*(undefined2 *)(param_1 + 0x32));
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) | 0x20;
  if (*(char *)(param_1 + 0x2f) == '\x01') {
    FUN__text__006901b0(*(undefined8 *)(param_1 + 0x10),0x20,*(undefined4 *)(param_1 + 0x18),
                        *(undefined2 *)(param_1 + 0x32),0xffffffff,*(undefined1 *)(param_1 + 0x30));
    lVar1 = FUN__text__0069128c(*(undefined8 *)(param_1 + 0x10),0x20,*(undefined4 *)(param_1 + 0x18)
                                ,*(undefined2 *)(param_1 + 0x32));
    if (lVar1 != 0) {
      lVar1 = FUN__text__0069128c(*(undefined8 *)(param_1 + 0x10),0x20,
                                  *(undefined4 *)(param_1 + 0x18),*(undefined2 *)(param_1 + 0x32));
      *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) | 0x20;
    }
  }
  return;
}


