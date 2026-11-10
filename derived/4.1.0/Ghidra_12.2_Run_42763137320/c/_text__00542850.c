/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00542850; name: FUN_.text__00542850
 */


undefined8 FUN__text__00542850(long param_1)

{
  undefined8 *puVar1;
  undefined8 *__s;
  
  for (puVar1 = *(undefined8 **)(param_1 + 0x18); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)puVar1[0x1c4]) {
    if (puVar1[0x1c6] != 0) goto LAB__text__005428d0;
  }
  puVar1 = (undefined8 *)FUN__text__00400f90(10,0xe38,0x10);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0x1c4] = 0;
    puVar1[0xe2] = puVar1 + 0x71;
    *puVar1 = 0;
    puVar1[0x1c6] = puVar1 + 0x153;
    puVar1[0x71] = puVar1;
    puVar1[0x153] = puVar1 + 0xe2;
    *(undefined4 *)(puVar1 + 0x1c5) = 4;
    if (*(long *)(param_1 + 0x18) == 0) {
      *(undefined8 **)(param_1 + 0x18) = puVar1;
      puVar1[0x1c4] = 0;
      __s = (undefined8 *)puVar1[0x1c6];
    }
    else {
      puVar1[0x1c4] = *(long *)(param_1 + 0x18);
      *(undefined8 **)(param_1 + 0x18) = puVar1;
LAB__text__005428d0:
      __s = (undefined8 *)puVar1[0x1c6];
    }
    if (__s != (undefined8 *)0x0) {
      puVar1[0x1c6] = *__s;
      *__s = 0;
      *(int *)(puVar1 + 0x1c5) = *(int *)(puVar1 + 0x1c5) + -1;
      memset(__s,0,0x300);
      *(undefined4 *)(__s + 0x70) = 0;
      *(undefined8 **)(param_1 + 0x10) = __s;
      *(undefined4 *)((long)__s + 900) = 0;
      return 1;
    }
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    FUN__text__00400fc0(10);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN__text__0050cda0(param_1 + 8);
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
  }
  return 0x34;
}


