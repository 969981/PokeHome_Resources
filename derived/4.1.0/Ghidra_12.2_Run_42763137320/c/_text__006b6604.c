/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b6604; name: FUN_.text__006b6604
 */


void FUN__text__006b6604(undefined1 param_1 [16],undefined4 param_2,long *param_3,long param_4)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uVar1 = FUN__text__006c1bd0(param_4,*param_3);
  *(uint *)(param_3 + 6) = uVar1;
  lVar3 = *(long *)(*(long *)(param_4 + 200) + 0x38);
  if (lVar3 == 0) goto LAB__text__006b677c;
  lVar3 = lVar3 + (ulong)uVar1;
  lVar4 = param_3[1];
  if ((((lVar4 == 0) || ((*(byte *)(param_3 + 0x45) >> 2 & 1) != 0)) ||
      ((*(byte *)(lVar4 + 4) >> 1 & 1) == 0)) || (*(char *)((long)param_3 + 0x54) == '\0')) {
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    FUN__text__006ad654(&local_48,lVar4 + 0x18,param_3 + 2);
    if ((*(byte *)(param_3[1] + 4) & 1) == 0) {
      *(undefined4 *)(lVar3 + 0x90) = (undefined4)local_48;
      *(undefined4 *)(lVar3 + 0x98) = 0;
      *(undefined4 *)(lVar3 + 0x94) = local_48._4_4_;
      *(undefined4 *)(lVar3 + 0x9c) = (undefined4)local_40;
      *(undefined4 *)(lVar3 + 0xa0) = local_40._4_4_;
      *(undefined4 *)(lVar3 + 0xa8) = 0;
      *(undefined4 *)(lVar3 + 0xa4) = (undefined4)local_38;
      *(undefined4 *)(lVar3 + 0xac) = local_38._4_4_;
      lVar4 = param_3[1];
    }
    else {
      *(undefined4 *)(lVar3 + 0x70) = (undefined4)local_48;
      *(undefined4 *)(lVar3 + 0x78) = 0;
      *(undefined4 *)(lVar3 + 0x74) = local_48._4_4_;
      *(undefined4 *)(lVar3 + 0x7c) = (undefined4)local_40;
      *(undefined4 *)(lVar3 + 0x80) = local_40._4_4_;
      *(undefined4 *)(lVar3 + 0x88) = 0;
      *(undefined4 *)(lVar3 + 0x84) = (undefined4)local_38;
      *(undefined4 *)(lVar3 + 0x8c) = local_38._4_4_;
      lVar4 = param_3[1];
    }
    if (lVar4 != 0) goto LAB__text__006b6704;
  }
  else {
LAB__text__006b6704:
    if (((*(byte *)(param_3 + 0x45) >> 2 & 1) == 0) && ((*(byte *)(lVar4 + 4) >> 1 & 1) != 0)) {
      param_2 = 0x437f0000;
      fVar5 = (float)NEON_ucvtf((uint)*(byte *)(*param_3 + 0x5a));
      *(float *)(lVar3 + 0xdc) = (fVar5 / 255.0) / 255.0;
    }
  }
  local_48 = 0;
  (**(code **)(*(long *)*param_3 + 0x60))((long *)*param_3,&local_48);
  local_18 = FUN__text__006b7a20(param_3,&local_48);
  uStack_14 = param_2;
  FUN__text__0069d960(param_4,lVar3,&local_18,&local_48,1,0x76636c);
LAB__text__006b677c:
  if ((param_3[0xb] != 0) ||
     (((param_3[1] != 0 && ((*(byte *)(param_3 + 0x45) >> 2 & 1) == 0)) &&
      (((*(byte *)(param_3[1] + 4) >> 1 & 1) != 0 && (*(char *)((long)param_3 + 0x54) == '\0'))))))
  {
    uVar2 = FUN__text__006c1bd0(param_4,*param_3);
    *(undefined4 *)(param_3 + 10) = uVar2;
    FUN__text__006b7b30(param_3,param_4);
  }
  return;
}


