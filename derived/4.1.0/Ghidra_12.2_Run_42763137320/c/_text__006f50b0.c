/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f50b0; name: FUN_.text__006f50b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006f50b0(undefined8 *param_1,undefined8 *param_2,byte *param_3,undefined8 param_4,
                        undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_68;
  undefined8 local_60 [4];
  
  *param_1 = param_2;
  *(byte *)((long)param_1 + 0x192) = *param_3;
  if (*param_3 < 2) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN__text__006f5f48();
  }
  *(undefined4 *)((long)param_1 + 0x194) = uVar3;
  *(byte *)((long)param_1 + 0x191) = *(byte *)((long)param_1 + 0x191) | 1;
  FUN__text__006f5260(param_1,param_2,param_3,param_4,param_5,param_6);
  bVar2 = *param_3;
  local_60[2] = 0;
  local_60[3] = 0;
  local_60[0] = 0;
  local_60[1] = 0;
  if (bVar2 != 0) {
    if (bVar2 == 1) {
      uVar4 = 0;
    }
    else {
      puVar6 = param_1 + 0x4f;
      uVar5 = 0;
      do {
        puVar1 = puVar6 + -0x1b;
        uVar4 = uVar5 + 2;
        uVar7 = *puVar6;
        puVar6 = puVar6 + 0x36;
        local_60[uVar5] = *puVar1;
        local_60[uVar5 + 1] = uVar7;
        uVar5 = uVar4;
      } while (((ulong)bVar2 & 0xfe) != uVar4);
    }
    if ((bVar2 & 1) != 0) {
      local_60[uVar4] = param_1[uVar4 * 0x1b + 0x34];
    }
  }
  param_1[1] = param_1 + 2;
  local_68 = *(void **)(param_3 + 0x10);
  if (local_68 == (void *)0x0) {
    nn::vi::GetNativeWindow(&local_68,*(Layer **)(param_3 + 0x18));
  }
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  (*(code *)*_DAT_008a71d8)(&local_a8,*param_2);
  (*(code *)*_DAT_008a71e0)(&local_a8);
  (*(code *)*_DAT_008a71f0)(&local_a8,*param_3,local_60);
  (*(code *)*_DAT_008a71f8)(&local_a8,1);
  FUN__text__006f5f50(param_1[1],&local_a8,local_68);
  *(undefined1 *)(param_1 + 0x32) = 1;
  return;
}


