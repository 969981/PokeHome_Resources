/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0052b020; name: FUN_.text__0052b020
 */


void FUN__text__0052b020(undefined8 param_1,undefined1 param_2 [16],undefined8 param_3,long param_4,
                        long param_5,uint param_6,ulong param_7)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  uVar8 = param_2._4_4_;
  uVar7 = param_2._0_4_;
  uStack_50 = param_2._0_8_;
  puVar5 = (undefined8 *)(param_4 + 8);
  if (*(int *)(param_4 + 0xf8) != 0) {
    puVar5 = (undefined8 *)(param_4 + (ulong)(*(int *)(param_4 + 0xf8) - 1) * 0x18 + 0x20);
  }
  local_70 = *puVar5;
  uStack_68 = puVar5[1];
  local_60 = puVar5[2];
  local_58 = param_1;
  local_48 = param_3;
  if (param_6 < *(int *)(param_5 + 0x80) - 1U) {
    uVar3 = (ulong)param_6;
    lVar4 = 0;
    puVar5 = (undefined8 *)(param_5 + uVar3 * 8);
    if ((param_7 & 1) == 0) {
      do {
        puVar1 = puVar5 + lVar4;
        local_70 = FUN__text__0052acf0(param_4,&local_70,puVar1[1],*(undefined8 *)(puVar1[8] + 0x78)
                                       ,*puVar1);
        lVar4 = lVar4 + 1;
        uStack_68 = CONCAT44(uVar8,uVar7);
        local_60 = param_3;
      } while (uVar3 + lVar4 < (ulong)(*(int *)(param_5 + 0x80) - 1));
    }
    else {
      do {
        lVar2 = FUN__text__00527e90(puVar5[9],*puVar5,puVar5[1]);
        if (lVar2 == 0) {
          local_70 = FUN__text__0052acf0(param_4,&local_70,puVar5[1],
                                         *(undefined8 *)(puVar5[8] + 0x78),*puVar5);
          uStack_68 = CONCAT44(uVar8,uVar7);
          local_60 = param_3;
        }
        else {
          FUN__text__0052aed8(param_4,lVar2,*puVar5,puVar5[1],*(undefined8 *)(puVar5[8] + 0x78),
                              *(undefined8 *)(puVar5[9] + 0x78));
        }
        lVar4 = lVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar3 + lVar4 < (ulong)(*(int *)(param_5 + 0x80) - 1));
    }
    param_6 = param_6 + (int)lVar4;
  }
  puVar5 = (undefined8 *)(param_5 + (ulong)param_6 * 8);
  FUN__text__0052acf0(param_4,&local_70,&local_58,*(undefined8 *)(puVar5[8] + 0x78),*puVar5);
  fVar6 = *(float *)(param_4 + 0x108);
  if (*(float *)(param_4 + 0x108) <= *(float *)(param_5 + 0x88)) {
    fVar6 = *(float *)(param_5 + 0x88);
  }
  *(undefined8 *)(param_4 + 0xe0) = local_58;
  *(undefined8 *)(param_4 + 0xe8) = uStack_50;
  *(undefined8 *)(param_4 + 0xf0) = local_48;
  *(float *)(param_4 + 0x108) = fVar6;
  return;
}


