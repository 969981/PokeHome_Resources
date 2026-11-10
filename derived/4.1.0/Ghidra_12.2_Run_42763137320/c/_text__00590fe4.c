/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00590fe4; name: FUN_.text__00590fe4
 */


undefined8 FUN__text__00590fe4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_2c;
  undefined4 local_24;
  char local_4 [4];
  
  if ((*(byte *)(param_1 + 0x82) >> 2 & 1) != 0) {
LAB__text__00591020:
    uVar2 = FUN__text__00590e08(param_1);
    return uVar2;
  }
  if ((*(long *)(param_1 + 0x58) == 0) || (*(long *)(param_1 + 0x90) != 0)) {
    local_2c = 0;
    local_24 = 0;
    uVar2 = FUN__text__004dcb70(param_1,&local_2c,0);
    if (((int)uVar2 == 1) &&
       ((uVar2 = FUN__text__004dcd44(param_1,local_4), (int)uVar2 == 1 &&
        (uVar2 = (**(code **)(**(long **)(param_1 + 0x58) + 0x68))(), (int)uVar2 == 1)))) {
      if (local_4[0] == '\0') {
        uVar2 = FUN__text__005910f4(param_1);
        if ((int)uVar2 == 1) {
LAB__text__005910c8:
          uVar2 = FUN__text__00590e08(param_1);
          return uVar2;
        }
      }
      else {
        uVar2 = FUN__text__00591358(param_1);
        if ((int)uVar2 == 1) {
          iVar1 = FUN__text__00591494(param_1);
          if (iVar1 == 1) {
            *(byte *)(param_1 + 0x82) = *(byte *)(param_1 + 0x82) | 4;
            goto LAB__text__005910c8;
          }
          uVar2 = 2;
        }
      }
    }
  }
  else {
    uVar2 = FUN__text__005910f4(param_1);
    if ((int)uVar2 == 1) goto LAB__text__00591020;
  }
  return uVar2;
}


