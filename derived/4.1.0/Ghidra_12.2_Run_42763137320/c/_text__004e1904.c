/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e1904; name: FUN_.text__004e1904
 */


undefined8 * FUN__text__004e1904(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = FUN__text__00400f80(6,0x28);
  puVar3 = (undefined8 *)0x0;
  if (lVar2 != 0) {
    FUN__text__004df2cc();
    iVar1 = FUN__text__004df2dc(lVar2,param_2);
    if (iVar1 != 1) {
      return (undefined8 *)0x0;
    }
    puVar3 = (undefined8 *)FUN__text__00400f80(6,0x10);
    if (puVar3 == (undefined8 *)0x0) {
      FUN__text__004df354(lVar2);
      FUN__text__00400fc0(6,lVar2);
      return (undefined8 *)0x0;
    }
    *puVar3 = 0x88ed18;
    puVar3[1] = lVar2;
  }
  return puVar3;
}


