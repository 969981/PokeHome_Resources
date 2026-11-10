/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e93d4; name: FUN_.text__003e93d4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003e93d4(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long lStack_60;
  ushort local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN__text__006ebc14(&local_50);
  uVar5 = _DAT_008a0448;
  local_50 = CONCAT44(local_50._4_4_,0x22);
  lVar1 = *param_2;
  lVar2 = param_2[1];
  lVar4 = FUN__text__006ee668(_DAT_008a0448,&local_50);
  uVar5 = FUN__text__006ee660(uVar5,&local_50);
  FUN__text__005a5684(&local_90,*(undefined8 *)(*_DAT_008a0228 + 0x10),0,
                      (lVar4 + (lVar2 + lVar1) * 2) - 1U & -lVar4,uVar5);
  lVar4 = *(long *)(param_1 + 0x2c8);
  *(undefined8 *)(lVar4 + 0xf0) = local_90;
  if (*(long *)(lVar4 + 0xf8) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar4 + 0xf8) + 0x48) + 0x18))();
  }
  lVar3 = local_88;
  local_90 = 0;
  local_88 = 0;
  *(long *)(lVar4 + 0xf8) = lVar3;
  *(undefined8 *)(lVar4 + 0x100) = local_80;
  *(undefined8 *)(lVar4 + 0x108) = local_78;
  local_80 = 0xffffffffffffffff;
  local_78 = 0;
  FUN__text__005b509c(&local_90);
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
  }
  local_58 = 0;
  local_90 = CONCAT44(local_90._4_4_,0x10);
  local_78 = FUN__text__005b50f0(*(long *)(param_1 + 0x2c8) + 0xf0);
  local_80 = CONCAT44(local_80._4_4_,2);
  local_58 = local_58 & 0xff00;
  uStack_70 = *(undefined8 *)(*(long *)(param_1 + 0x2c8) + 0x100);
  local_68 = _DAT_008a5298;
  local_88 = lVar2 + lVar1;
  lStack_60 = param_1;
  FUN__text__0068bb40(param_1 + 0x2d0,_DAT_008a0448,&local_90);
  return;
}


