/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001e8fe0; name: FUN_.text__001e8fe0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001e8fe0(long param_1,undefined8 *param_2,int param_3)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long local_258;
  byte local_250;
  undefined6 uStack_24f;
  undefined4 uStack_249;
  ulong local_38;
  
  lVar6 = *(long *)(param_1 + 0x78);
  *(undefined8 *)(lVar6 + 8) = param_2[3];
  FUN__text__00139e64(*param_2,*(undefined4 *)(param_2 + 2));
  if (*(int *)(param_2 + 1) == 0) {
    FUN__text__0013a0d0(*param_2,0,*(undefined4 *)(param_2 + 2));
    lVar4 = *(long *)(*(long *)(param_1 + 0xb0) + 0x60);
  }
  else {
    FUN__text__0013a1b8();
    lVar4 = *(long *)(*(long *)(param_1 + 0xb0) + 0x60);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  uVar7 = 0xcbf29ce484222645;
  memset(&local_250,0,0x200);
  if (param_3 < 1) {
    local_250 = (byte)_DAT_007173e2;
    uStack_24f = (undefined6)((ulong)_DAT_007173e2 >> 8);
    uStack_249 = CONCAT31(0x3070,(char)((ulong)_DAT_007173e2 >> 0x38));
    uVar2 = 0x69;
  }
  else {
    snprintf((char *)&local_250,0x200,(char *)0x71e493,(ulong)(param_3 - 1));
    uVar2 = (ulong)local_250;
    if (local_250 == 0) goto LAB__text__001e90f8;
  }
  pbVar3 = (byte *)((ulong)&local_250 | 1);
  do {
    uVar7 = (uVar7 ^ uVar2) * 0x100000001b3;
    bVar1 = *pbVar3;
    uVar2 = (ulong)bVar1;
    pbVar3 = pbVar3 + 1;
  } while (bVar1 != 0);
LAB__text__001e90f8:
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  local_258 = lVar4;
  local_38 = uVar7;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN__text__001ac1fc(uVar5,param_2 + 4,&local_258,&local_38);
  if (local_258 != 0) {
    (**(code **)(*(long *)(local_258 + 0x48) + 0x18))();
    local_258 = 0;
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  *(undefined8 *)(lVar6 + 8) = 0;
  return;
}


