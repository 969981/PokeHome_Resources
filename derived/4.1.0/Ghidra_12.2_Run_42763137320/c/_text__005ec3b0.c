/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005ec3b0; name: FUN_.text__005ec3b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005ec3b0(long param_1,undefined1 param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar2 = _DAT_008a0448;
  uVar7 = 0;
  param_1 = param_1 + 0x798;
  do {
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    FUN__text__006ebd70(&local_80);
    uVar5 = uStack_78;
    uVar3 = local_80;
    uVar6 = (uint)uVar7;
    uVar1 = local_80._4_2_ & 0xfff8;
    local_80 = CONCAT71(local_80._1_7_,(char)(uVar7 >> 4));
    uVar4 = local_80;
    local_80._6_2_ = SUB82(uVar3,6);
    local_80._0_6_ =
         CONCAT24(uVar1 | ((ushort)((uVar6 & 0xaaaaaaaa) >> 1) | (ushort)((uVar6 & 0x55555555) << 1)
                          ) & 3 | (ushort)((uVar7 & 0xc) != 0) << 2,(int)uVar4);
    if ((uVar6 >> 3 & 1) == 0) {
      if ((uVar6 >> 2 & 1) != 0) {
        uStack_78._0_4_ = CONCAT22(0x702,(undefined2)uStack_78);
        goto LAB__text__005ec3f4;
      }
    }
    else {
      uStack_78._0_4_ = CONCAT13(5,(undefined3)uStack_78);
LAB__text__005ec3f4:
      uStack_78._5_3_ = SUB83(uVar5,5);
      uStack_78._0_5_ = CONCAT14(param_2,(undefined4)uStack_78);
    }
    FUN__text__006f483c(param_1,uVar2,&local_80);
    uVar7 = uVar7 + 1;
    param_1 = param_1 + 0x1c;
    if (uVar7 == 0x80) {
      return;
    }
  } while( true );
}


