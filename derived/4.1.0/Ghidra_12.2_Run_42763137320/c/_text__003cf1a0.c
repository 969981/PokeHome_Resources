/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003cf1a0; name: FUN_.text__003cf1a0
 */


void FUN__text__003cf1a0(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x20060) != '\0') {
    *(undefined1 *)(param_1 + 0x20060) = 0;
    do {
      uVar1 = FUN__text__003d444c(*(undefined8 *)(param_1 + 0x20048));
    } while ((uVar1 & 1) == 0);
  }
  if (*(long *)(param_1 + 0x20048) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x20048) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x20048) = 0;
  }
  lVar2 = *(long *)(param_1 + 0x20028);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    *(long *)(param_1 + 0x20028) = 0;
  }
  return;
}


