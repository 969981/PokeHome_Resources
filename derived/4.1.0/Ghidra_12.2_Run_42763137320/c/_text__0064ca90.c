/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064ca90; name: FUN_.text__0064ca90
 */


undefined8 FUN__text__0064ca90(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  
  FUN__text__005e9054(0);
  lVar1 = DAT_00c5f5b0;
  plVar2 = (long *)(*(code *)**(undefined8 **)(DAT_00c5f5b0 + 8))();
  plVar3 = (long *)FUN__text__001020a4();
  if (plVar3 != plVar2) {
    do {
      plVar2 = (long *)*plVar2;
    } while (plVar2 != plVar3 && plVar2 != (long *)0x0);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
  }
  uVar4 = FUN__text__001004c0(lVar1,param_1,param_2);
  return uVar4;
}


