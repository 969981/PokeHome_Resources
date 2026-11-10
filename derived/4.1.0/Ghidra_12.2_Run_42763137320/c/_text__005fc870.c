/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005fc870; name: FUN_.text__005fc870
 */


void FUN__text__005fc870(long param_1,undefined8 param_2,undefined4 param_3)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  
  *(undefined4 *)(param_1 + 0xe64) = 0;
  uVar3 = FUN__text__00632ee0(param_2);
  FUN__text__005fcbd0(param_1,param_2,2,param_3);
  FUN__text__005fcbd0(param_1,param_2,4,param_3);
  FUN__text__005fcbd0(param_1,param_2,3,param_3);
  FUN__text__005fcbd0(param_1,param_2,5,param_3);
  FUN__text__005fcbd0(param_1,param_2,7,param_3);
  FUN__text__005fce74(param_1,param_2,1,param_3);
  FUN__text__005fce74(param_1,param_2,2,param_3);
  FUN__text__005fce74(param_1,param_2,4,param_3);
  FUN__text__005fce74(param_1,param_2,3,param_3);
  FUN__text__005fce74(param_1,param_2,5,param_3);
  FUN__text__005fcf70(param_1,param_2,1,param_3);
  FUN__text__005fcf70(param_1,param_2,2,param_3);
  FUN__text__005fcf70(param_1,param_2,4,param_3);
  FUN__text__005fcf70(param_1,param_2,3,param_3);
  FUN__text__005fcf70(param_1,param_2,5,param_3);
  FUN__text__005fcf70(param_1,param_2,7,param_3);
  uVar6 = FUN__text__00635c70(param_2,2);
  if ((uVar6 & 1) != 0) {
    iVar5 = 0;
    do {
      uVar6 = thunk_FUN__text__00633780(param_2,iVar5);
      if ((uVar6 & 1) != 0) {
        uVar4 = FUN__text__00646f70(iVar5);
        FUN__text__005fcce0(param_1,uVar4,2,param_3,param_2,3);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 100);
  }
  uVar6 = FUN__text__00635c70(param_2,3);
  if ((uVar6 & 1) != 0) {
    bVar1 = FUN__text__00643de0();
    if (bVar1 != 0) {
      uVar7 = 0;
      do {
        uVar6 = thunk_FUN__text__00635414(param_2,uVar7);
        if ((uVar6 & 1) != 0) {
          uVar4 = FUN__text__00643de8(uVar7);
          FUN__text__005fcce0(param_1,uVar4,3,param_3,param_2,4);
        }
        uVar7 = uVar7 + 1;
      } while (bVar1 != uVar7);
    }
  }
  uVar6 = FUN__text__00635c70(param_2,3);
  if (((uVar6 & 1) != 0) && (uVar6 = FUN__text__00635270(param_2), (uVar6 & 1) != 0)) {
    uVar4 = FUN__text__00635278(param_2);
    FUN__text__005fcce0(param_1,uVar4,3,param_3,param_2,5);
  }
  uVar6 = FUN__text__00635c70(param_2,5);
  if ((uVar6 & 1) != 0) {
    iVar5 = 1;
    do {
      uVar6 = FUN__text__0064af50(param_2,iVar5);
      if ((uVar6 & 1) != 0) {
        uVar4 = FUN__text__0064aed0(iVar5);
        FUN__text__005fcce0(param_1,uVar4,5,param_3,param_2,6);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0xe6);
  }
  iVar5 = FUN__text__00631008(param_2);
  sVar2 = FUN__text__00631010(param_2);
  if ((iVar5 == 0x1df) && ((ushort)(sVar2 - 1U) < 5)) {
    FUN__text__005fcce0(param_1,*(undefined4 *)((long)(short)(sVar2 - 1U) * 4 + 0x757fb8),param_3,
                        param_3,param_2,7);
  }
  FUN__text__006331e0(param_2,uVar3 & 1);
  return;
}


