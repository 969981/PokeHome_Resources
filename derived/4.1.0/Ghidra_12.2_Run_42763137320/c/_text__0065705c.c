/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065705c; name: FUN_.text__0065705c
 */


undefined8 FUN__text__0065705c(long param_1,char *param_2,size_t param_3)

{
  void *__dest;
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0x2b;
  }
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(long *)(param_1 + 0x40) = param_1;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (param_2 == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    if (param_3 == 0xffffffffffffffff) {
      param_3 = strlen(param_2);
    }
    __dest = (void *)FUN__text__006783d4(param_3 + 1);
    *(void **)(param_1 + 0x20) = __dest;
    if (__dest == (void *)0x0) {
      uVar1 = 0x1b;
    }
    else {
      *(size_t *)(param_1 + 0x78) = param_3;
      if (param_3 != 0) {
        memcpy(__dest,param_2,param_3);
        __dest = *(void **)(param_1 + 0x20);
      }
      *(undefined1 *)((long)__dest + param_3) = 0;
      *(code **)(param_1 + 0x28) = FUN__text__006575f0;
      *(undefined1 **)(param_1 + 0x30) = &LAB__text__00657644;
      uVar1 = 0;
      *(code **)(param_1 + 0x38) = FUN__text__00657690;
      *(undefined4 *)(param_1 + 0x18) = 1;
    }
  }
  return uVar1;
}


