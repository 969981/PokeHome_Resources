/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0062ac4c; name: FUN_.text__0062ac4c
 */


void FUN__text__0062ac4c(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined1 auStack_50 [32];
  
  FUN__text__0060eea4(auStack_50);
  FUN__text__0060efe0(auStack_50,param_1);
  FUN__text__00617ee0(auStack_50,5);
  uVar3 = FUN__text__006092f0();
  if ((uVar3 & 1) == 0) goto LAB__text__0062ad90;
  uVar3 = FUN__text__0060f6e0(auStack_50,7);
  if ((uVar3 & 1) == 0) {
LAB__text__0062acc4:
    uVar3 = FUN__text__0060f6e0(auStack_50,4);
    if ((uVar3 & 1) != 0) {
      uVar1 = FUN__text__00617a10(auStack_50,4);
      uVar2 = FUN__text__00617ee0(auStack_50,4);
      uVar3 = FUN__text__006092f0();
      if ((uVar3 & 1) == 0) goto LAB__text__0062ad6c;
    }
    uVar3 = FUN__text__0060f6e0(auStack_50,1);
    if ((uVar3 & 1) != 0) {
      uVar1 = FUN__text__00617a10(auStack_50,1);
      uVar2 = FUN__text__00617ee0(auStack_50,1);
      uVar3 = FUN__text__006092f0();
      if ((uVar3 & 1) == 0) goto LAB__text__0062ad6c;
    }
    uVar3 = FUN__text__0060f6e0(auStack_50,3);
    if ((uVar3 & 1) == 0) goto LAB__text__0062ad90;
    uVar1 = FUN__text__00617a10(auStack_50,3);
    uVar2 = FUN__text__00617ee0(auStack_50,3);
    uVar3 = FUN__text__006092f0();
    if ((uVar3 & 1) != 0) goto LAB__text__0062ad90;
  }
  else {
    uVar1 = FUN__text__00617a10(auStack_50,7);
    uVar2 = FUN__text__00617ee0(auStack_50,7);
    uVar3 = FUN__text__006092f0();
    if ((uVar3 & 1) != 0) goto LAB__text__0062acc4;
  }
LAB__text__0062ad6c:
  FUN__text__0061ebb0(auStack_50,uVar1,5);
  FUN__text__0061f0a0(auStack_50,uVar2,5);
LAB__text__0062ad90:
  FUN__text__0060eef8(auStack_50);
  return;
}


