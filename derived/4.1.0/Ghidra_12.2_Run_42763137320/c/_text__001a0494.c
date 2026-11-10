/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a0494; name: FUN_.text__001a0494
 */


void FUN__text__001a0494(long param_1)

{
  char cVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x1e8) == 0) {
    *(undefined4 *)(param_1 + 0x1e8) = 4;
    FUN__text__001a3fe0(*(undefined8 *)(param_1 + 0x28));
    lVar2 = *(long *)(param_1 + 0x68);
    cVar1 = *(char *)(lVar2 + 0x20);
  }
  else {
    FUN__text__001a3fe0(*(undefined8 *)(param_1 + 0x28));
    lVar2 = *(long *)(param_1 + 0x68);
    cVar1 = *(char *)(lVar2 + 0x20);
  }
  if (cVar1 != '\0') {
    FUN__text__001bd208(lVar2,0);
  }
  if (*(char *)(*(long *)(param_1 + 0x88) + 0x20) != '\0') {
    FUN__text__001bd208(*(long *)(param_1 + 0x88),0);
  }
  if (*(char *)(*(long *)(param_1 + 0xa8) + 0x20) != '\0') {
    FUN__text__001d102c(*(long *)(param_1 + 0xa8),0);
  }
  if (*(char *)(*(long *)(param_1 + 200) + 0x20) == '\0') {
    return;
  }
  FUN__text__001d102c(*(long *)(param_1 + 200),0);
  return;
}


