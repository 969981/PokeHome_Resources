/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dc728; name: FUN_.text__004dc728
 */


undefined8 FUN__text__004dc728(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char local_4 [4];
  
  if ((*(byte *)(param_1 + 0x82) >> 2 & 1) != 0) {
LAB__text__004dc758:
    uVar1 = FUN__text__004dc7e4(param_1);
    return uVar1;
  }
  if (*(long *)(param_1 + 0x58) == 0) {
    uVar1 = FUN__text__004dcb70(param_1,param_2,0);
    if ((((int)uVar1 == 1) && (uVar1 = FUN__text__004dcd44(param_1,local_4), (int)uVar1 == 1)) &&
       (uVar1 = (**(code **)(**(long **)(param_1 + 0x58) + 0x68))(), (int)uVar1 == 1)) {
      if (local_4[0] != '\0') {
        return 1;
      }
      uVar1 = FUN__text__004dc960(param_1);
      if ((int)uVar1 == 1) {
        uVar1 = FUN__text__004dc7e4(param_1);
      }
    }
  }
  else {
    uVar1 = FUN__text__004dc960(param_1);
    if ((int)uVar1 == 1) goto LAB__text__004dc758;
  }
  return uVar1;
}


