/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b56f0; name: FUN_.text__006b56f0
 */


void FUN__text__006b56f0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                        long param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  long *plVar7;
  undefined4 local_44;
  
  plVar7 = *(long **)(param_5 + 0x30);
  lVar6 = *plVar7;
  *(long *)(param_1 + 8) = param_4;
  if ((*(byte *)(param_4 + 0x14) & 1) != 0) {
    lVar4 = **(long **)(param_5 + 0x30) + 0xc;
    uVar1 = *(uint *)(lVar4 + (ulong)*(ushort *)(param_4 + 0x10) * 4);
    uVar3 = FUN__text__006a2854(*(undefined8 *)(param_5 + 0xa0));
    lVar4 = FUN__text__006a4760(uVar3,lVar4 + (ulong)uVar1);
    uVar5 = 3;
    if (0 < *(int *)(param_5 + 0xe0)) {
      uVar5 = 1;
    }
    *(undefined1 *)(lVar4 + 0x18) = uVar5;
    FUN__text__006bc174(param_1 + 0x20,*(undefined8 *)(lVar4 + 8));
  }
  FUN__text__006bc190(param_1 + 0x20,*(byte *)(param_4 + 0x12) & 3,*(byte *)(param_4 + 0x13) & 3);
  FUN__text__006bc1ac(param_1 + 0x20,*(byte *)(param_4 + 0x12) >> 2 & 3,
                      *(byte *)(param_4 + 0x13) >> 2 & 3);
  lVar6 = lVar6 + 0xc + (ulong)*(uint *)(lVar6 + 0xc + (ulong)*(ushort *)(param_4 + 8) * 4);
  if ((*(uint *)(param_4 + 0xc) & 1) == 0) {
    if ((*(uint *)(param_4 + 0xc) >> 1 & 1) != 0) {
      uVar3 = FUN__text__006a2854(*(undefined8 *)(param_5 + 0xa0));
      lVar4 = FUN__text__006a46b0(uVar3,lVar6);
      FUN__text__006a4cb0(uVar3,param_2,param_3,*(undefined8 *)(param_5 + 0x20),plVar7[6],lVar6);
      FUN__text__006bc174(param_1 + 0x10,*(undefined8 *)(lVar4 + 8));
      *(byte *)(param_1 + 0x228) = *(byte *)(param_1 + 0x228) | 1;
      goto LAB__text__006b58b4;
    }
    uVar3 = (**(code **)(*(long *)plVar7[6] + 0x70))((long *)plVar7[6],param_3,lVar6);
  }
  else {
    uVar3 = FUN__text__006a2854(*(undefined8 *)(param_5 + 0xa0));
    lVar6 = FUN__text__006a4a30(uVar3,lVar6);
    if (lVar6 == 0) {
      lVar6 = **(long **)(param_5 + 0x30) + 0xc;
      uVar1 = *(uint *)(lVar6 + (ulong)*(ushort *)(param_4 + 8) * 4);
      uVar3 = FUN__text__006a2854(*(undefined8 *)(param_5 + 0xa0));
      lVar6 = FUN__text__006a4760(uVar3,lVar6 + (ulong)uVar1);
      uVar5 = 3;
      if (0 < *(int *)(param_5 + 0xe0)) {
        uVar5 = 1;
      }
      *(undefined1 *)(lVar6 + 0x18) = uVar5;
      *(byte *)(param_1 + 0x228) = *(byte *)(param_1 + 0x228) | 1;
    }
    uVar3 = *(undefined8 *)(lVar6 + 8);
  }
  FUN__text__006bc174(param_1 + 0x10,uVar3);
LAB__text__006b58b4:
  FUN__text__006bc190(param_1 + 0x10,*(byte *)(param_4 + 10) & 3,*(byte *)(param_4 + 0xb) & 3);
  FUN__text__006bc1ac(param_1 + 0x10,*(byte *)(param_4 + 10) >> 2 & 3,
                      *(byte *)(param_4 + 0xb) >> 2 & 3);
  local_44 = 0;
  lVar6 = FUN__text__006a4248(*(undefined8 *)(param_5 + 0x20),param_3,0x4b53414d,1,&local_44);
  *(long *)(param_1 + 0x38) = lVar6;
  uVar2 = FUN__text__006c0d80(*(undefined8 *)(lVar6 + 0x38),0x4b53414d,1,&local_44);
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  return;
}


