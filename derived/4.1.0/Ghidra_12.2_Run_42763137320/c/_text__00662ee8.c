/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00662ee8; name: FUN_.text__00662ee8
 */


undefined8 FUN__text__00662ee8(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined4 local_44;
  
  if ((param_2 & 1) == 0) {
LAB__text__00662f10:
    uVar5 = 0;
  }
  else {
    if ((*(byte *)((long)param_1 + 0x3fc) & 1) == 0) {
      uVar1 = FUN__text__00666b6c(*(undefined4 *)(param_1 + 0x4b),0xffffffff,0xffffffff,0);
      if (uVar1 == 0) goto LAB__text__00662f10;
      if (((uVar1 & 5) == 1) && (uVar3 = FUN__text__00650bb0(param_1), (uVar3 & 1) != 0)) {
        local_44 = 0;
        if (((code *)param_1[0xb7] != (code *)0x0) &&
           (uVar3 = (*(code *)param_1[0xb7])(param_1,0,param_1[0xb8],0x8000,&local_44),
           uVar3 != 0xffffffffffffffff)) {
          FUN__text__00666f74(*param_1,0x70b290,uVar3 & 0xffffffff);
          param_1[0xba] = 0;
          param_1[0xb9] = uVar3;
          FUN__text__00661d1c(param_1,param_1 + 0xaa,&local_44);
          goto LAB__text__00662f10;
        }
      }
    }
    uVar5 = 1;
  }
  if ((param_2 >> 1 & 1) != 0) {
    auVar7 = FUN__text__0066c6a8();
    iVar2 = FUN__text__0066c6d8(auVar7._0_8_,auVar7._8_8_,param_1[0x87],param_1[0x88]);
    if ((long)param_1[0x89] < (long)iVar2) {
      iVar2 = FUN__text__006865f4(param_1[0xaa],0,0);
      if (iVar2 == 0) {
        *(undefined1 (*) [16])(param_1 + 0x87) = auVar7;
        iVar2 = FUN__text__0067c120(param_1[0xaa]);
        if (iVar2 != 0) {
          uVar6 = *param_1;
          uVar4 = FUN__text__00679b60();
          FUN__text__0066713c(uVar6,0x70fd44,uVar4,iVar2);
        }
      }
      else {
        uVar6 = *param_1;
        uVar4 = FUN__text__00679b60();
        FUN__text__0066713c(uVar6,0x716e0e,uVar4,iVar2);
        *(undefined1 (*) [16])(param_1 + 0x87) = auVar7;
      }
    }
  }
  return uVar5;
}


