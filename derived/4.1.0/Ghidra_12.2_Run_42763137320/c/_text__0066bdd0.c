/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066bdd0; name: FUN_.text__0066bdd0
 */


undefined8 FUN__text__0066bdd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  if ((-1 < *(long *)(param_1 + 4000)) && (*(long *)(param_1 + 0x7e8) != 0)) {
    if (*(long *)(param_1 + 4000) < *(long *)(param_1 + 0x7e0)) {
      if (*(long *)(param_1 + 0x1108) == 0) {
        *(undefined8 *)(param_1 + 0x1108) = param_2;
        *(undefined8 *)(param_1 + 0x1110) = param_3;
      }
      else {
        iVar1 = FUN__text__0066c6d8(param_2,param_3,*(long *)(param_1 + 0x1108),
                                    *(undefined8 *)(param_1 + 0x1110));
        if (*(long *)(param_1 + 0x7e8) * 1000 <= (long)iVar1) {
          FUN__text__0066713c(param_1,0x7199c7,*(undefined8 *)(param_1 + 0x7e0));
          return 0x1c;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x1108) = 0;
    }
  }
  if (*(long *)(param_1 + 0x7e0) != 0) {
    FUN__text__0065a050(param_1,1000,7);
  }
  return 0;
}


