/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069add4; name: FUN_.text__0069add4
 */


void FUN__text__0069add4(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 local_138;
  long local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined1 local_34;
  
  local_34 = 0;
  local_38 = 0x676d6974;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  local_130 = 0;
  if ((*(char *)(param_1 + 0x40) == '.') && (*(char *)(param_1 + 0x41) == '\0')) {
    nn::util::SNPrintf((char *)&local_138,0xff,(char *)0x70dfe8,&local_38,0x7214b8);
    iVar1 = FUN__text__0069d0e0(param_1 + 8,&local_138);
  }
  else {
    nn::util::SNPrintf((char *)&local_138,0xff,(char *)0x7178c7,(char *)(param_1 + 0x40),&local_38,
                       0x7214b8);
    iVar1 = FUN__text__0069d0e0(param_1 + 8,&local_138);
  }
  if (iVar1 != -1) {
    local_138 = 0;
    lVar2 = FUN__text__0069d068(param_1 + 8,&local_138,iVar1);
    if (lVar2 != 0) {
      lVar2 = FUN__text__006ebc54();
      *(long *)(param_1 + 0xb0) = lVar2;
      if (((lVar2 == 0) || (*(long *)(lVar2 + 0x40) == 0)) ||
         (*(char *)(*(long *)(lVar2 + 0x40) + 0x110) == '\0')) {
        if (*(long *)(param_1 + 0xd0) == 0) {
          lVar3 = *(long *)(lVar2 + 0x30);
          local_138 = CONCAT44(local_138._4_4_,0x21);
          local_128 = 0;
          uStack_120 = 0;
          iVar1 = nn::util::BinaryBlockHeader::GetBlockSize();
          local_138 = CONCAT44(iVar1 + -0x10,(undefined4)local_138);
          local_130 = lVar3 + 0x10;
          FUN__text__006ee680(*(undefined8 *)(lVar2 + 0x40),param_2,&local_138);
          *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(lVar2 + 0x40);
          *(undefined8 *)(lVar2 + 0x50) = 0;
          return;
        }
        lVar3 = *(long *)(param_1 + 200);
        lVar4 = *(long *)(param_1 + 0xd8);
        *(long *)(lVar2 + 0x48) = *(long *)(param_1 + 0xd0);
        *(long *)(lVar2 + 0x50) = *(long *)(lVar2 + 0x30) + (lVar4 - lVar3) + 0x10;
        return;
      }
    }
  }
  return;
}


