/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d507c; name: FUN_.text__006d507c
 */


void FUN__text__006d507c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_70 = 0;
  local_68 = 0;
  FUN__text__006ebbe4(&local_70);
  local_70 = CONCAT44(8,(undefined4)local_70);
  iVar1 = FUN__text__006ec37c(param_2,&local_70);
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  local_68 = 0;
  lVar7 = (long)(int)((iVar1 + 0x1fU & -iVar1) - 0x20);
  FUN__text__006ebc14(&local_70);
  local_70 = CONCAT44(local_70._4_4_,0x22);
  lVar2 = FUN__text__006ee668(param_2,&local_70);
  local_70 = 0;
  local_68 = 0;
  FUN__text__006ebbe4(&local_70);
  local_70 = CONCAT44(4,(undefined4)local_70);
  uVar3 = FUN__text__006ec37c(param_2,&local_70);
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  local_68 = 0;
  FUN__text__006ebc14(&local_70);
  local_70 = CONCAT44(local_70._4_4_,0x22);
  uVar4 = FUN__text__006ee660(param_2,&local_70);
  if (param_3 == 0) {
    if (uVar3 <= uVar4) {
      uVar3 = uVar4;
    }
    uVar4 = lVar7 + lVar2 + 0x2bU & -lVar2;
    uVar5 = FUN__text__006a0ee8(uVar4,uVar3);
    *(undefined8 *)(param_1 + 0x50) = uVar5;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    local_68 = 0;
    FUN__text__006ebc14(&local_70);
    local_68 = *(undefined8 *)(param_1 + 0x50);
    local_70 = CONCAT44((int)uVar4,0x22);
    param_3 = param_1 + 0x88;
    FUN__text__006ee680(param_3,param_2,&local_70);
    param_4 = 0;
  }
  local_70 = 0;
  local_68 = 0;
  FUN__text__006ebbe4(&local_70);
  lVar2 = param_1 + 0x1a8;
  local_70 = 0x400000020;
  FUN__text__006ec4cc(lVar2,param_2,&local_70,param_3,param_4,0x20);
  FUN__text__006ec64c(lVar2,param_1 + 0x1f0);
  puVar6 = (undefined8 *)FUN__text__006ec5f4(lVar2);
  *puVar6 = 0;
  puVar6[1] = 0x3f800000;
  puVar6[2] = 0x3f80000000000000;
  puVar6[3] = 0x3f8000003f800000;
  FUN__text__006ec608(lVar2);
  local_70 = 0;
  local_68 = 0;
  FUN__text__006ebbe4(&local_70);
  lVar2 = param_1 + 0x200;
  local_70 = 0x80000000c;
  FUN__text__006ec4cc(lVar2,param_2,&local_70,param_3,lVar7 + param_4 + 0x20,0xc);
  FUN__text__006ec64c(lVar2,param_1 + 0x248);
  puVar6 = (undefined8 *)FUN__text__006ec5f4(lVar2);
  *puVar6 = 0x300000001;
  *(undefined4 *)(puVar6 + 1) = 0x30002;
  FUN__text__006ec608(lVar2);
  return;
}


