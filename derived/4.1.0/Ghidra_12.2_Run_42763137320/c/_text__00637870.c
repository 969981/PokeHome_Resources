/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00637870; name: FUN_.text__00637870
 */


int FUN__text__00637870(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  FUN__text__006013f0();
  uVar3 = 1;
  do {
    uVar2 = FUN__text__00601470(uVar3);
    uVar1 = uVar3 & 0xff;
    if (param_3 < uVar2) {
      if (uVar1 < 2) {
        return 1;
      }
      return uVar3 - 1;
    }
    uVar3 = uVar3 + 1;
  } while (uVar1 < 100);
  return 100;
}


