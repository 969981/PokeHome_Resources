/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00446a1c; name: FUN_.text__00446a1c
 */


undefined8 FUN__text__00446a1c(long *param_1,long param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  byte local_14 [4];
  
  cVar1 = *(char *)(param_2 + 0x98);
  if (((cVar1 != '\0') && (cVar1 == -0x70)) && (*(char *)(param_2 + 0x9d) != '\0')) {
    local_14[0] = *(byte *)(param_2 + 0x310) & 1;
    uVar2 = FUN__text__00477138(param_2);
    uVar3 = FUN__text__00494e70(param_1,(char *)(param_2 + 0x98),uVar2,local_14,
                                *(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x34));
    if ((int)uVar3 != 1) {
      return uVar3;
    }
    *(byte *)(param_2 + 0x310) = *(byte *)(param_2 + 0x310) & 0xfe | local_14[0];
  }
  uVar3 = FUN__text__004965f0(param_1,param_2);
  if ((int)uVar3 == 3) {
    return 1;
  }
  if ((int)uVar3 == 1) {
    uVar3 = (**(code **)(*param_1 + 0x268))(param_1,param_2);
  }
  return uVar3;
}


