/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006834ec; name: FUN_.text__006834ec
 */


undefined8 FUN__text__006834ec(long param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  do {
    while( true ) {
      lVar3 = *(long *)(param_1 + 8);
      uVar2 = *(long *)(lVar3 + 0x10) - *(long *)(lVar3 + 0x20);
      if (param_3 <= uVar2) {
        uVar2 = param_3;
      }
      if (uVar2 != 0) break;
      uVar1 = FUN__text__00683578(param_1);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    }
    uVar1 = FUN__text__00679e18(*(long *)(lVar3 + 0x20),param_2,uVar2);
    param_2 = param_2 + uVar2;
    param_3 = param_3 - uVar2;
    *(undefined8 *)(lVar3 + 0x20) = uVar1;
  } while (param_3 != 0);
  return 0;
}


