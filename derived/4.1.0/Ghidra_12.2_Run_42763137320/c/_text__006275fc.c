/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006275fc; name: FUN_.text__006275fc
 */


void FUN__text__006275fc(undefined8 param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [32];
  
  FUN__text__0060eea4(auStack_40);
  FUN__text__0060efe0(auStack_40,param_1);
  uVar3 = 2;
  uVar2 = FUN__text__0060f6e0(auStack_40,2);
  if ((uVar2 & 1) == 0) {
    uVar3 = 1;
    uVar2 = FUN__text__0060f6e0(auStack_40,1);
    if ((uVar2 & 1) == 0) {
      uVar3 = 3;
      uVar2 = FUN__text__0060f6e0(auStack_40,3);
      if ((uVar2 & 1) == 0) goto LAB__text__0062767c;
    }
  }
  uVar1 = FUN__text__006183b0(auStack_40,uVar3);
  FUN__text__0061f590(auStack_40,uVar1,4);
LAB__text__0062767c:
  FUN__text__0060eef8(auStack_40);
  return;
}


