/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0058e230; name: FUN_.text__0058e230
 */


void FUN__text__0058e230(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0xb8) != 0) {
    if (0 < *(int *)(param_1 + 0x90)) {
      lVar2 = 0;
      lVar3 = 0;
      do {
        lVar1 = *(long *)(param_1 + 0xb8);
        if (*(long *)(lVar1 + lVar2) != 0) {
          FUN__text__00400fc0(5);
          lVar1 = *(long *)(param_1 + 0xb8);
        }
        if (*(long *)(lVar1 + lVar2 + 0x10) != 0) {
          FUN__text__00400fc0(5);
        }
        lVar3 = lVar3 + 1;
        lVar2 = lVar2 + 0x20;
      } while (lVar3 < *(int *)(param_1 + 0x90));
      if (*(long *)(param_1 + 0xb8) == 0) goto LAB__text__0058e2c4;
    }
    FUN__text__00400fc0(5);
  }
LAB__text__0058e2c4:
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN__text__00400fc0(5);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(long *)(param_1 + 0x50) = 0;
  }
  return;
}


