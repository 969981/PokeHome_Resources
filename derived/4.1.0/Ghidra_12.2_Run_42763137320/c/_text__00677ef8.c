/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00677ef8; name: FUN_.text__00677ef8
 */


undefined8 FUN__text__00677ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN__text__00676654(0x89a398);
  if (lVar2 == 0) {
    uVar3 = 0x1b;
  }
  else {
    uVar1 = FUN__text__0067826c(param_2);
    FUN__text__006766b0(lVar2,param_1,uVar1);
    FUN__text__006766d0(lVar2,param_3);
    uVar3 = 0;
  }
  return uVar3;
}


