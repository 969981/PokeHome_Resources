/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001937a8; name: FUN_.text__001937a8
 */


bool FUN__text__001937a8(long param_1,undefined8 param_2,int *param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar2 = FUN__text__00195358();
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x18) != 0)) {
    uVar3 = *(ulong *)(lVar2 + 8);
    lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x40) + (uVar3 & 0xffffffff) * 0x20 +
                                         0x10) + 0x10) + 8);
    if (lVar5 != 0) {
      uVar6 = *(undefined8 *)(lVar2 + 0x10);
      plVar4 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      local_50 = 0;
      uStack_48 = 0;
      local_60 = 0;
      local_58 = 0;
      local_70 = 0;
      uStack_68 = 0;
      FUN__text__003030cc(lVar5,uVar3 >> 0x20,(int)uVar6 + (int)((ulong)uVar6 >> 0x20) * 6,&local_70
                         );
      if ((((int)local_70 == *param_3) && (uStack_68._4_4_ == param_3[1])) &&
         ((int)local_58 == param_3[2])) {
        bVar1 = local_50._4_4_ != param_3[3];
      }
      else {
        bVar1 = true;
      }
      (**(code **)(*plVar4 + 0x18))(plVar4);
      return bVar1;
    }
  }
  return false;
}


