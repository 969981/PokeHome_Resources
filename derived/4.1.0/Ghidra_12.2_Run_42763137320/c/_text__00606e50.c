/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00606e50; name: FUN_.text__00606e50
 */


void FUN__text__00606e50(undefined8 param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  undefined1 auStack_60 [32];
  
  uVar7 = FUN__text__0062c660();
  if ((uVar7 & 1) != 0) {
    FUN__text__0060eea4(auStack_60);
    FUN__text__0060efe0(auStack_60,param_1);
    uVar2 = FUN__text__0060fed0(auStack_60);
    uVar3 = FUN__text__00615940(auStack_60);
    uVar4 = FUN__text__00610350(auStack_60);
    uVar4 = FUN__text__00637870(uVar2,uVar3,uVar4);
    uVar1 = FUN__text__005ffc50(uVar2,uVar3,7);
    if (uVar1 != 0) {
      uVar8 = 0;
      do {
        uVar5 = FUN__text__00600044(uVar2,uVar3,uVar8,7);
        uVar7 = FUN__text__00645628(uVar2,uVar3,uVar5,uVar4);
        if (((uVar7 & 1) != 0) && (iVar6 = FUN__text__00645570(uVar5), -1 < iVar6)) {
          FUN__text__00621d90(auStack_60,iVar6,1);
        }
        uVar8 = uVar8 + 1;
      } while (uVar1 != uVar8);
    }
    FUN__text__0060eef8(auStack_60);
  }
  return;
}


