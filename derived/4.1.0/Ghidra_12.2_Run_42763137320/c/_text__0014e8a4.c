/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0014e8a4; name: FUN_.text__0014e8a4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0014e8a4(long param_1,long *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong local_70 [2];
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined8 local_58;
  ulong local_50;
  undefined4 local_48;
  
  FUN__text__006ec8e0();
  lVar5 = *param_2;
  local_48 = 0;
  local_58 = 0;
  local_50 = 0;
  local_70[1] = 0;
  _uStack_60 = 0;
  FUN__text__006ebee4(local_70 + 1);
  uVar2 = FUN__text__005cd4dc(*(undefined8 *)(lVar5 + 0xb0));
  _uStack_60 = CONCAT44(uVar2,uStack_60);
  uVar2 = FUN__text__005cd554(*(undefined8 *)(lVar5 + 0xb0));
  local_58 = CONCAT44(local_58._4_4_,uVar2);
  FUN__text__006ebed8(&local_50);
  local_50 = (local_50 >> 0x10 & 0xffff) << 0x10;
  local_70[0] = 0;
  FUN__text__006ebed8(local_70);
  piVar1 = _DAT_008a0300;
  local_70[0] = (local_70[0] >> 0x10 & 0xffff) << 0x10;
  FUN__text__006eddd4(*(long *)(*(long *)(lVar5 + 0x60) + 0x58) + (long)*_DAT_008a0300 * 0x168,0x80)
  ;
  lVar6 = *(long *)(lVar5 + 0x60);
  uVar3 = FUN__text__0059fd48(*(undefined8 *)(lVar5 + 0xb8));
  uVar4 = FUN__text__0059fd48(*(undefined8 *)(lVar5 + 0xb0));
  FUN__text__006ed304(*(long *)(lVar6 + 0x58) + (long)*piVar1 * 0x168,uVar3,local_70,0,0,0,uVar4,
                      local_70 + 1);
  if (*(int *)(param_1 + 0x160) != 0) {
    FUN__text__006eddd4(param_1);
    *(undefined4 *)(param_1 + 0x160) = 0;
  }
  FUN__text__006ec93c(param_1);
  return;
}


