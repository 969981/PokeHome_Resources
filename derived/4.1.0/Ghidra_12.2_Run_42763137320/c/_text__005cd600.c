/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cd600; name: FUN_.text__005cd600
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005cd600(long *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long local_78;
  undefined8 local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  undefined4 local_4c;
  long local_48;
  undefined1 uStack_39;
  long *local_38;
  
  FUN__text__005cd974();
  lVar5 = _DAT_008a5940 + 0x40;
  *param_1 = _DAT_008a5940 + 0x10;
  param_1[9] = lVar5;
  uVar1 = tpidr_el0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  if (((uVar1 == 0) || (*(long *)(uVar1 + 0x98) == 0)) ||
     (lVar5 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10), lVar5 == 0)) {
    lVar5 = FUN__text__005f52b0();
    param_1[0x26] = lVar5;
    param_1[0x27] = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    param_1[0x29] = 0;
    if (uVar1 != 0) goto LAB__text__005cd688;
LAB__text__005cd69c:
    lVar5 = FUN__text__005f52b0();
  }
  else {
    param_1[0x26] = lVar5;
    param_1[0x27] = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    param_1[0x29] = 0;
LAB__text__005cd688:
    if ((*(long *)(uVar1 + 0x98) == 0) ||
       (lVar5 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10), lVar5 == 0))
    goto LAB__text__005cd69c;
  }
  param_1[0x2a] = lVar5;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0x3f800000;
  param_1[0x31] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  if ((uVar1 != 0) && (*(long *)(uVar1 + 0x98) != 0)) {
    lVar5 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    if (lVar5 != 0) goto LAB__text__005cd6d8;
  }
  lVar5 = FUN__text__005f52b0();
LAB__text__005cd6d8:
  param_1[0x32] = lVar5;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x35] = 0;
  puVar3 = _DAT_008a5698;
  puVar2 = _DAT_008a0448;
  local_4c = 0;
  (*(code *)*_DAT_008a5698)(*_DAT_008a0448,0x12,&local_4c);
  (*(code *)*puVar3)(*puVar2,0x25,&local_70);
  local_60 = 0;
  local_58 = 0;
  local_70 = 0;
  local_68 = 0;
  FUN__text__006ebbfc(&local_70);
  local_70 = CONCAT71(local_70._1_7_,2);
  local_70 = CONCAT44(0x1000,(undefined4)local_70);
  FUN__text__005cdaa4(param_1,&local_70,local_4c);
  local_60 = 0;
  local_58 = 0;
  local_70 = 0;
  local_68 = 0;
  FUN__text__006ebc88(&local_70);
  lVar6 = ((((((((((((((((((((((((((((((((local_70 & 0xff ^ 0xcbf29ce484222645) * 0x100000001b3 ^
                                        local_70 >> 8 & 0xff) * 0x100000001b3 ^
                                       local_70 >> 0x10 & 0xff) * 0x100000001b3 ^
                                      local_70 >> 0x18 & 0xff) * 0x100000001b3 ^
                                     local_70 >> 0x20 & 0xff) * 0x100000001b3 ^
                                    local_70 >> 0x28 & 0xff) * 0x100000001b3 ^
                                   local_70 >> 0x30 & 0xff) * 0x100000001b3 ^ local_70 >> 0x38) *
                                  0x100000001b3 ^ local_68 & 0xff) * 0x100000001b3 ^
                                local_68 >> 8 & 0xff) * 0x100000001b3 ^ local_68 >> 0x10 & 0xff) *
                               0x100000001b3 ^ local_68 >> 0x18 & 0xff) * 0x100000001b3 ^
                             local_68 >> 0x20 & 0xff) * 0x100000001b3 ^ local_68 >> 0x28 & 0xff) *
                            0x100000001b3 ^ local_68 >> 0x30 & 0xff) * 0x100000001b3 ^
                          local_68 >> 0x38) * 0x100000001b3 ^ local_60 & 0xff) * 0x100000001b3 ^
                        local_60 >> 8 & 0xff) * 0x100000001b3 ^ local_60 >> 0x10 & 0xff) *
                       0x100000001b3 ^ local_60 >> 0x18 & 0xff) * 0x100000001b3 ^
                     local_60 >> 0x20 & 0xff) * 0x100000001b3 ^ local_60 >> 0x28 & 0xff) *
                    0x100000001b3 ^ local_60 >> 0x30 & 0xff) * 0x100000001b3 ^ local_60 >> 0x38) *
                  0x100000001b3 ^ local_58 & 0xff) * 0x100000001b3 ^ local_58 >> 8 & 0xff) *
                0x100000001b3 ^ local_58 >> 0x10 & 0xff) * 0x100000001b3 ^ local_58 >> 0x18 & 0xff)
              * 0x100000001b3 ^ local_58 >> 0x20 & 0xff) * 0x100000001b3 ^ local_58 >> 0x28 & 0xff)
            * 0x100000001b3 ^ local_58 >> 0x30 & 0xff) * 0x100000001b3 ^ local_58 >> 0x38) *
          0x100000001b3;
  local_48 = lVar6;
  FUN__text__005cde24(&local_78,param_1);
  lVar5 = local_78;
  local_38 = &local_48;
  lVar4 = FUN__text__005ce6d0(param_1 + 0x24,&local_48,_DAT_008a01d8,&local_38,&uStack_39);
  *(long *)(lVar4 + 0x18) = lVar5;
  if (param_1[0x35] != 0) {
    (**(code **)(*(long *)(param_1[0x35] + 0x48) + 0x18))();
  }
  param_1[0x35] = local_78;
  FUN__text__005cf660(local_78,param_1 + 10,&local_70,lVar6);
  return;
}


