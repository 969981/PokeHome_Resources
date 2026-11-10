/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00633884; name: FUN_.text__00633884
 */


void FUN__text__00633884(long param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  
  uVar5 = FUN__text__00619110(*(undefined8 *)(param_1 + 0x2f0));
  if ((uVar5 & 1) == 0) {
    uVar2 = FUN__text__00618e10(*(undefined8 *)(param_1 + 0x2f0));
    FUN__text__00621bb0(*(undefined8 *)(param_1 + 0x2f0),uVar2);
    return;
  }
  uVar5 = FUN__text__0060f008();
  if ((uVar5 & 1) == 0) {
    uVar2 = FUN__text__0060fed0(*(undefined8 *)(param_1 + 0x2f0));
    uVar3 = FUN__text__00615940(*(undefined8 *)(param_1 + 0x2f0));
    uVar4 = FUN__text__00610350(*(undefined8 *)(param_1 + 0x2f0));
    uVar1 = FUN__text__00637870(uVar2,uVar3,uVar4);
    FUN__text__00621bb0(*(undefined8 *)(param_1 + 0x2f0),uVar1);
    return;
  }
  uVar2 = FUN__text__0060fec8();
  FUN__text__00621bb0(*(undefined8 *)(param_1 + 0x2f0),uVar2);
  return;
}


