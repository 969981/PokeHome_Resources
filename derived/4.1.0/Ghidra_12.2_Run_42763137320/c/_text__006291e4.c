/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006291e4; name: FUN_.text__006291e4
 */


void FUN__text__006291e4(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined1 auStack_40 [32];
  
  FUN__text__0060eea4(auStack_40);
  FUN__text__0060efe0(auStack_40,param_1);
  FUN__text__00617ee0(auStack_40,3);
  uVar3 = FUN__text__006092f0();
  if ((uVar3 & 1) == 0) goto LAB__text__00629324;
  uVar3 = FUN__text__0060f6e0(auStack_40,7);
  if ((uVar3 & 1) == 0) {
LAB__text__00629258:
    uVar3 = FUN__text__0060f6e0(auStack_40,5);
    if ((uVar3 & 1) != 0) {
      uVar1 = FUN__text__00617a10(auStack_40,5);
      uVar2 = FUN__text__00617ee0(auStack_40,5);
      uVar3 = FUN__text__006092f0();
      if ((uVar3 & 1) == 0) goto LAB__text__00629304;
    }
    uVar3 = FUN__text__0060f6e0(auStack_40,4);
    if ((uVar3 & 1) != 0) {
      uVar1 = FUN__text__00617a10(auStack_40,4);
      uVar2 = FUN__text__00617ee0(auStack_40,4);
      uVar3 = FUN__text__006092f0();
      if ((uVar3 & 1) == 0) goto LAB__text__00629304;
    }
    uVar3 = FUN__text__0060f6e0(auStack_40,1);
    if ((uVar3 & 1) == 0) goto LAB__text__00629324;
    uVar1 = FUN__text__00617a10(auStack_40,1);
    uVar2 = FUN__text__00617ee0(auStack_40,1);
    uVar3 = FUN__text__006092f0();
    if ((uVar3 & 1) != 0) goto LAB__text__00629324;
  }
  else {
    uVar1 = FUN__text__00617a10(auStack_40,7);
    uVar2 = FUN__text__00617ee0(auStack_40,7);
    uVar3 = FUN__text__006092f0();
    if ((uVar3 & 1) != 0) goto LAB__text__00629258;
  }
LAB__text__00629304:
  FUN__text__0061ebb0(auStack_40,uVar1,3);
  FUN__text__0061f0a0(auStack_40,uVar2,3);
LAB__text__00629324:
  FUN__text__0060eef8(auStack_40);
  return;
}


